#pragma once
#include<vector>
#include"TreeNode.h"

class IsValidBST {
	std::vector<TreeNode*> Nodes;
private:
	void NodePush(TreeNode*root) {
		if (root->left)
			NodePush(root->left);
		Nodes.push_back(root);
		if (root->right)
			NodePush(root->right);
	}
	bool JudgeNodes(TreeNode* root) {
		NodePush(root);
		for (int i = 1, len = Nodes.size(); i <len; i++)
			if (Nodes[i]->val <= Nodes[i - 1]->val)
				return false;
		return true;
	}
public:
	bool isValidBST(TreeNode* root) {
		return !root || JudgeNodes(root);
	}
};