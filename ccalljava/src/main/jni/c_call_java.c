//
// Created by 郑伟 on 2020-05-02.
//
#include "com_example_ccalljava_CCallJavaJNI.h"
#include <jni.h>
#include <stdlib.h>

JNIEXPORT void JNICALL Java_com_example_ccalljava_CCallJavaJNI_callbackAdd
        (JNIEnv *env, jobject jobj) {
    // 1.得到字节码
    // jclass      (*FindClass)(JNIEnv*, const char*);
    jclass jclazz = (*env)->FindClass(env, "com/example/ccalljava/CCallJavaJNI");
    // 2.获取方法
    // jmethodID   (*GetMethodID)(JNIEnv*, jclass, const char*, const char*);
    jmethodID jmid = (*env)->GetMethodID(env, jclazz, "add", "(II)I");
    // 3.对象实例化
    // jobject     (*AllocObject)(JNIEnv*, jclass);
    jobject jo = (*env)->AllocObject(env, jclazz);
    // 4.调用方法
    // jint        (*CallIntMethod)(JNIEnv*, jobject, jmethodID, ...);
    jint value = (*env)->CallIntMethod(env, jo, jmid, 10, 20);
};

/*
 * Class:     com_example_ccalljava_CCallJavaJNI
 * Method:    callbackGetMessage
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_ccalljava_CCallJavaJNI_callbackGetMessage
        (JNIEnv *env, jobject jobj) {
    jclass jclazz = (*env)->FindClass(env, "com/example/ccalljava/CCallJavaJNI");
    // 2.获取方法
    // jmethodID   (*GetMethodID)(JNIEnv*, jclass, const char*, const char*);
    jmethodID jmid = (*env)->GetMethodID(env, jclazz, "getMessage", "(Ljava/lang/String;)V");
    // 3.对象实例化
    // jobject     (*AllocObject)(JNIEnv*, jclass);
    jobject jo = (*env)->AllocObject(env, jclazz);
    // 4.调用方法
    // void        (*CallVoidMethod)(JNIEnv*, jobject, jmethodID, ...);
    jstring text = (*env)->NewStringUTF(env, "I am C");
    (*env)->CallVoidMethod(env, jo, jmid, text);
};