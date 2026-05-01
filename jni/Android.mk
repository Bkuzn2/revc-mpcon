LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := connect
LOCAL_SRC_FILES := connect.cpp
LOCAL_CFLAGS := -fPIC -Wall

include $(BUILD_SHARED_LIBRARY)