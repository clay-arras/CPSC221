#include "block.h"
#include <cmath>
#include <iostream>

int Block::width() const
{
    return (int)data.size();
}
int Block::height() const
{
    return (int)data[0].size();
}

void Block::render(PNG &img, int x, int y) const
{ 
    for (int i = 0; i < Block::width(); i++) 
    {
        for (int j = 0; j < Block::height(); j++) 
        {
            *(img.getPixel(x+i, y+j)) = data[i][j];
        }
    }
}

void Block::build(PNG &img, int x, int y, int width, int height)
{
    for (int i = 0; i < width; i++) 
    {
        std::vector<RGBAPixel> rowData;
        for (int j = 0; j < height; j++) 
        {
            rowData.push_back(*(img.getPixel(x+i, y+j)));
        }
        Block::data.push_back(rowData);
    }
}

void Block::flipVert()
{
    for (int i = 0; i < Block::width(); i++)
    {
        for (int j = 0; j < Block::height()/2; j++)
        {
            RGBAPixel tmp = data[i][j];
            data[i][j] = data[i][data[i].size()-1-j];
            data[i][data[i].size()-1-j] = tmp;
        }       
    }
}

void Block::flipHoriz()
{
    for (int i = 0; i < Block::width()/2; i++)
    {
        vector<RGBAPixel> tmp = data[i];
        data[i] = data[data.size()-1-i];
        data[data.size()-1-i] = tmp;
    }
}

void Block::rotateRight()
{
    for (int i = 0; i < Block::width(); i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            swap(data[j][i], data[i][j]);
        }
    }
    Block::flipHoriz();
}
