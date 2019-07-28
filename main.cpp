#include "src/virtualCat.hpp"
#include <chrono>
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <thread>

using namespace std;

int main() {
  VirtualCat cat;
  int ans = 0;
  string ans1 = "";

  while (ans != 0) {
    cout << "\n\n\n what you wanna little Murdock to "
            "do?\n\n0-exit\n1-blink\n2-do excersice\n3-eat\n4-chat with "
            "him\n5-do math with him\n6-see stamina\n7-see intelligence\n";
    cout << "your option: ";
    cin >> ans;

    switch (ans) {
    case 1:
      cat.blink();
      break;
    case 2:
      cat.run();
      break;
    case 3:
      cat.eating();
      break;
    case 4: {
      string ans3;
      cout << "write your text now:\n";
      cat.chat(ans3);
      break;
    }
    case 5:
      cat.math();
      break;
    case 6: {
      int st;
      st = cat.get_stamina();
      cout << st << "\n";
      std::this_thread::sleep_for(std::chrono::milliseconds(900));
      break;
    }
    case 7: {
      int in;
      in = cat.get_inpoints();
      cout << in << "\n";
      std::this_thread::sleep_for(std::chrono::milliseconds(900));
      break;
    }

    default:
      cout << "invalid action please try again\n";
      break;
    } // end switch case
    if (system("CLS"))
      system("clear");
  }
}
