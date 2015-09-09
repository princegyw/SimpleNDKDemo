//
// Created by wilson on 2015/9/9.
//

#include "com_example_wilson_myapplication_MainActivity.h"

JNIEXPORT jstring JNICALL Java_com_example_wilson_myapplication_MainActivity_getStringFromNative
        (JNIEnv * env, jobject) {
    return env->NewStringUTF("Hello from JNI ! ");
}