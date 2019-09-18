
// To my understanding, reference is like a packed pointer

// type	&newName	=	existingName;
// //	or
// type&	newName	=	existingName;
// //	or
// type	&	newName	=	existingName;		//	I	shall	adopt	this	convention

/*	Test	reference	declaration	and	initialization	(TestReferenceDeclaration.cpp)	*/
#include	<iostream>
using	namespace	std;


int	main()
{
	void case_2();
 	case_2();
}


void case_1 () {
	int	number	=	88;										//	Declare	an	int	variable	called	number
	int	&	refNumber	=	number; //	Declare	a	reference	(alias)	to	the	variable	number
	//	Both	refNumber	and	number	refer	to	the	same	value
	cout	<<	number	<<	endl;				//	Print	value	of	variable	number	(88)
	cout	<<	refNumber	<<	endl;	//	Print	value	of	reference	(88)
	refNumber	=	99;												//	Re-assign	a	new	value	to	refNumber
	cout	<<	refNumber	<<	endl;
	cout	<<	number	<<	endl;				//	Value	of	number	also	changes	(99)
	number	=	55;															//	Re-assign	a	new	value	to	number
	cout	<<	number	<<	endl;
	cout	<<	refNumber	<<	endl;	//	Value	of	refNumber	also	changes	(55)
}


// It is very important to know: A	reference	is	a	name	constant	for	an	address.
// You	need	to	initialize	the	reference	during	declaration.
// Once	a	reference	is	established	to	a	variable,	you	cannot change the	reference to reference another variable.
void case_2 () {
			int	number1	=	88,	number2	=	22;
			//	Create	a	pointer	pointing	to	number1
			int	*	pNumber1	=	&number1;		//	Explicit	referencing
			*pNumber1	=	99;													//	Explicit	dereferencing
			cout	<< "*pNumber1: "	<< *pNumber1	<<	endl;		//	99
			cout	<<	"&number: " << &number1	<<	endl;			//	0x22ff18
			cout	<<	"pNumber1: " << pNumber1	<<	endl;			//	0x22ff18	(content	of	the	pointer	variable	-	same	as	above)
			cout	<<	"&pNumber1: " << &pNumber1	<<	endl;		//	0x22ff10	(address	of	the	pointer	variable)
			pNumber1	=	&number2;								//	Pointer	can	be	reassigned	to	store	another	address

			//	Create	a	reference	(alias)	to	number1
			int	&	refNumber1	=	number1;		//	Implicit	referencing	(NOT	&number1)

			//	Implicit	dereferencing	(NOT	*refNumber1)
			refNumber1	=	11;
			cout	<<	"refNumber1: " << refNumber1	<<	endl;		//	11
			cout	<<	"&number1: " << &number1	<<	endl;				//	0x22ff18
			cout	<<	"&refNumber1: " << &refNumber1	<<	endl;	//	0x22ff18

			//	Error!	Reference	cannot	be	re-assigned
			//refNumber1	=	&number2;
			//	error:	invalid	conversion	from	'int*'	to	'int'

			// !!!! refNumber1	is	still	an	alias	to	number1.
			// This only change the value of number 1 and its reference.
			refNumber1	=	number2;
			cout << "refNumber1=number2 only change the value of number 1 and its reference" << endl;
			cout << "refNumber1	is	still	an	alias	to	number1" << endl;
			//	Assign	value	of	number2	(22)	to	refNumber1	(and	number1).
			number2++;
			cout	<<	"refNumber1: " << refNumber1	<<	endl;		//	22
			cout	<<	"number1: " << number1	<<	endl;					//	22
			cout	<<	"number2: " << number2	<<	endl;					//	23
}
