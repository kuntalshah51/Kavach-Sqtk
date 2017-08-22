#include <iostream>
#include <fstream>
#include <string.h>
#include <ctime>
#include <time.h>
#include <cstring>

class FileWriter
{
	char* dt;
	char message[100];
	char TypeofLog[100];
	char MethodName[100];
	std::string Path = "c://";

public:
	FileWriter(const char* a, const char* b, const char* c);
	const std::string DateTime();
	void WriteLogToFile();
};
