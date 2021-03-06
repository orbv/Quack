#include "Types.h"
#include "BShared.h"
#include <fstream>

#pragma once
class Entity {
public:
	glm::mat4 direction;
	glm::vec3 origin;

	glm::vec3 center;

	triangles_t *model;   // our entity's model will be defined as basic geometry

	Entity();
	virtual ~Entity();

	// Used for testing and debugging
	void GenerateTestEntity();
	void GenerateSquareEntity();

	//************************************
	// Method:    LoadTexture
	// FullName:  Entity::LoadTexture
	// Access:    public 
	// Returns:   int
	// Qualifier:
	// Parameter: char * imagePath
	//************************************
	int LoadTexture(char * imagePath);

	//************************************
	// Method:    Rotate
	// FullName:  Entity::Rotate
	// Access:    public 
	// Returns:   void
	// Qualifier:
	// Parameter: float degrees
	// Parameter: glm::vec3 rotationAxis
	//************************************
	void Rotate(float degrees, glm::vec3 rotationAxis);
};
