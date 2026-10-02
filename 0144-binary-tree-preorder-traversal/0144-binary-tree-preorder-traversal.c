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
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    struct TreeNode* stack[1000];
    struct TreeNode* current = root;

    int* result = (int*)malloc(1000 * sizeof(int));
    *returnSize = 0;
    int top = -1;

    if (root == NULL ) return result;
    stack[++top] = root;
    while (top != -1)
    {
        current = stack[top--];

        if ( current->right != NULL)
        {
            stack [++top] = current->right;
        }
        if (current -> left != NULL)
        {
            stack [++top] = current ->left;
        }
        result[(*returnSize)++] = current->val;
    }

return result;
}