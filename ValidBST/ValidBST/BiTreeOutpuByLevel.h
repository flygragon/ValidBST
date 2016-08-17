#pragma once
#include"TreeNode.h"
#include<iostream>
#include<queue>

class BiTreeOutputByLevel {
public:
	void LevelOutput(TreeNode* root) {
		if (!root) return;
		std::queue<TreeNode*> Level;
		TreeNode*temp;
		int len;
		Level.push(root);
		while (!Level.empty()) {
			len = Level.size();
			//for (temp = Level.front(); temp ->next; temp = temp->next)
			//	std::cout << temp->val << " ";
			//std::cout << temp->val << '\n';
			while (len) {
				temp = Level.front();
				std::cout << temp->val << ' ';
				if (temp ->left) Level.push(temp ->left);
				if (temp ->right) Level.push(temp ->right);
				Level.pop(), len--;
			}
			std::cout << '\n';
		}
	}
};