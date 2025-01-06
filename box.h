#ifndef BOX_H
#define BOX_H

const short MAX_SIZE = 39;

class Box {
    public:
        Box(short size, char border = '#', char fill = '*');//Default Constructor

        short GetSize();
        void SetSize(const short s);

        char GetBorder();
        void SetBorder(const char b);
    
        char GetFill();
        void SetFill(const char f);

        void GrowSize(const short s);
        void Summary();
    private:
        short size;
        char border;
        char fill;
        void Draw();
};

#endif