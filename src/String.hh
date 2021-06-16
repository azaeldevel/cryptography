#ifndef OCTETOS_CORE_MD5SUM
#define OCTETOS_CORE_MD5SUM

#include <string>


//#include "defines.hh"

namespace oct::crypto
{

class String : public std::string
{
public:
	//contructors
	String();
	String(const std::string& md5sum);

	//operators
	const String& operator =(const String&);
	const String& operator =(const char* md5sum);
	const String& operator =(const std::string&);

	//funtions
	void set(const std::string& str);

};


}



#endif