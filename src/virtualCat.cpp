#include "virtualCat.hpp"

void z() {std::this_thread::sleep_for(std::chrono::milliseconds(100));}
void z2() {std::this_thread::sleep_for(std::chrono::milliseconds(210));}
void z3() {std::this_thread::sleep_for(std::chrono::milliseconds(900));}
void clearscreen(){for(int i=0;i<100;i++){std::cout<<"";}}

VirtualCat::VirtualCat() {
    //!constructor
}

void VirtualCat::set_stamina(const int stamina2){
    stamina=stamina2;
}

void VirtualCat::set_inpoints(const int intelligence){
    inpoints=intelligence;
}

int VirtualCat::get_stamina() const {
    return stamina;
}

int VirtualCat::get_inpoints() const {
    return inpoints;
}

void VirtualCat::mod_intelligence(const int more){
    int inte=get_inpoints();
    inte=inte+more;
    set_inpoints(inte);
}

void VirtualCat::mod_stamina(const int type){
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

void VirtualCat::blink(){
    int in=get_stamina();
    if(in<=0){
        std::cout<<"not enough stamina!! eat something";
        z3();
    }
    else{
        std::string murdy="(^.w.^)";
        std::string murdy2="(^owo^)";

        for(int i=0;i<6;i++){
            std::cout<<murdy<<std::endl;
            z();
            if (system("CLS")) system("clear");
            z();
            std::cout<<" ";
            std::cout<<murdy2<<std::endl;
            z2();
            if (system("CLS")) system("clear");
            std::cout<<" ";
        }
        mod_stamina(1);
    }
}

void VirtualCat::run(){
    const std::string murdy="(^.w.^)";
    int st;
    st=get_stamina();
    if(st<=0){
        std::cout<<"not enough stamina!! eat something"<<std::endl;
        z3();
    }
    else{
        for(int i=0;i<8;i++){
            std::cout<<"    "<<std::endl;
            z();
            for(int j=0;j<i;j++){
                std::cout<<murdy<<std::endl;
                z();
                if (system("CLS")) system("clear");
            }
        }
        mod_stamina(1);
    }
}

void VirtualCat::surprised(){
    const std::string murdy="(^.w.^)";
    const std::string murdy2="(^owo^)";

    for(int i=0;i<6;i++){
        std::cout<<murdy<<std::endl;
        z();
        if (system("CLS")) system("clear");
        z();
        std::cout<<" "<<std::endl;
        std::cout<<murdy2<<std::endl;
        z2();
        if (system("CLS")) system("clear");
        std::cout<<" "<<std::endl;

    }
}

void VirtualCat::eating(){
    const std::string murdy="(^.w.^) ***";
    const std::string murdy2="(^.0.^)  **";
    const std::string murdy3="(^.w.^)   *";

    for(int i=0;i<6;i++){
        std::cout<<murdy;
        z2();
        z2();
        if (system("CLS")) system("clear");
        z();
        std::cout<<" "<<std::endl;
        std::cout<<murdy2<<std::endl;
        z2();
        z2();
        if (system("CLS")) system("clear");
        std::cout<<" "<<std::endl;
        std::cout<<murdy3<<std::endl;
        z2();
        z2();
        if (system("CLS")) system("clear");
        std::cout<<" "<<std::endl;

    }
    mod_stamina(2);
}

void VirtualCat::chat(std::string yousay){
    //string yousay
    const std::string kittysay="meow\n";
    const std::string kittysay2="prrrrr\n";
    const std::string kittysay3="meeeeow prrr\n";

    int count=0;

    //kitty replies
    while(yousay!="bye"){
        std::cin>>yousay;
        int value=rand()%100;
        if(value<25){
            std::cout<<kittysay2<<std::endl;
        }
        else if(value>25&&value<50){
            std::cout<<kittysay3;
        }
        else if(value<100&&value>50){
            std::cout<<kittysay<<std::endl;
        }
        else{
            std::cout<<kittysay<<std::endl;
        }
        if(yousay=="hey"){
            std::cout<<"prrrr mee!!\n"<<std::endl;
        }
        if(yousay=="cute"){
            std::cout<<">w< meeeow...\n"<<std::endl;
        }
        if(yousay=="sweetie"){
            surprised();
        }
        count++;
    }
    mod_intelligence(count);
}

void VirtualCat::math(){
    const std::string murdy="(^.3.^)- <( ";
    int reply = 0;
    int intelligence=0;

    std::cout<<"let's start, when you wanna end just write -1\n\n"<<std::endl;

    while(reply!=-1){
        int value=rand()%100;
        int value2=rand()%100;
        std::cout<<murdy<<std::endl;
        std::cout<<value<<" + "<<std::endl;
        std::cout<<value2<<" ? "<<std::endl;
        std::cout<<" )\n"<<std::endl;

        std::cin>>reply;
        if(reply==(value+value2)){
            std::cout<<"meow!\n"<<std::endl;
            std::cout<<"+1 point of intelligence\n"<<std::endl;
            intelligence++;
            intelligence++;
        }
        else{
            std::cout<<"meow... (^u__u^)\n"<<std::endl;
        }

    }

    mod_intelligence(intelligence);
}
