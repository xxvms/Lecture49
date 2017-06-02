//
// Created by tom on 01/06/2017.
//

#include "farm.h"

Animal::Animal()
{
	voice = "default value";

}
Animal::~Animal() {}

Dog::Dog() {
	sign = "D";
	voice = "Hau hau hau";
}

Dog::~Dog() {

}

Cat::Cat() {
	sign = "C";
	voice = "miau miau miau";
}

Cat::~Cat() {

}

Cow::Cow() {
	sign = "Co";
	voice = "mu mu mu";
}

Cow::~Cow() {

}
