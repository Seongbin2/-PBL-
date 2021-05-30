#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef struct TreeNode {
	char data;
	struct TreeNode *left, *right;
}TreeNode;

TreeNode n4 = { 'D', NULL, NULL };
TreeNode n5 = { 'E', NULL, NULL };
TreeNode n7 = { 'G', NULL, NULL };
TreeNode n2 = { 'B', &n4, NULL };
TreeNode n6 = { 'F', NULL, &n7 };
TreeNode n3 = { 'C', &n5, &n6 };
TreeNode n1 = { 'A', &n2, &n3 };


TreeNode* root = &n1;

void preorder (TreeNode *root){				//전위 순회
	if (root) {
		printf("%c", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(TreeNode* root) {				//중위 순회
	if (root) {
		inorder(root->left);
		printf("%c", root->data);
		inorder(root->right);
	}
}

void postorder(TreeNode* root) {
	if (root) {
		postorder(root->left);
		postorder(root->right);
		printf("%c", root->data);
	}
}


int main(void) {
	printf("전위순회 :");
	preorder(root);
	printf("\n중위순회 :");
	inorder(root);
	printf("\n후위순회 :");
	postorder(root);

	return 0;
}

