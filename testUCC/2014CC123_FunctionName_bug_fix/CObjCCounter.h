//! Code counter class definition for the Objective C languages.
/*!
* \file CObjCCounter.h
*
* This file contains the code counter class definition for the Objective C languages.
*/

#ifndef CObjCCounter_h
#define CObjCCounter_h

#include "CCJavaCsCounter.h"

//! Objective C code counter class.
/*!
* \class CObjCCounter
*
* Defines the Objective C code counter class.
*/
class CObjCCounter : public CCJavaCsCounter
{
public:
	CObjCCounter();
protected:
	int ParseFunctionName(const string &line, string &lastline,
		filemap &functionStack, string &functionName, unsigned int &functionCount);
};

#endif
