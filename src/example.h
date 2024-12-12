#ifndef EXAMPLE_CLASS_H
#define EXAMPLE_CLASS_H

#include "godot_cpp/classes/ref_counted.hpp"

using namespace godot;

class Example : public RefCounted {
	GDCLASS(Example, RefCounted);

	protected:
		static void _bind_methods();

	public:
		Example() = default;
		~Example() = default;

		void print();
};

#endif // EXAMPLE_CLASS_H
