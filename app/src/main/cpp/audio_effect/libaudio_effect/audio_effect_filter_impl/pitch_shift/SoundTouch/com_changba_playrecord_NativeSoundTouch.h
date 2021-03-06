/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_changba_playrecord_NativeSoundTouch */

#ifndef _Included_com_changba_playrecord_NativeSoundTouch
#define _Included_com_changba_playrecord_NativeSoundTouch
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_changba_playrecord_NativeSoundTouch
 * Method:    init
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_changba_playrecord_NativeSoundTouch_init
  (JNIEnv *, jobject);

/*
 * Class:     com_changba_playrecord_NativeSoundTouch
 * Method:    destroy
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_changba_playrecord_NativeSoundTouch_destroy
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_changba_playrecord_NativeSoundTouch
 * Method:    setSampleRate
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_com_changba_playrecord_NativeSoundTouch_setSampleRate
  (JNIEnv *, jobject, jint, jfloat);

/*
 * Class:     com_changba_playrecord_NativeSoundTouch
 * Method:    setChannels
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_changba_playrecord_NativeSoundTouch_setChannels
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_changba_playrecord_NativeSoundTouch
 * Method:    setPitch
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_com_changba_playrecord_NativeSoundTouch_setPitch
  (JNIEnv *, jobject, jint, jfloat);

/*
 * Class:     com_changba_playrecord_NativeSoundTouch
 * Method:    putSamples
 * Signature: (I[S)V
 */
JNIEXPORT void JNICALL Java_com_changba_playrecord_NativeSoundTouch_putSamples
  (JNIEnv *, jobject, jint, jshortArray);

/*
 * Class:     com_changba_playrecord_NativeSoundTouch
 * Method:    receiveSamples
 * Signature: (I[S)I
 */
JNIEXPORT jint JNICALL Java_com_changba_playrecord_NativeSoundTouch_receiveSamples
  (JNIEnv *, jobject, jint, jshortArray);

#ifdef __cplusplus
}
#endif
#endif
