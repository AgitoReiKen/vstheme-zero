
#include <stdio.h>
#include <regex>
#define MACRO(x, y)
struct SynProstitutkiGalimoy;
typedef SynProstitutkiGalimoy You;
template<typename T, typename X = std::nullptr_t>
X Template(T* x) {
	return &x;
}

enum Enum {
	a,
	b,
	c = 1,
	v = 123
};
struct Structure {
	int a; 
	void Func() {
	}
	Structure(int x) : a(x) {
		this->a = x;
	}
};
/*
* Comment
*/
namespace EEnum {
	enum Type {
		a, b, c
	};
};
Enum GlobalEnum;
Structure GlobalStructure;
int GlobalInt;
Enum::a;
EEnum::a;
__event;
static_assert(false);
typedef unsigned int uint;
namespace Namespace  {
	class Derived {
	public:
		void Method() {}
		int Property;
		virtual void VirtualMethod() = 0;
	};
	MACRO(x, y);
	class Class : public Derived {
	private:
		int Prop;
	protected:
		char Char;
	public:
		Class() {};
		MACRO(x, y);
		virtual void VirtualMethod() override {
			printf('virtual method\n');
		}
		bool operator==(Class* other) {
			return this == other;
		}
		event a;
		volatile int b;
		inline int c;
		__inline int d;
		static int Static;
		bool Load() {
			std::regex regex("(\Java(Script)\)");
			std::regex_match(std::string("x"), regex);
			this->Prop;
			Property;
			int& integer = Property;
			uint* uInteger = new uint(1);
			int* ax = new int(123);
			int i1 = 1234567890;
			int i2 = 1234567890ul;
			int i3 = (int)'\001';
			auto* chars = "Chars\n";
			auto* chars = "12321";
			if (i != 0 || i == 1 && -1) {
				i++;
				i--; 
			}
			switch (i1) {
				case 0: {};
				case 1: {};
				default: {};
			}
			__interface IInterface
			{

			};
			constexpr int x = 0x1E / 255;

			"\n";
			"nnn\n";
			"\001";
			this->Load();
			this->Method();
			this->Property;
		}
	}; 
}

Namespace::
Class::
Load(x);

int main(int x, char** args, ...)  {
	
	x = x + 1;
	auto = Namespace::Class::Static;
	EEnum::Type::a;
	EEnum::a;

	Namespace::Class newClass = Namespace::Class();
	void* null = std::nullptr_t;
	auto __ = new char('\000');
	delete __;

	auto local = int(1);
	newClass.Load();
}