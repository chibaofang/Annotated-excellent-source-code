void inorder(tree_pointer ptr)
{
  if (ptr){
    inorder(ptr->left_child);
    printf("%d",ptr_data);
    inorder(ptr->right_child);
  }
}

void preorder(tree_pointer ptr)
{
  if(ptr){
    printf("%d",ptr_data);
    inorder(ptr->left_child);
    inorder(ptr->right_child);
  }
}

void postorder(tree_pointer ptr)
{
  if(ptr){
    inorder(ptr->left_child);
    inorder(ptr->right_child);
     printf("%d",ptr_data);
  }
}
