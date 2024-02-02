#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    std::string stream_url = "http://127.0.0.1:60613/flash.flv"; // URL of the video stream
    cv::VideoCapture cap(stream_url);
    if (!cap.isOpened()) {
        std::cerr << "Error: Unable to open video stream." << std::endl;
        return -1;
    }
    cv::Mat frame;
    while (true) {
        if (!cap.read(frame)) {
            std::cerr << "Error: Unable to read from stream." << std::endl;
            break;
        }
        cv::imshow("Video Stream", frame);
        if (cv::waitKey(1) == 'q') { // Break the loop if 'q' is pressed
            break;
        }
    }
    cap.release();
    cv::destroyAllWindows();

    return 0;
}
