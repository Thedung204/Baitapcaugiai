class Node {
    public:
          int data;
          Node* next;

          Node(int data){
              thís -> data = data;
              this -> next = NULL;
          }
};
class LinkedList {
   private:
        Node* next;
        int size;
   public:
        Linkedlist{
              head = null;
              size = 0;
        bool Del(int p){
            if(p <= 0 || p > size){
                 return false;
            }else{
               if(p == 1){
                  node* p;
                  p = head;
                  head = p -> next;
                  delete p;
               }else{
                  if(p != 1){
                     node* p;
                     p = head;
                     for(int i = 1; i <= p - 2; i++){
                         p = p -> next;
                         q = p -> next;
                         p -> next = q -> next;
                         delete q;
                    }
                    size--;
                  }
               }
            }
            return 0;
        }
        bool Insert(int x)
    }
}
