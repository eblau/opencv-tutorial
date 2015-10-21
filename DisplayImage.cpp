#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main( int argc, char** argv )
{
    if (argc != 2) {
        cout <<" Usage: display_image ImageToLoadAndDisplay" << endl;
        return -1;
    }

    Mat image;
    image = imread(argv[1], CV_LOAD_IMAGE_COLOR);   // Read the file

    // Check for invalid input
    if (!image.data) {
        cout <<  "Could not open or find the image" << std::endl;
        return -1;
    }

    // Create a window for display.
    namedWindow( "Display window", WINDOW_AUTOSIZE );

    // Show our image inside it.
    imshow( "Display window", image );

    // Wait for a keystroke in the window
    waitKey(0);
    return 0;
}
