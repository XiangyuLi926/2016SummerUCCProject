//! Code counter class definition for the C/C++ languages.
/*!
* \file CCCounter.h
*
* This file contains the code counter class definition for the C/C++ languages.
*/

#ifndef CObjCCounter_h
#define CObjCCounter_h

#include "CCJavaCsScalaCounter.h"

//! Objective C code counter class.
/*!
* \class CObjCCounter
*
* Defines the Objective C code counter class.
*/

class CObjCCounter : public CCJavaCsScalaCounter
{
public:
	CObjCCounter( string lang = "OBJC" );
protected:
    int ParseFunctionName(const string &line, string &lastline,
                          filemap &functionStack, string &functionName, unsigned int &functionCount);
};

#endif
