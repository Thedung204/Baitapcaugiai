#include<iostream>
using namespace std;

int main(){
    int n;
	int a[n];
    for(int i = 0; i < n; i++){
       cin >> a[i];
    }
    int size;
    int Max = size;
    cout << "Nhap chieu dai hang cho :";
    cin >> Max;
    cout << Max << endl;
    return 0;
}
class Queue{
     private:
         int tail, head, length, Max;
         int a[Max];
         Queue(){
             length = 0;
             tail = -1;
             head = 0;
         }
     public:
          bool enqueue(int x){
             if(length == Max){
                return 0;
             }else{
                tail = (tail + 1) % Max;
                a[tail] = x;
                length++;
                return 1;
             }
          }
          bool dequeue{
             if(length == 0){
                return 0;
             } else{
                head = (head + 1) % Max;
                length--;
                return 1;
             }
          }
}

