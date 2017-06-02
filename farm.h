//
// Created by tom on 01/06/2017.
//

#ifndef LECTURE49_FARM_H
#define LECTURE49_FARM_H

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string voice;
public:
	virtual std::string getVoice()
	{return voice;}
	Animal();
	~Animal();
};

class Dog: public Animal
{
	std::string sign;
public:
	Dog();
	~Dog();
	std::string getVoice()
	{return voice + " " + sign;}
};
class Cat: public  Animal
{
	std::string sign;
public:
	Cat();
	~Cat();
	std::string getVoice()
	{return voice + " " + sign;}
};
class Cow: public Animal
{
	std::string sign;
public:
	Cow();
	~Cow();
	std::string getVoice()
	{return voice + " " + sign;}
};

class farm {

};


#endif //LECTURE49_FARM_H
