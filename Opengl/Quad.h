#pragma once
#include <GL/glew.h>
#include <vector>
#include <glm\glm.hpp>
#include <glm\gtc\matrix_transform.hpp>
#include <glm\gtc\type_ptr.hpp>
#include <memory>
#include "element.h"
#include "shader.h"
#include "stb_image.h"
#include "SceneObj.h"
using namespace std;
class Quad:public SceneObj
{
public:

	Quad(shared_ptr<shader>& mshader,vector<vertex>& vertices,vector<GLuint>& indices,vector<string>& texturePathes);
	void draw(glm::mat4& model,glm::vec3& camPos) const;
	~Quad();
private:
	GLuint VAO;
	shared_ptr<shader> mshader;
	vector<vertex> vertices;
	vector<GLuint> indices;
	void init() override;
	vector<string> texturePathes;
	vector<GLuint> textures;
};

