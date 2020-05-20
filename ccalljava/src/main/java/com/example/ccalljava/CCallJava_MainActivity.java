package com.example.ccalljava;

import android.os.Bundle;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

/**
 * 静态注册JNI：c调用java
 */
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

        callbackShowToast();
    }

    public native void callbackShowToast();

    public void showToast() {
        Toast.makeText(this, "Show Toast invoke by c", Toast.LENGTH_SHORT).show();
    }
}
