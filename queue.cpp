#include<iostream>
using namespace std;
class node{
    int data;
    node *next;

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
    public:
    node * r=NULL;
    node * f=NULL;
    void enqueue(int d){
        node *current=new node();
        current->data=d;
        current->next=NULL;
        if(r==NULL){
            r=current;
            f=current;
        }
        else{
            r->next=current;
            r=current;
        }

        }
        

    
    int dequeue(){
        if(r==NULL){
            cout<<"empty queue"<<endl;
            return 999;
        }
        
            node *temp=f;
            int x=f->data;
            f=f->next;
            delete(temp);
            return x;

    }
    void display(){
            
            node *temp=f;
            while(temp!=0){
                cout<<temp->data<<endl;
                temp=temp->next;
            }
        } 
    

};
int main(){
    node n;
    int option,data;

    do{
        cout<<"Enter an option:"<<endl<<endl;
        cout<<"0.Exit"<<endl;
        cout<<"1.Enqueue"<<endl;
        cout<<"2.Dequeue"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Clear screen"<<endl;
       cin>>option;
        switch(option){
            case 0:
            return 0;
            break;

            case 1:
            cout<<"Enter a value to enqueue:"<<endl;
            cin>>data;
            n.enqueue(data);
            break;

            case 2:
            cout<<"Popped data is:"<<endl;
            cout<<n.dequeue()<<endl;
            break;

            case 3:
            cout<<"Elements in queue are:"<<endl<<endl;
            n.display();
            break;

            case 4:
            system("cls");

            default:
            cout<<"Enter valid option"<<endl<<endl;


        }
    }
    while(option!=0);
    return 0;
}
