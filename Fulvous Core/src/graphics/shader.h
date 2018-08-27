#pragma once

#include "../utils/fileutils.h"
#include <GL/glew.h>

namespace Fulvous
{
	namespace graphics
	{
		class Shader
		{
		private:
			GLuint m_ShaderID;
			const char* m_VertexPath, m_FragmentPath;
		public:
			Shader(const char* vertexPath, const char* fragmentPath);
			~Shader();

			void enable() const;
			void disable() const;
		private:
			GLuint load();
		};
	}
}
