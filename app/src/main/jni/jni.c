//
// Created by Apple on 16/6/1.
//

#include "com_d_sodemo_JnI.h"

JNIEXPORT jstring JNICALL Java_com_d_sodemo_JnI_stringFromJNI
        (JNIEnv * env, jclass class){
    return (*env) -> NewStringUTF(env, "With great power, comes great responsibility.");
}