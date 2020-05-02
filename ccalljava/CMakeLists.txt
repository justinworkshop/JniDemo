cmake_minimum_required(VERSION 3.4.1)

add_library(
        c_call_java

        SHARED

        src/main/jni/c_call_java.c)

find_library(

        log-lib

        log )

target_link_libraries(

        c_call_java

        ${log-lib})