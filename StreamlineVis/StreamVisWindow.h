#pragma once

struct GLFWwindow;

class StreamVisWindow {
public:
	StreamVisWindow(unsigned width = 800, unsigned height = 600);
	void SetWidth(unsigned width)	{ width_ = width; }
	void SetHeight(unsigned height) { height_ = height; }
	void Show();

private:
	GLFWwindow*	window_;
	unsigned	width_, height_;

};