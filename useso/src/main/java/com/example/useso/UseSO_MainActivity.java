package com.example.useso;

import android.os.Bundle;

import androidx.appcompat.app.AppCompatActivity;

import com.example.javacallc.JavaCallCJNI;

public class UseSO_MainActivity extends AppCompatActivity {

    {
        System.loadLibrary("java_call_c");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_use_so_main);

        JavaCallCJNI javaCallCJNI = new JavaCallCJNI();

        int result = javaCallCJNI.add(1, 99);
        String msg = javaCallCJNI.getMessage("receive: ");
        int checkResult = javaCallCJNI.checkPassword("123");

        System.out.println("result: " + result);
        System.out.println("msg: " + msg);
        System.out.println("Pwd is right: " + ((checkResult == 0) ? true : false));
    }
}
