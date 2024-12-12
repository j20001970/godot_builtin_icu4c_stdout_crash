#include "example.h"

#include "godot_cpp/core/class_db.hpp"

using namespace godot;

void Example::_bind_methods() {
	ClassDB::bind_method(D_METHOD("print"), &Example::print);
}

void Example::print() {
	std::cout << "print" << std::endl;
}
