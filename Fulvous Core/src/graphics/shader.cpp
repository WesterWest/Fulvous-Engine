#include "shader.h"

namespace Fulvous
{
	namespace graphics
	{
		Shader::Shader(const char * vertexPath, const char * fragmentPath)
			m_VertexPath(vertexPath),
			m_FragmentPath(fragmentPath)
		{
			m_ShaderID = load();
		}

		Shader::~Shader()
		{

		}

		void Shader::enable() const
		{

		}

		void Shader::disable() const
		{

		}
		GLuint Shader::load()
		{
			GLuint program = glCreateProgram();
			GLuint vertex = glCreateShader(GL_VERTEX_SHADER);
			GLuint fragment = glCreateShader(GL_FRAGMENT_SHADER);

			
		}
	}
}