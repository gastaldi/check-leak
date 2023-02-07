/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_dleak_jvmti_JVMTIInterface */

#ifndef _Included_org_dleak_jvmti_JVMTIInterface
#define _Included_org_dleak_jvmti_JVMTIInterface
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_dleak_jvmti_JVMTIInterface
 * Method:    blank
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_dleak_jvmti_JVMTIInterface_blank
  (JNIEnv *, jobject);

/*
 * Class:     org_dleak_jvmti_JVMTIInterface
 * Method:    forceGC
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_dleak_jvmti_JVMTIInterface_forceGC
  (JNIEnv *, jobject);

/*
 * Class:     org_dleak_jvmti_JVMTIInterface
 * Method:    startMeasure
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_dleak_jvmti_JVMTIInterface_startMeasure
  (JNIEnv *, jobject, jstring, jstring, jstring);

/*
 * Class:     org_dleak_jvmti_JVMTIInterface
 * Method:    stopMeasure
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_dleak_jvmti_JVMTIInterface_stopMeasure
  (JNIEnv *, jobject);

/*
 * Class:     org_dleak_jvmti_JVMTIInterface
 * Method:    releaseTags
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_dleak_jvmti_JVMTIInterface_releaseTags
  (JNIEnv *, jobject);

/*
 * Class:     org_dleak_jvmti_JVMTIInterface
 * Method:    notifyInventory
 * Signature: (ZLjava/lang/String;Ljava/lang/String;Lorg/dleak/jvmti/JVMTICallBack;)V
 */
JNIEXPORT void JNICALL Java_org_dleak_jvmti_JVMTIInterface_notifyInventory
  (JNIEnv *, jobject, jboolean, jstring, jstring, jobject);

/*
 * Class:     org_dleak_jvmti_JVMTIInterface
 * Method:    getReferenceHolders
 * Signature: ([Ljava/lang/Object;)[Ljava/lang/Object;
 */
JNIEXPORT jobjectArray JNICALL Java_org_dleak_jvmti_JVMTIInterface_getReferenceHolders
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     org_dleak_jvmti_JVMTIInterface
 * Method:    getLoadedClasses
 * Signature: ()[Ljava/lang/Class;
 */
JNIEXPORT jobjectArray JNICALL Java_org_dleak_jvmti_JVMTIInterface_getLoadedClasses
  (JNIEnv *, jobject);

/*
 * Class:     org_dleak_jvmti_JVMTIInterface
 * Method:    getAllObjects
 * Signature: (Ljava/lang/Class;)[Ljava/lang/Object;
 */
JNIEXPORT jobjectArray JNICALL Java_org_dleak_jvmti_JVMTIInterface_getAllObjects
  (JNIEnv *, jobject, jclass);

/*
 * Class:     org_dleak_jvmti_JVMTIInterface
 * Method:    getTagOnObject
 * Signature: (Ljava/lang/Object;)J
 */
JNIEXPORT jlong JNICALL Java_org_dleak_jvmti_JVMTIInterface_getTagOnObject
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_dleak_jvmti_JVMTIInterface
 * Method:    getObjectOnTag
 * Signature: (J)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_org_dleak_jvmti_JVMTIInterface_getObjectOnTag
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_dleak_jvmti_JVMTIInterface
 * Method:    getMethodName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_dleak_jvmti_JVMTIInterface_getMethodName
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_dleak_jvmti_JVMTIInterface
 * Method:    getMethodSignature
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_dleak_jvmti_JVMTIInterface_getMethodSignature
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_dleak_jvmti_JVMTIInterface
 * Method:    getMethodClass
 * Signature: (J)Ljava/lang/Class;
 */
JNIEXPORT jclass JNICALL Java_org_dleak_jvmti_JVMTIInterface_getMethodClass
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif