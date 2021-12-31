#include "ce103-hw4-cpp-dll.h"

int hw4_fibonacciNumber_cpp(int fiIndex)
{
	return hw4_fibonacciNumber(fiIndex);
}

char* hw4_strrev_cpp(char* fiStr)
{
	return hw4_strrev(fiStr);
}

int hw4_strlen_cpp(const char* fiStr)
{
	return hw4_strlen(fiStr);
}

char* hw4_strcat_cpp(char* fiDest, char* fiSrc)
{
	return hw4_strcat(fiDest, fiSrc);
}

int hw4_strcmp_cpp(const char* fiLhs, const char* fiRhs)
{
	return hw4_strcmp(fiLhs, fiRhs);
}

char* hw4_strcpy_cpp(char* foDestination, const char* fiSource)
{
	return hw4_strcpy(foDestination, fiSource);
}

void hw4_hex2bin_cpp(char* fiHex, int fiHexLen, unsigned char* foBin)
{
	return hw4_hex2bin(fiHex, fiHexLen, foBin);
}

void hw4_bin2hex_cpp(unsigned char* fiBin, int fiBinLen, char* foHex)
{
	return hw4_bin2hex(fiBin, fiBinLen, foHex);
}