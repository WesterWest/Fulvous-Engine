#include "src/graphics/window.h"
#include "src/math/fmath.h"
#include "src/utils/fileutils.h"
#include <iostream>

int main()
{
	using namespace Fulvous;
	using namespace graphics;

	std::cout << read_file("main.cpp") << std::endl;
	system("PAUSE");
	return 0;

	Window window("Should I put here a title or something?", 800, 600);
	glClearColor(0, 1, 0.3f, 1);

	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);
	glBindVertexArray(vao);

	std::cout << "Using: OpenGL v" << glGetString(GL_VERSION) << std::endl;


	while (!window.closed())
	{
		window.clear();

		double x, y;
		window.getMousePosition(x, y);
		std::cout << x << ", " << y << std::endl;

		glBegin(GL_QUADS);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(-0.5f,  0.5f);
		glVertex2f( 0.5f,  0.5f);
		glVertex2f( 0.5f, -0.5f);
		glEnd();


		glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
		window.update();
	}

	system("PAUSE");
	return 0;
}