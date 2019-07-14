#include<iostream>
#include<fstream>
#include<string>
#include <stdlib.h>
#include <chrono>
#include <thread>

using namespace std;

void z() {this_thread::sleep_for(std::chrono::milliseconds(100));}
void z2() {this_thread::sleep_for(std::chrono::milliseconds(210));}
void z3() {this_thread::sleep_for(std::chrono::milliseconds(900));}
void clearscreen(){for(int i=0;i<100;i++){cout<<"";}}

class VirtualCat{
private:
    int stamina=20;
    int inpoints=0;

public:

    VirtualCat() {
        //!constructor
    }

    void set_stamina(int stamina2){
        stamina=stamina2;
    }

    void set_inpoints(int intelligence){
        inpoints=intelligence;
    }

    int get_stamina(){
        return stamina;
    }

    int get_inpoints(){
        return inpoints;
    }

    void mod_intelligence(int more){
        int inte=get_inpoints();
        inte=inte+more;
        set_inpoints(inte);
    }

    void mod_stamina(int type){
        int stam;
        stam=get_stamina();

        if(type==1){ //take away
            stam=stam-2;
        }
        else if(type==2){ //give back
            stam=stam+2;
        }
        set_stamina(stam);
    }


    void blink(){
        int in;
        in=get_stamina();
        if(in<=0){
            cout<<"not enough stamina!! eat something";
            z3();
        }
        else{
            string murdy="(^.w.^)";
            string murdy2="(^owo^)";

            for(int i=0;i<6;i++){
                cout<<murdy<<endl;
                z();
                if (system("CLS")) system("clear");
                z();
                cout<<" ";
                cout<<murdy2<<endl;
                z2();
                if (system("CLS")) system("clear");
                cout<<" ";
            }
            mod_stamina(1);
        }
    }

    void run(){
        string murdy="(^.w.^)";
        int st;
        st=get_stamina();
        if(st<=0){
            cout<<"not enough stamina!! eat something"<<endl;
            z3();
        }
        else{
            for(int i=0;i<8;i++){
                cout<<"    "<<endl;
                z();
                for(int j=0;j<i;j++){
                    cout<<murdy<<endl;
                    z();
                    if (system("CLS")) system("clear");
                }
            }
            mod_stamina(1);
        }
    }

    void surprised(){
        string murdy="(^.w.^)";
        string murdy2="(^owo^)";

        for(int i=0;i<6;i++){
            cout<<murdy<<endl;
            z();
            if (system("CLS")) system("clear");
            z();
            cout<<" "<<endl;
            cout<<murdy2<<endl;
            z2();
            if (system("CLS")) system("clear");
            cout<<" "<<endl;

        }
    }

    void eating(){
        string murdy="(^.w.^) ***";
        string murdy2="(^.0.^)  **";
        string murdy3="(^.w.^)   *";

        for(int i=0;i<6;i++){
            cout<<murdy;
            z2();
            z2();
            if (system("CLS")) system("clear");
            z();
            cout<<" "<<endl;
            cout<<murdy2<<endl;
            z2();
            z2();
            if (system("CLS")) system("clear");
            cout<<" "<<endl;
            cout<<murdy3<<endl;
            z2();
            z2();
            if (system("CLS")) system("clear");
            cout<<" "<<endl;

        }
        mod_stamina(2);
    }

    void chat(string yousay){
        //string yousay
        string kittysay="meow\n";
        string kittysay2="prrrrr\n";
        string kittysay3="meeeeow prrr\n";

        int count=0;

        //kitty replies
        while(yousay!="bye"){
            cin>>yousay;
            int value=rand()%100;
            if(value<25){
                cout<<kittysay2<<endl;
            }
            else if(value>25&&value<50){
                cout<<kittysay3;
            }
            else if(value<100&&value>50){
                cout<<kittysay<<endl;
            }
            else{
                cout<<kittysay<<endl;
            }
            if(yousay=="hey"){
                cout<<"prrrr mee!!\n"<<endl;
            }
            if(yousay=="cute"){
                cout<<">w< meeeow...\n"<<endl;
            }
            if(yousay=="sweetie"){
                surprised();
            }
            count++;
        }
        mod_intelligence(count);
    }

    void math(){
        string murdy="(^.3.^)- <( ";
        int reply = 0;
        int intelligence=0;

        cout<<"let's start, when you wanna end just write -1\n\n"<<endl;

        while(reply!=-1){
            int value=rand()%100;
            int value2=rand()%100;
            cout<<murdy<<endl;
            cout<<value<<" + "<<endl;
            cout<<value2<<" ? "<<endl;
            cout<<" )\n"<<endl;

            cin>>reply;
            if(reply==(value+value2)){
                cout<<"meow!\n"<<endl;
                cout<<"+1 point of intelligence\n"<<endl;
                intelligence++;
                intelligence++;
            }
            else{
                cout<<"meow... (^u__u^)\n"<<endl;
            }

        }

        mod_intelligence(intelligence);
    }

};

int main(){
    VirtualCat cat;
    int ans = 0;
    string ans1 = "";

    while(ans!=0) {

        cout<<"\n\n\n what you wanna little Murdock to do?\n\n0-exit\n1-blink\n2-do excersice\n3-eat\n4-chat with him\n5-do math with him\n6-see stamina\n7-see intelligence\n";
        cout<<"your option: ";
        cin>>ans;

        switch(ans){
        case 1:
            cat.blink();
            break;
        case 2:
            cat.run();
            break;
        case 3:
            cat.eating();
            break;
        case 4:{
            string ans3;
            cout<<"write your text now:\n";
            cat.chat(ans3);
            break;
        }
        case 5:
            cat.math();
            break;
        case 6:{
            int st;
            st=cat.get_stamina();
            cout<<st<<"\n";
            z3();
            break;
        }
        case 7:{
            int in;
            in=cat.get_inpoints();
            cout<<in<<"\n";
            z3();
            break;
        }

        default:
            cout<<"invalid action please try again\n";
            break;
        } //end switch case
        if (system("CLS")) system("clear");
    }
}

