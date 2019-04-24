#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main(){
    //Read image
    Mat image = imread("../assets/putin_noise.jpg");

    if(image.empty()){
        cout<<"can not find image";
        return 0;
    }

    Mat result1, result2;

    //define kernel size
    int kernelSize1 = 3;
    int kernelSize2 = 7;

    //apply box filter
    blur(image, result1, Size(kernelSize1, kernelSize1), Point(-1, -1));
    blur(image, result2, Size(kernelSize2, kernelSize2), Point(-1, -1));

    //create windows to display images
    namedWindow("image", WINDOW_NORMAL);
    namedWindow("result1", WINDOW_NORMAL);
    namedWindow("result2", WINDOW_NORMAL);

    //display images
    imshow("image", image);
    imshow("result1", result1);
    imshow("result2", result2);

    //press esc to exit the program
    waitKey(0);

    //close all the opended windows
    destroyAllWindows();

    return 0;
}