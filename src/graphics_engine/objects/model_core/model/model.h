//
// Created by Tunez on 22.05.2020.
//

#ifndef GAME_ENGINE_MODEL_H
#define GAME_ENGINE_MODEL_H


#include <string>
#include <vector>
#include <cstring>
#include "../vertex/vertex.h"
#include "../edge/edge.h"
#include "../triangle/triangle.h"

class model {
public:
    model() : vertices(), edges() {}

    model(char *obj) {
        vertices = *new std::vector<vertex>();
        edges = *new std::vector<edge>();

        FILE *model_file = fopen(obj, "r");
        char *format;
        int x[3], y[3], z[3];
        vertex v;
        int cnt = 0;
        while (fscanf(model_file, "%s", format) != EOF) {
            cnt++;
            vertices.emplace_back();
            if (strcmp(format, "v") == 0) {
//                printf("start v ");
                fscanf(model_file, "%lf %lf %lf", &v.x, &v.y, &v.z);
                vertices.back() = v;
//                printf("end v\n");
                continue;
            }
            if (strcmp(format, "f") == 0) {
//                printf("%d", cnt);
                fscanf(model_file, "%d/%d/%d %d/%d/%d %d/%d/%d",
                       &x[0], &y[0], &z[0],
                       &x[1], &y[1], &z[1],
                       &x[2], &y[2], &z[2]);
                x[0]--, x[1]--, x[2]--;
                edges.emplace_back(triangle(vertices[x[0]], vertices[x[1]], vertices[x[2]]),
                                   triangle(vertices[y[0]], vertices[y[1]], vertices[y[2]]),
                                   triangle(vertices[z[0]], vertices[z[1]], vertices[z[2]]));
//                printf("e\n");
                continue;
            }
            if (strcmp(format, "vt") == 0 || strcmp(format, "vp") || strcmp(format, "vn")) {
                fscanf(model_file, "%lf %lf %lf", &v.x, &v.y, &v.z);
                continue;
            }
            if (strcmp(format, "#")) {
//                std::cout << "catch comment ";
                char c;
                do {
                    c = fgetc(model_file);
                    std::cout << c;
                } while (c != '\n');
                std::cout << std::endl;
                continue;
            }
        }
        std::cout << "end" << std::endl;
        fclose(model_file);
    }

    ~model() {
    }

    std::vector<edge> edges;
private:
    std::vector<vertex> vertices;

};


#endif //GAME_ENGINE_MODEL_H
