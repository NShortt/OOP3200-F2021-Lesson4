#include "Transform.h"

std::string Transform::ToString() const
{
	std::string outputString = "";

	outputString += "Position: " + position.ToString() + "\n";
	outputString += "Rotation: " + rotation.ToString() + "\n";
	outputString += "Scale   : " + scale.ToString();

	return outputString;
}
