TreeNode{
     TreeNode left,right;   //左右子树
     DataType data;         //数据
}


Stack<TreeNode> stack = new Stack<>();
stack.push(root);
while(!stack.isEmpty()){
    TreeNode tn = stack.pop();
    TreeNode tmp = tn.left;
    tn.left = tn.right;
    tn.right= tmp
    if(tn.left != null) stack.push(tn.left);
    if(tn.right != null) stack.push(tn.right);
}
