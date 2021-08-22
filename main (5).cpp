#include <iostream>
#include <cstdint> 

using namespace std;


class RGBA
{
    uint8_t m_red;
    uint8_t m_green;
    uint8_t m_blue;
    uint8_t m_alpha;
 
public:
    RGBA () {


        m_red = 0;
        m_green = 0;
        m_blue = 0;
        m_alpha = 255;

    }
    void setRGBA(uint8_t r, uint8_t g, uint8_t b)
    {

        m_red = r;
        m_green = g;;
        m_blue = b;
        

    }


      void print()
    {

      cout <<"r= "<< static_cast<int> (m_red) <<", g= " << static_cast<int> (m_green)<<
           ", b= " << static_cast<int> (m_blue) <<", a= " << static_cast<int> (m_alpha);

    }


};


int main()
{
    
    RGBA color;
    color.setRGBA(0, 135, 135);
    color.print();

    return 0;
}

