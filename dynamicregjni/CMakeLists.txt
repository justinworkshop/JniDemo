cmake_minimum_required(VERSION 3.4.1)

# 编译源文件
file(GLOB my_source_path src/main/jni/*.c)

add_library(
        # 生成的lib名称
        dy_Req
        # 动态库 SHARED STATIC
        SHARED
        # 源文件
        ${my_source_path})

find_library(

        log-lib

        log )

target_link_libraries(

        dy_Req

        ${log-lib})