/* DO NOT EDIT THIS FILE - it is machine generated */
#include <JavaVM/jni.h>
/* Header for class com_aerofs_growl_GrowlApplicationBridge_GrowlNativeMethods */

#ifndef _Included_com_aerofs_growl_GrowlApplicationBridge_GrowlNativeMethods
#define _Included_com_aerofs_growl_GrowlApplicationBridge_GrowlNativeMethods
#ifdef __cplusplus
extern "C" {
#endif
    /*
     * Class:     com_aerofs_growl_GrowlApplicationBridge_GrowlNativeMethods
     * Method:    isMistEnabled
     * Signature: ()Z
     */
    JNIEXPORT jboolean JNICALL Java_com_aerofs_growl_GrowlApplicationBridge_00024GrowlNativeMethods_isMistEnabled
    (JNIEnv *, jobject);
    
    /*
     * Class:     com_aerofs_growl_GrowlApplicationBridge_GrowlNativeMethods
     * Method:    isGrowlRunning
     * Signature: ()Z
     */
    JNIEXPORT jboolean JNICALL Java_com_aerofs_growl_GrowlApplicationBridge_00024GrowlNativeMethods_isGrowlRunning
    (JNIEnv *, jobject);
    
    /*
     * Class:     com_aerofs_growl_GrowlApplicationBridge_GrowlNativeMethods
     * Method:    register
     * Signature: (Lcom/aerofs/growl/GrowlApplicationBridge;Ljava/lang/String;[B[Ljava/lang/String;[Ljava/lang/String;)V
     */
    JNIEXPORT void JNICALL Java_com_aerofs_growl_GrowlApplicationBridge_00024GrowlNativeMethods_register
    (JNIEnv *, jobject, jobject, jstring, jbyteArray, jobjectArray, jobjectArray);
    
    /*
     * Class:     com_aerofs_growl_GrowlApplicationBridge_GrowlNativeMethods
     * Method:    release
     * Signature: ()V
     */
    JNIEXPORT void JNICALL Java_com_aerofs_growl_GrowlApplicationBridge_00024GrowlNativeMethods_release
    (JNIEnv *, jobject);
    
    /*
     * Class:     com_aerofs_growl_GrowlApplicationBridge_GrowlNativeMethods
     * Method:    notify
     * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[BIZILjava/lang/String;)V
     */
    JNIEXPORT void JNICALL Java_com_aerofs_growl_GrowlApplicationBridge_00024GrowlNativeMethods_notify
    (JNIEnv *, jobject, jstring, jstring, jstring, jbyteArray, jint, jboolean, jint, jstring);
    
#ifdef __cplusplus
}
#endif
#endif
