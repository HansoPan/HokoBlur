/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_xiangpi_dynamicblurdemo_activity_BoxBlurActivity */

#ifndef _Included_com_xiangpi_blurlibrary_generator_NativeBlurGenerator
#define _Included_com_xiangpi_blurlibrary_generator_NativeBlurGenerator
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT void JNICALL Java_com_xiangpi_blurlibrary_generator_NativeBlurGenerator_nativeBoxBlur
        (JNIEnv *, jobject, jintArray, jint, jint, jint);

void blurHorizontal(int[], int[], int width, int height, int radius);
int clamp(int i, int minValue, int maxValue);

#ifdef __cplusplus
}
#endif
#endif
