package com.example.ccalljava;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;

public class CCallJava_MainActivity extends AppCompatActivity {

    {
        System.loadLibrary("c_call_java");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_c_call_java_main);

        CCallJavaJNI cCallJavaJNI = new CCallJavaJNI();
        cCallJavaJNI.callbackAdd();
        cCallJavaJNI.callbackGetMessage();
    }
}
