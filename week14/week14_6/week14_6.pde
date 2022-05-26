PShape gundam;
void setup(){
  size(500,300,P3D);
  gundam = loadShape("Gundam.obj");
}
void draw(){
  background(128);
  
  translate(250,500);
  scale(20,-20,20);
  rotateY( radians(frameCount));
  shape(gundam);
}
