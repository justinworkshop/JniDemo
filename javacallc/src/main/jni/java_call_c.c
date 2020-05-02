//
// Created by 郑伟 on 2020-05-02.
//
#include <jni.h>
#include <string.h>
#include "com_example_javacallc_JavaCallCJNI.h"
#include "util.h"

JNIEXPORT jint JNICALL Java_com_example_javacallc_JavaCallCJNI_add
        (JNIEnv *env, jobject jobj, jint x, jint y) {
    return x + y;
};

JNIEXPORT jstring JNICALL Java_com_example_javacallc_JavaCallCJNI_getMessage
        (JNIEnv *env, jobject jobj, jstring jstr) {
    char *fromJava = jstringtochar(env, jstr);
    char *fromC = "I am c";
    strcat(fromJava, fromC);
    return (*env)->NewStringUTF(env, fromJava);
};

JNIEXPORT jint JNICALL Java_com_example_javacallc_JavaCallCJNI_checkPassword
        (JNIEnv *env, jobject jobj, jstring jstr) {
    // 正确密码为123
    char *answer = "123";
    char *fromJava = jstringtochar(env, jstr);
    // 比较输入的密码是否正确
    int result = strcmp(answer, fromJava);
    return result;
};