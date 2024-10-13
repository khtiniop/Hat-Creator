#include <iostream>
using namespace std;

void const hatPrint(int tall, int counter, int face);
int const infoGrabHat();
int const infoGrabFace();
void const smile();
void const frown();

int main() {
    int counter = 0; 
   
    int hatHeight = infoGrabHat();  
    int faceType = infoGrabFace();  

    hatPrint(hatHeight, counter, faceType);  

    return 0;
}
int const infoGrabFace(){
    int y;
    cout<<"Would you like the output to have a smile (0)? or a frown (1)? "<<endl;
    cin>>y;
    return y;
}
int const infoGrabHat(){
    int x;
    int y;
    cout<<"How tall would you like your hat to be? "<<endl;
    cin>>x;
    return x; 
}
void const hatPrint(int tall, int counter,int y){
if (counter==0){
    cout<<" ----------"<<endl;
}
if(tall==0){
    cout<<"(----------)"<<endl;
    if(y==0){
        smile();
    }else{
        frown();
    }
    hatPrint(tall-1, counter+1, y);
}else if(tall>0){
    cout<<" |        |"<<endl;
    hatPrint(tall-1, counter+1, y);
}else{
    return;
}
}
void const smile(){
    cout<<" | ()   ()|"<<endl;
    cout<<" |    >   |"<<endl;
    cout<<" |  L_____|"<<endl;
    cout<<" |________|"<<endl;
}
void const frown(){
    cout<<" | ()   ()|"<<endl;
    cout<<" |    >   |"<<endl;
    cout<<" |  /-----|"<<endl;
    cout<<" |________|"<<endl;
}
