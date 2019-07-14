#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <chrono>
#include <thread>

class VirtualCat{
private:
    int stamina=20;
    int inpoints=0;

public:

    VirtualCat();

    void set_stamina(int stamina2);
    void set_inpoints(int intelligence);
    int get_stamina();
    int get_inpoints();
    void mod_intelligence(int more);
    void mod_stamina(int type);
    void blink();
    void run();
    void surprised();
    void eating();
    void chat(std::string yousay);
    void math();

};
