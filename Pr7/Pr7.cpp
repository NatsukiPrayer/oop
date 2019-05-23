

#include "pch.h"
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Parrot.h"

int main()
{
	Cat Barsik("Barsik");
	Dog Jack("Jack");
	Parrot John("John");
	Barsik.give_pat();
	Jack.give_pat();
	John.give_pat();
	return 0;
}

