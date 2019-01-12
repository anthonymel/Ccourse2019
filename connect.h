#pragma once
#define _CONNECT_ 

#include "stdafx.h"
#include <conio.h>
#include <stdlib.h>
#include <mysql.h>
#include <stdio.h>
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace std;
using namespace System;
//using namespace CppCLR_WinformsProjekt;




bool _tmain(String^ login, String^ pass);
void rooms(std::vector<char*>& mass);
bool _findID(string room);