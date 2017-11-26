//
//  main.cpp
//  OpenCVTest
//
//  Created by HuMeng on 17/11/19.
//  Copyright © 2017年 HuMeng. All rights reserved.
//

#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main(int argc, const char * argv[])
{
    Mat img;
    img = imread("/Users/jade/Pictures/IMG_1756.jpg");

    namedWindow("OpenCVTest", -1);

    imshow("OpenCVTest", img);

    waitKey(0);

    destroyWindow("OpenCVTest");

    return 0;
}
