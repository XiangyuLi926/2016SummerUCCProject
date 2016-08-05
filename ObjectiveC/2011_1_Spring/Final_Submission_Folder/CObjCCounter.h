//! Code counter class definition for the C/C++ languages.
/*!
* \file CCCounter.h
*
* This file contains the code counter class definition for the C/C++ languages.
*/

#ifndef CObjCCounter_h
#define CObjCCounter_h

#include "CCJavaCsCounter.h"

//! C/C++ code counter class.
/*!
* \class CCCounter
*
* Defines the C/C++ code counter class.
*/
class CObjCCounter : public CCJavaCsCounter
{
public:
	CObjCCounter();
	int CountDirectiveSLOC(filemap*, results*, filemap*);
	int LanguageSpecificProcess(filemap*, results*, filemap*);
	void LSLOC(results*, std::string, std::string, std::string&, std::string&, int&, bool&, bool&, bool&, char&, bool&, int&, int&, int&, bool&, bool&, int&, StringVector&);
};

#endif
