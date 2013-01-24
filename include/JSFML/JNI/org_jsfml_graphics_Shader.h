/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jsfml_graphics_Shader */

#ifndef _Included_org_jsfml_graphics_Shader
#define _Included_org_jsfml_graphics_Shader
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_jsfml_graphics_Shader
 * Method:    bind
 * Signature: (Lorg/jsfml/graphics/ConstShader;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Shader_bind
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_jsfml_graphics_Shader
 * Method:    isAvailable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_graphics_Shader_isAvailable
  (JNIEnv *, jclass);

/*
 * Class:     org_jsfml_graphics_Shader
 * Method:    nativeCreate
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jsfml_graphics_Shader_nativeCreate
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Shader
 * Method:    nativeDelete
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Shader_nativeDelete
  (JNIEnv *, jobject);

/*
 * Class:     org_jsfml_graphics_Shader
 * Method:    nativeLoadFromSource1
 * Signature: (Ljava/lang/String;Lorg/jsfml/graphics/Shader/Type;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_graphics_Shader_nativeLoadFromSource1
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     org_jsfml_graphics_Shader
 * Method:    nativeLoadFromSource2
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jsfml_graphics_Shader_nativeLoadFromSource2
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     org_jsfml_graphics_Shader
 * Method:    nativeSetParameter
 * Signature: (Ljava/lang/String;F)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Shader_nativeSetParameter__Ljava_lang_String_2F
  (JNIEnv *, jobject, jstring, jfloat);

/*
 * Class:     org_jsfml_graphics_Shader
 * Method:    nativeSetParameter
 * Signature: (Ljava/lang/String;FF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Shader_nativeSetParameter__Ljava_lang_String_2FF
  (JNIEnv *, jobject, jstring, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_Shader
 * Method:    nativeSetParameter
 * Signature: (Ljava/lang/String;FFF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Shader_nativeSetParameter__Ljava_lang_String_2FFF
  (JNIEnv *, jobject, jstring, jfloat, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_Shader
 * Method:    nativeSetParameter
 * Signature: (Ljava/lang/String;FFFF)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Shader_nativeSetParameter__Ljava_lang_String_2FFFF
  (JNIEnv *, jobject, jstring, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     org_jsfml_graphics_Shader
 * Method:    nativeSetParameter
 * Signature: (Ljava/lang/String;Lorg/jsfml/graphics/Transform;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Shader_nativeSetParameter__Ljava_lang_String_2Lorg_jsfml_graphics_Transform_2
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     org_jsfml_graphics_Shader
 * Method:    nativeSetParameter
 * Signature: (Ljava/lang/String;Lorg/jsfml/graphics/Texture;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Shader_nativeSetParameter__Ljava_lang_String_2Lorg_jsfml_graphics_Texture_2
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     org_jsfml_graphics_Shader
 * Method:    nativeSetParameterCurrentTexture
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_jsfml_graphics_Shader_nativeSetParameterCurrentTexture
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
