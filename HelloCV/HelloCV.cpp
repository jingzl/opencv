// HelloCV.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
    String imageName("HappyFish.jpg"); // by default
    if (argc > 1)
        imageName = argv[1];

    Mat image = imread(samples::findFile(imageName), IMREAD_COLOR); // Read the file
    if (image.empty()) {  // Check for invalid input
        cout << "Could not open or find the image" << endl;
        return -1;
    }
    namedWindow("Display window", WINDOW_AUTOSIZE); // Create a window for display.
    imshow("Display window", image);                // Show our image inside it.
    waitKey(0);   // Wait for a keystroke in the window

    return 0;
}