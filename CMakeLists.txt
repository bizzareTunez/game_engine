cmake_minimum_required(VERSION 3.14)
project(game_engine)

set(CMAKE_CXX_STANDARD 17)

add_executable(game_engine src/graphics_engine/screen/screen.cpp src/graphics_engine/screen/screen.h src/graphics_engine/constants/constants.h src/graphics_engine/utils/image_utils.cpp src/graphics_engine/utils/image_utils.h src/main.cpp src/graphics_engine/objects/model_core/model/model.cpp src/graphics_engine/objects/model_core/model/model.h src/graphics_engine/objects/model_core/vertex/vertex.cpp src/graphics_engine/objects/model_core/triangle/triangle.cpp src/graphics_engine/objects/model_core/triangle/triangle.h)