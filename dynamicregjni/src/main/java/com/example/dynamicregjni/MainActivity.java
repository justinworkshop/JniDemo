package com.example.dynamicregjni;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;

/**
 * 动态注册JNI
 */
public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("dy_Req");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        DyRegJNI dyRegJNI = new DyRegJNI();
//        dyRegJNI.setMsg();
//        dyRegJNI.getMsg();
    }
}
