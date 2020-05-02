package com.example.javacallc;

import android.os.Bundle;

import androidx.appcompat.app.AppCompatActivity;

public class JavaCallC_MainActivity extends AppCompatActivity {

    {
        System.loadLibrary("java_call_c");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_java_call_c_main);
        JavaCallCJNI javaCallCJNI = new JavaCallCJNI();

        int result = javaCallCJNI.add(10, 20);
        String msg = javaCallCJNI.getMessage("receive: ");
        int checkResult = javaCallCJNI.checkPassword("123");

        System.out.println("result: " + result);
        System.out.println("msg: " + msg);
        System.out.println("Pwd is right: " + ((checkResult == 0) ? true : false));
    }
}
