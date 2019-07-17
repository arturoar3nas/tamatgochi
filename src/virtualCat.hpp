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

    void set_stamina(const int stamina2) noexcept;
    void set_inpoints(const int intelligence) noexcept;
    int  get_stamina() const noexcept;
    int  get_inpoints() const noexcept;
    void mod_intelligence(const int more);
    void mod_stamina(const int type);
    void blink();
    void run();
    void surprised();
    void eating();
    void chat(std::string yousay);
    void math();

};
