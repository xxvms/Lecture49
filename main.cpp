#include <iostream>
#include "farm.h"

void voiceOfAnimal(Animal*);
int main() {
	Animal animal;
	Dog dog;
	Cat cat;
	Cow cow;
	
	
	Dog* pDog = &dog;
	/*
	std::cout << animal.getVoice() << std::endl;
	std::cout << dog.getVoice() << std::endl;
	std::cout << cat.getVoice() << std::endl;
	std::cout << cow.getVoice() << std::endl;
	*/
	std::cout << "Break ------- Break" << std::endl;
	voiceOfAnimal(&cat);
	voiceOfAnimal(&cow);
	std::cout << pDog->getVoice() << std::endl; // this will provide SIGN
	
	/*
	 * Polymorphism - compiler "knows" which method to use from 
	 */
	
	
	system("pause");
	return 0;
}
void voiceOfAnimal(Animal* p)
{
	std::cout<< p->getVoice() << std::endl;
}