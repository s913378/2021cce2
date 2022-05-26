PImage img;
void setup(){
  size(500,300);
  img = loadImage("e.jpg");
 }
 void draw(){
   image(img, mouseX, mouseY);
 }
