cmake_minimum_required(VERSION 3.4.1)

add_library(
        # 生成的lib名称
        java_call_c
        # 动态库
        SHARED
        # 源文件
        src/main/jni/java_call_c.c)

find_library(

        log-lib

        log )

target_link_libraries(

        java_call_c

        ${log-lib})