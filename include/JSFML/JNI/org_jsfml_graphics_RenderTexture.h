/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jsfml_graphics_RenderTexture */

#ifndef _Included_org_jsfml_graphics_RenderTexture
#define _Included_org_jsfml_graphics_RenderTexture
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_RenderTexture_nativeCreate__
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    nativeSetExPtr
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderTexture_nativeSetExPtr
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    nativeDelete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderTexture_nativeDelete
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    nativeCreate
 * Signature: (IIZ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_graphics_RenderTexture_nativeCreate__IIZ
  (JNIEnv *, jobject, jint, jint, jboolean);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    setSmooth
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderTexture_setSmooth
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    isSmooth
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_graphics_RenderTexture_isSmooth
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    setRepeated
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderTexture_setRepeated
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    isRepeated
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_graphics_RenderTexture_isRepeated
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    setActive
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderTexture_setActive
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    display
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderTexture_display
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    nativeGetTexture
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_RenderTexture_nativeGetTexture
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    getSize
 * Signature: ()Lorg/jsfml/system/Vector2i;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RenderTexture_getSize
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    nativeClear
 * Signature: (Lorg/jsfml/graphics/Color;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderTexture_nativeClear
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    nativeSetView
 * Signature: (Lorg/jsfml/graphics/View;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderTexture_nativeSetView
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    nativeGetDefaultView
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_RenderTexture_nativeGetDefaultView
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    nativeGetViewport
 * Signature: (Lorg/jsfml/graphics/View;)Lorg/jsfml/graphics/IntRect;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RenderTexture_nativeGetViewport
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    nativeMapPixelToCoords
 * Signature: (Lorg/jsfml/system/Vector2i;Lorg/jsfml/graphics/View;)Lorg/jsfml/system/Vector2f;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RenderTexture_nativeMapPixelToCoords
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    nativeMapCoordsToPixel
 * Signature: (Lorg/jsfml/system/Vector2f;Lorg/jsfml/graphics/View;)Lorg/jsfml/system/Vector2i;
 */
JNIEXPORT jobject JNICALL Java_org_jsfml_graphics_RenderTexture_nativeMapCoordsToPixel
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    pushGLStates
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderTexture_pushGLStates
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    popGLStates
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderTexture_popGLStates
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_RenderTexture
 * Method:    resetGLStates
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_RenderTexture_resetGLStates
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
