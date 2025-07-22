cmake_minimum_required(VERSION 3.28)
project(cpp_start_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp_start_project main.cpp)

# 自动查找 singles 目录中的所有 .cpp 文件
file(GLOB SINGLE_SOURCES "singles/*.cpp")

# 遍历所有找到的源文件
foreach (source ${SINGLE_SOURCES})
    # 从完整路径中提取文件名（不含扩展名）
    get_filename_component(exec_name ${source} NAME_WE)

    # 为每个源文件创建独立可执行目标
    add_executable(${exec_name} ${source})

    # 设置输出目录（可选）
    set_target_properties(${exec_name} PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    )

    # 添加调试信息（可选）
    target_compile_options(${exec_name} PRIVATE -Wall -Wextra -g)

    # 打印创建信息（调试用）
    message(STATUS "创建可执行目标: ${exec_name} <- ${source}")
endforeach ()