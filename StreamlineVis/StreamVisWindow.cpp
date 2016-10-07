#include "StreamVisWindow.h"

#include <iostream>

#include <GLFW\glfw3.h>

using namespace std;

StreamVisWindow::StreamVisWindow(unsigned width, unsigned height) 
	: width_(width),
	height_(height)
{
	if (glfwInit() != GLFW_TRUE) {
		cerr << "Failed to initialize GLFW. Exiting..." << endl;
		exit(-1);
	}

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	window_ = glfwCreateWindow(width, height, "StreamlineVis", nullptr, nullptr);
	if (window_ == nullptr) {
		cerr << "Failed to create window. Exiting..." << endl;
		exit(-1);
	}
}

void StreamVisWindow::Show() {
	while (!glfwWindowShouldClose(window_)) {
		glfwPollEvents();
	}
}