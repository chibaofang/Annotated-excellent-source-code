/*copy a binary tree*/
tree_pointer copy(tree_pointer original) {
  tree_pointer temp;
  if(original) {
    temp = (tree_pointer) malloc(sizeof(node));
    if(IS_FULL(temp)) {
      fprintf(stderr, "The memory is full\n");
      exit(1);
    }
    temp->left_child = copy(original->left_child);
    temp->right_child = copy(original->right_child);
    temp->data = original->data;
    return temp;
  }
  return NULL;
}

/*equal?*/
int equal(tree_pointer first, tree_pointer second) {
  return (!first && !second)||(first && second && (first->data == second->data) && equal(first->left_child, second_child) && (equal(first->right_child, second->right_child))) 
}
