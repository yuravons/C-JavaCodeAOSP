#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_testnativedaemon_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}extern "C"
JNIEXPORT jint JNICALL
Java_com_example_testnativedaemon_MainActivity_sub(JNIEnv *env, jclass clazz, jint a,
                                                          jint b) {
    return a - b;
}extern "C"
JNIEXPORT jint JNICALL
Java_com_example_testnativedaemon_MainActivity_add(JNIEnv *env, jclass clazz, jint a,
                                                          jint b) {
    return a + b;
}


/*extern "C"
JNIEXPORT void JNICALL
Java_com_example_nativesystemapplication_MainActivity_setService(JNIEnv *env, jclass clazz,
                                                                 jboolean status) {
    if(status)
        property_set("myprop.test", "1");
    else
        property_set("myprop.test", "0");
}*/
