package com.example.javacallc;

/**
 * Copyright (C), 2016-2020
 * FileName: JavaCallCJNI
 * Author: zhengwei
 * Date: 2020-05-02 14:26
 * Description: java call c
 */
public class JavaCallCJNI {

    public native int add(int x, int y);

    public native String getMessage(String s);

    public native int checkPassword(String pwd);
}
