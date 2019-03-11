LOCAL_PATH:=$(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := NDKdemo
LOCAL_SRC_FILES := HelloJNI.c
include $(BUILD_SHARED_LIBRARY)