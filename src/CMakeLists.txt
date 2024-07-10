# CMake最低版本号要求
cmake_minimum_required(VERSION 2.8.12.2)

# 指定C++编译器
# 对于GCC/Clang，你可以这样设置：
set(CMAKE_CXX_COMPILER /usr/bin/g++)

# 项目名称
project(MyProject)

#设定C++标准为C++11
add_compile_options(-std=c++11) 

# 设置构建类型为Debug
set(CMAKE_BUILD_TYPE Debug)


#添加头文件
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# 添加可执行文件
add_executable(${PROJECT_NAME} main.cpp)

# 设置编译器选项
if(MSVC)
    # 对于MSVC编译器的优化
    add_compile_options(/W4 /WX)
elseif(CMAKE_COMPILER_IS_GNUCC OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    # 对于GCC或Clang编译器的优化
    add_compile_options(-Wall -Wextra -pedantic-errors)
endif()

# 添加库依赖（如果有的话）
# find_package(Boost REQUIRED)
# target_link_libraries(${PROJECT_NAME} Boost::boost)

# 设置输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# 其他配置...