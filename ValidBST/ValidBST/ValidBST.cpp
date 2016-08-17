// ValidBST.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"CreateBiTree.h"
#include"ValidBST.h"
#include"ISValidBST.h"
#include<time.h>

int main()
{
	CreateBiTree CBT;
	TreeNode* p = CBT.CreateBiTreeByLevel();
	IsValidBST IVBST;
	ValidBST VBST;
	cout << boolalpha << IVBST.isValidBST(p) << " "<< clock() / double(CLOCKS_PER_SEC) << '\n';
	cout << boolalpha << VBST.isValidBST(p) << " " << clock() / double(CLOCKS_PER_SEC) << '\n';
    return 0;
}

