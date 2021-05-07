#ifndef RECTBLOCKS_H
#define RECTBLOCKS_H

class RectBlocks {
  private:
    int w, h, l;

  public:
    RectBlocks();
    RectBlocks(int w, int h, int l);
    int getWidth();
    int getHeight();
    int getLength();
    void setWidth(int w);
    void setLength(int l);
    void setHeight(int h);
    void display();
};

#endif
