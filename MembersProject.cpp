#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include "MembershipClass.h"
#include "CreateText.h"

using namespace std;

int main()
{
	Membership member;
	member.Welcome();
	member.fees();
	
    return 0;
}

