#include <png++/png.hpp>
#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <png++/rgba_pixel.hpp>
 
int main(int nNumberofArgs, char *pszArgs[]) {
  //const char *filename;
  //filename=pszArgs[1];
 
  png::image< png::rgb_pixel > image("image.png");
  png::image< png::rgb_pixel > image1("gnome.png");
  png::image< png::rgb_pixel > image2(image.get_width(),image.get_height());
  std::cout<<"inaltimea imagini: "<<image.get_height()<<"\n";
  std::cout<<"lungimea imagini: "<<image.get_width()<<"\n";
  for (size_t y = 0; y < image.get_height(); ++y) {
    for (size_t x = 0; x < image.get_width(); ++x) {
	image2[y][x].red = 0;///*((int)*/image.get_pixel(x,y).red;/*+(int)image1.get_pixel(x,y).red)%256;*/
	image2[y][x].green = /*((int)*/image.get_pixel(x,y).green;/*-(int)image1.get_pixel(x,y).green)%256;*/
	image2[y][x].blue = /*((int)*/image1.get_pixel(x,y).blue;/*+(int)image1.get_pixel(x,y).blue)%256;*/
	//image2[y][x].alpha = image.get_pixel(x,y).alpha;
	//std::cout<<"valoare rosu: "<<(int) image.get_pixel(x,y).red<<"\n";
	//std::cout<<"valoare verde: "<<(int) image2[y][x].green<<"\n";
	//std::cout<<"valoare alpha: "<<(int)image[y][x].alpha<<"\n";
	
    }
  }
    
 image2.write("transparenta.png");
}
