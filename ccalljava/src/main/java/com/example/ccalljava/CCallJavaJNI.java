package com.example.ccalljava;

/**
 * Copyright (C), 2016-2020
 * FileName: CCallJavaJNI
 * Author: zhengwei
 * Date: 2020-05-02 15:12
 * Description: C call Java
 */
public class CCallJavaJNI {
    /**
     * java调用callbackAdd, c在此方法内部反射调用java的 add方法
     */
    public native void callbackAdd();

    public native void callbackGetMessage();

    public int add(int x, int y) {
        System.out.println("Invoke add: x= " + x + ", y= " + y);
        return x + y;
    }

    public void getMessage(String s) {
        System.out.println("Invoke getMessage: s= " + s);
    }

}
