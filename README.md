Vysor to OpenCV in C++

## Overview
Vysor to OpenCV in C++ is a simple C++ code to capture and display video streams using the OpenCV library. This application can be used to display video streams from network sources, such as IP cameras or video files accessible over HTTP.

## Features
- Capture video streams from network sources using URLs.
- Display the video stream in real-time.

## Prerequisites
Before compiling and running this application, ensure you have the following installed:
- OpenCV (tested with OpenCV 4.x)
- A C++ compiler (e.g., GCC or Clang)
- CMake (optional, for building the project)

## Installation Instructions

### Installing OpenCV
Download and install OpenCV from [OpenCV's official site](https://opencv.org/releases/). Ensure you follow the installation instructions for your specific platform.

### Building the Application
1. **Clone the Repository:**
   ```bash
   git clone https://github.com/varnicm/cpp-opencv-vysor
   cd videostreamviewer
   ```

2. **Compile the Project:**
   Use the following command to compile the project, replacing `<output-name>` with your desired executable name.
   ```bash
   g++ -o <output-name> main.cpp `pkg-config --cflags --libs opencv4`
   ```

## Usage
After compiling the application, you can run it by executing the following command in your terminal:

```bash
./<output-name>
```

Make sure to replace `<output-name>` with the name of your compiled executable. Upon execution, the application will start and attempt to connect to the video stream specified in the source code.

## Configuration
To use a different video stream, edit the `main.cpp` file and modify the `stream_url` variable to your desired video stream URL.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
```

