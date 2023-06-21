//
// Created by filip on 6/5/2023.
//

#include "filip_uncanin_shoppinglist_JNIExample.h"
#include "jni.h"

extern "C" JNIEXPORT jboolean JNICALL Java_filip_uncanin_shoppinglist_JNIExample_increment (JNIEnv *env, jobject jobj, jstring x) {
    jint length = env->GetStringLength(x);
    if(length == 0) return false;
    else return true;

}