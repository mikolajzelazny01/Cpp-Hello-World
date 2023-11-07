#include <iostream>
#include <string>


class Hello {
    private:
        std::string msg;
    public:
        Hello(std::string msg): msg(msg) {}

        virtual std::string to_string() {
            return msg;
        }
};

class World : public Hello {
    private:
        std::string msg;
    public:
        World(std::string msg1, std::string msg2): Hello(msg1), msg(msg2) {}
        std::string to_string() {
            //std::cout << Hello::to_string() << " " << msg;

            return Hello::to_string() + " " + msg;
        }
};

int main()
{
    World ob1("hello", "world");
    std::cout << ob1.to_string() << std::endl;



  return 0;
}