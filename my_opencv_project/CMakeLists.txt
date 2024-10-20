cmake_minimum_required(VERSION 3.10)
project(my_opencv_project)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)

# 查找 OpenCV 包
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(include)

# 添加可执行文件
add_executable(my_app src/main.cpp src/image_display.cpp)

# 链接 OpenCV 库
target_link_libraries(my_app ${OpenCV_LIBS})
