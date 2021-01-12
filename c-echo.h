#include <iostream>

std::string echo(int length, char** chars) {
	std::string red = "";
	for(int i =1; i < length; i++) {
		ret += chars[i];
		if(i < length -1) {
			ret += " ";
		}
	}
	ret += "\n";
	return ret;
}
