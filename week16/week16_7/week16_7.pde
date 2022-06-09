void setup(){
size(450,450);
}
int []bx=new int[100];
int []by=new int[100];
int N=0;
void draw(){
  background(#F5D665);
  for(int y=50;y<450;y+=50){
  line(0,  y, 450,  y);
  }
  for(int x=50; x<450; x+=50){
  line (x, 0, x, 450);
  }
  fill(0);
  for(int  i=0; i<N; i++){
    ellipse( bx[i], by[i], 40, 40);
  }
  ellipse( mouseX, mouseY, 40,40);
}
void mousePressed(){
  bx[N]=mouseX; by[N]=mouseY;
  N++;
}
