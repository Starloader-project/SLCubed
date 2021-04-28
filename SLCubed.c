/*
 * A simple C++ application that serves as a jumploader between Steam and
 * the Starloader Launcher. As it launches the Starloader Launcher it is
 * called the Starloader Launcher Launcher, short SLCubed or SL³
 *
 *
 * This application is licensed under the following license:
 *
 * MIT License
 * Copyright (c) 2021 Geolykt

 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#include <unistd.h>

/**
 * Main application entrypoint.
 *
 * @param argc The number of arguments within the argv parameter
 * @param argv The parameters of the application
 * @return The return code of the application
 */
int main(int argc, char *argv[]) {
	if (argc > 1) {
		char *args[3];
		args[0] = "java";
		args[1] = "-jar";
		args[2] = argv[1];
		execvp("java", args);
	}
	return execlp("java", "java", "-jar", "starloader.jar");
}
