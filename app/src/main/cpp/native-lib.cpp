#include <jni.h>
#include <string>
//#include <stdlib.h>

extern "C" int hello();

extern "C" JNIEXPORT jstring JNICALL
Java_com_wisdom_engine_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    char str[10];
    sprintf(str, "%d", hello());
//    std::string hello = "Hello from C++ src src src";
    return env->NewStringUTF(str);
//    return  Java_com_wisdom_wisdom_1cpp_1zq_MainActivity_stringFromJNI(env,jobject)
}