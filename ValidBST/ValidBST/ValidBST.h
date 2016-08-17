#pragma once
#include"ValidBST.h"

class ValidBST {
private:
	bool Judge(TreeNode* root) {
		if (!root->left && !root->right)
			return true;
		else {
			TreeNode *p;
			if (root->left) {
				for (p = root->left; p->right; p = p->right);
				if (!(root->left->val <root->val && p->val <root->val && Judge(root->left)))
					return false;
			}
			if (root->right) {
				for (p = root->right; p->left; p = p->left);
				if (!(root->right->val >root->val && p->val >root->val && Judge(root->right)))
					return false;
			}
			return true;
		}
	}
public:
	bool isValidBST(TreeNode* root) {
		return !root || Judge(root);
	}
};