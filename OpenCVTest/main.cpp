//
//  main.cpp
//  OpenCVTest
//
//  Created by 胡萌 on 17/11/19.
//  Copyright © 2017年 胡萌. All rights reserved.
//

#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main(int argc, const char * argv[])
{
    Mat img;
    img = imread("/Users/humeng/Pictures/1431573574932.jpg");

    namedWindow("OpenCV Test");

    imshow("OpenCV Test", img);

    waitKey(6000);

    return 0;
}
