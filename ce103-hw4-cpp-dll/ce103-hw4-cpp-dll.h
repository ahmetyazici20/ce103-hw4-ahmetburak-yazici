#pragma once
#include <iostream>
#include "../ce103-hw4-c-dll/ce103-hw4-c-dll.h"

extern "C" {
	__declspec(dllimport) int hw4_fibonacciNumber(int fiIndex);
	__declspec(dllexport) int hw4_fibonacciNumber_cpp(int fiIndex);
	__declspec(dllimport) char* hw4_strrev(char* fiStr);
	__declspec(dllexport) char* hw4_strrev_cpp(char* fiStr);
	__declspec(dllimport) int hw4_strlen(const char* fiStr);
	__declspec(dllexport) int hw4_strlen_cpp(const char* fiStr);
	__declspec(dllimport) char* hw4_strcat(char* fiDest, char* fiSrc);
	__declspec(dllexport) char* hw4_strcat_cpp(char* fiDest, char* fiSrc);
	__declspec(dllimport) int hw4_strcmp(const char* fiLhs, const char* fiRhs);
	__declspec(dllexport) int hw4_strcmp_cpp(const char* fiLhs, const char* fiRhs);
	__declspec(dllimport) char* hw4_strcpy(char* foDestination, const char* fiSource);
	__declspec(dllexport) char* hw4_strcpy_cpp(char* foDestination, const char* fiSource);
	__declspec(dllimport) void hw4_hex2bin(char* fiHex, int fiHexLen, unsigned char* foBin);
	__declspec(dllexport) void hw4_hex2bin_cpp(char* fiHex, int fiHexLen, unsigned char* foBin);
	__declspec(dllimport) void hw4_bin2hex(unsigned char* fiBin, int fiBinLen, char* foHex);
	__declspec(dllexport) void hw4_bin2hex_cpp(unsigned char* fiBin, int fiBinLen, char* foHex);
}