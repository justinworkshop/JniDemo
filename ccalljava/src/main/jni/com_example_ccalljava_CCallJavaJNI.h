/* DO NOT EDIT THIS FILE - it is machine generated */

/* Header for class com_example_ccalljava_CCallJavaJNI */

#include <jni.h>

#ifndef _Included_com_example_ccalljava_CCallJavaJNI
#define _Included_com_example_ccalljava_CCallJavaJNI

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_ccalljava_CCallJavaJNI
 * Method:    callbackAdd
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_ccalljava_CCallJavaJNI_callbackAdd
        (JNIEnv *, jobject);

/*
 * Class:     com_example_ccalljava_CCallJavaJNI
 * Method:    callbackGetMessage
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_ccalljava_CCallJavaJNI_callbackGetMessage
        (JNIEnv *, jobject);

JNIEXPORT void JNICALL
Java_com_example_ccalljava_CCallJava_MainActivity_callbackShowToast(JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
