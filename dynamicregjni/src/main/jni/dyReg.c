//
// Created by 郑伟 on 2020-05-20.
//

#include <jni.h>
#include <stdio.h>

void func1(JNIEnv *env, jobject jobject) {
    printf("动态注册");
}

jstring func2(JNIEnv *env, jobject jobject) {
    return (*env)->NewStringUTF(env, "Hello JNI");
}

static const char * mClassName = "com/example/dynamicregjni/DyReqJNI";

static const JNINativeMethod mMethods[] = {
        {"setMsg", "()V",                 (void *) func1},
        {"getMsg", "()Ljava/lang/String;", (void *) func2},
};

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    printf("start JNI_OnLoad");
    JNIEnv *env = NULL;
    //获得 JniEnv
    int r = (*vm)->GetEnv(vm, (void **) &env, JNI_VERSION_1_4);
    if (r != JNI_OK) {
        return -1;
    }
    jclass mainActivityCls = (*env)->FindClass(env, mClassName); // 注册 如果小于0则注册失败
    r = (*env)->RegisterNatives(env, mainActivityCls, mMethods, 2);
    if (r != JNI_OK) {
        return -1;
    }


    return JNI_VERSION_1_4;
}