//
// Created by lyp on 2019/3/8.
//

#include "lyp_com_ndkmodeo_NDKUtil.h"

JNIEXPORT jstring JNICALL Java_lyp_com_ndkmodeo_NDKUtil_SaySometing
        (JNIEnv *env, jobject obj){

    return (*env)->NewStringUTF(env,"study make me happy");
}
