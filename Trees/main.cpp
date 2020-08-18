#include <iostream>
#include <queue>
using namespace std;
auto count =0;

class Node {
private:
    Node* left = NULL;
    Node* right = NULL;
    int data;


public:
    Node(int data)
    {
        this->data = data;

    }
    void insert(int value){
        if (value <= data){
            if(left == NULL){
                left = new Node(value);
            } else{
                left->insert(value);
            }
        } else{
            if(right == NULL){
                right = new Node(value);
            } else{
                right->insert(value);
            }
        }


    }
    void inOrder (){
        if (left != NULL){
            left->inOrder();
        }
        cout << data << ' ';
        if(right != NULL){
            right->inOrder();
        }
    }
    void preOrder (){
        cout << data << ' ';
        if (left != NULL){
            left->preOrder();
        }
        if(right != NULL){
            right->preOrder();
        }
    }
    void postOrder (){

        if (left != NULL){
            left->postOrder();
        }
        if(right != NULL){
            right->postOrder();
        }
        cout << data << ' ';

    }
    int height(int height){ // calculates the height of a tree
        if(left == NULL && right == NULL){
            return height;
        }

        else {
            height++;
            if (left != NULL)
                left->height(height);
            if (right != NULL)
                right->height(height);
        }


    }
    static void t1(Node* root)
    {
        if (!root)
            return;
        t1(root->left);
        cout << root->data << " ";

    }

    static void t2(Node* root)
    {
        if (!root)
            return;
        cout << root->data << " ";
        t2(root->right);
    }
    void topView() {
        t1(this);
        t2(this->right);

    }

    void levelOrder(queue<Node*> levelQueue) {
        if(count == 0){
            levelQueue.push(this);
            count++;
        }
        if (levelQueue.empty())
            return;
        if(left != NULL){
            levelQueue.push(left);
        }
        if(right != NULL){
            levelQueue.push(right);
        }

        cout << levelQueue.front()->data << ' ';
        levelQueue.pop();
        levelQueue.front()->levelOrder(levelQueue);
    }


};




int main() {

    Node root(3);
    root.insert(2);
    root.insert(5);
    root.insert(1);
    root.insert(6);
    root.insert(4);
    //root.insert(7);
    queue<Node*> levelQueue; // used for level order function

    root.levelOrder(levelQueue);


int height = 0;
    //root.topView();
   // cout << root.height(height);



    return 0;
}
