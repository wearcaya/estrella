#ifndef MY_FUNCTIONS_H_INCLUDED
#define MY_FUNCTIONS_H_INCLUDED

void dibujaCuadrado(HDC& hdc, int x, int y, int r){
    Rectangle(hdc,x-r,y-r,x+r,y+r);
}
void estrella(HDC& hdc, int x, int y, int r){
    if(r>0){
        estrella(hdc,x-r,y-r,r/2);
        estrella(hdc,x+r,y-r,r/2);
        estrella(hdc,x+r,y+r,r/2);
        estrella(hdc,x-r,y+r,r/2);
        dibujaCuadrado(hdc,x,y,r);//Sleep(5);
    }
}
#endif // MY_FUNCTIONS_H_INCLUDED
