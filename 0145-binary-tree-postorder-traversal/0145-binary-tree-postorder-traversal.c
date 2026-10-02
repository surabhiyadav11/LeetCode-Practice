/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    #define MAX 1000
    struct TreeNode* stack1[MAX];
    struct TreeNode* stack2[MAX];
    int top1 = -1, top2 = -1;

    int* result = (int*)malloc(MAX * sizeof(int));
    *returnSize = 0;

    if (root == NULL) {
        return result;  // empty tree → return empty array
    }

    stack1[++top1] = root;

    while (top1 != -1) {
        struct TreeNode* current = stack1[top1--];
        stack2[++top2] = current;

        if (current->left != NULL) {
            stack1[++top1] = current->left;
        }
        if (current->right != NULL) {
            stack1[++top1] = current->right;
        }
    }

    while (top2 != -1) {
        struct TreeNode* current = stack2[top2--];
        result[(*returnSize)++] = current->val;
    }

    return result;
}
