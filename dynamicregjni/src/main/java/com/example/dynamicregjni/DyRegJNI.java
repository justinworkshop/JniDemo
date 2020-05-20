package com.example.dynamicregjni;

/**
 * Copyright (C), 2016-2020
 * FileName: DyRegJNI
 * Author: zhengwei
 * Date: 2020-05-20 19:16
 * Description: JNI动态注册
 */
public class DyRegJNI {
    public native void setMsg();

    public native String getMsg();

    {
        System.loadLibrary("dy_Req");
    }

    public static void main(String[] args) {
        DyRegJNI dyRegJNI = new DyRegJNI();
    }
}
