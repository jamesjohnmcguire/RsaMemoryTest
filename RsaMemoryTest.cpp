// RsaMemoryTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <memory>
#include <string>

#include <openssl/evp.h>
#include <openssl/err.h>
#include <openssl/pem.h>
#include <openssl/rsa.h>

#ifdef _WIN32
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#endif

using namespace std;

int main()
{
	RSA* rsa = RSA_new();
	RSA_free(rsa);
	rsa = nullptr;

	ERR_free_strings();
	EVP_cleanup();

	CRYPTO_cleanup_all_ex_data();

	std::cout << "Thats all folks\n";

#ifdef _WIN32
	_CrtDumpMemoryLeaks();
#endif
}
