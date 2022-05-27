
#include <stdio.h>
#include <regex>
#include <wrong>
#include "wrong"
#include "source.h"
#define MACRO(x, y)
struct SynProstitutkiGalimoy;
typedef SynProstitutkiGalimoy You;
template<typename T, typename X = std::nullptr_t>
X Template(T* x) {
	return &x;
}
void GlobalFunction() {}

enum asdasasdsadasdas {  };

union Union
{
	int member;
	std::string Membase;
};

enum Enum {
	ENUM_A MACRO(1, 2),
	ENUM_B MACRO(2, 0),
	ENUM_C = 1,
	ENUM_D = 123
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
int GlobalInt = 123;
static int StaticGlobalInt = 123;
EEnum::Type a = EEnum::a;
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
		Class& operator->() {
			return this;
		}
		Class* operator+(Class* Other) {
			return this;
		}
		Class& operator+(Class& Other) {
			return *this;
		}
		event a;
		volatile int b;
		inline int c;
		__inline int d;
		static int Static;
		static void StaticFunction() {
		}

		//TODO asdasda
		/*TODO asdasdasd*/

		//asdasdasd
		mutable int x = 1;
		const volatile int y = 2;

		//TODO fix up Load?
		//BUG fix up Load ?

		//ASDASDAS? ASDASD
		//NotImplementedException

		/// TODO asdasdasdas
		/// MIKROSOVD HUESOSI SDELALI ODIN COLOR DLYA /// I TEXTA
		/// <summary>
		/// asddas
		/// </summary>
		/// <param name="_property"></param>
		/// <param name=""></param>
		/// <returns></returns>
		bool Load(void* _property, ...) {

			_property = std::move(_property);
			GlobalEnum;	
			int local = 0;
			std::regex regex("(\Java(Script)\)");
			std::regex_match(std::string("x\n"), regex);
			this->Prop;
			Enum::ENUM_A;
			uint* uInteger = new uint(1);
			int* ax = new int(123);  
			int i1 = 1234567890;
			int i2 = 1234567890ul;
			printf("asdasd%d\n %d%f\n", 123, 321, 321);
			int i3 = (int)'\001';
			auto* Chars = "Chars\n";
			auto* chars = "12321";
			int i = rand();
			i = i | 1 & 0;
			if (i != 0 || i == 1 && -1) {
				i++;
				
				i--; 
			}
			
			if (Chars == "Chars") {
			}
			switch (i1) {
				case 0: {	break;	};
				case 1: {	break;	};
				default: {	break;	};
			}
			 
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
__interface IInterface
{
};
int main(int x, char** args, ...)  {
	
	x = x + 1;
	 
	goto label;
	label:
	auto = Namespace::Class::Static;
	EEnum::Type::a;
	EEnum::a;
	Namespace::Class a; 
	Namespace::Class b; 
	if (a + b) {}
	if (a == b) {}
	if (a + b) {};
	::
	a.c;
	Namespace::Class newClass = Namespace::Class();
	void* null = std::nullptr_t;
	auto __ = new char('\000');
	auto _123_ = new std::string('\000');
	delete __;

	auto local = int(1);
	newClass.Load();
}