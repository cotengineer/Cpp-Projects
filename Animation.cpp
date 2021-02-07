// C code to animate graphics in linux enviornment

#include<iostream> 
#include<stdio.h> 
#include<stdlib.h>
#include<cmath> 
#include<graphics.h> 

void wait_for_char() {
	//wait for a key press
	int in = 0;
	while (in == 0) {
		in = getchar();
	}
}

int main() { 
	int gd = DETECT, gm; 
	initgraph(&gd, &gm, NULL); 

	//top circle out of lines animation attempt
	for (int x=50;x<=250;x++) {
		int r = 100, h = 150, k=200;
		int y = abs(sqrt((r * r)-(x-h)*(x-h)) - k);
		//std::cout << y;
		line(h,k,x,y);
		delay(25);
	}

	//bottom circle out of lines animation attempt
	for (int x=250;x>=50;x = x - 1) {
		int r = 100, h = 150, k=200;
		int y = abs(sqrt((r * r)-(x-h)*(x-h)) + k);
		//std::cout << y << "\n";
		line(h,k,x,y);
		delay(25);
	}
	
	circle(150,200,100);

	delay(1000);
	
	//New circle
	circle(450,200,100);
	for (int x=350;x<=550;x++) {
		int r = 100, h = 450, k=200;
		int y = abs(sqrt((r * r)-(x-h)*(x-h)) - k);
		//std::cout << y;
		line(h,k,x,y);
		delay(25);
	}

	for (int x=550;x>=350;x = x - 1) {
		int r = 100, h = 450, k=200;
		int y = abs(sqrt((r * r)-(x-h)*(x-h)) + k);
		//std::cout << y;
		line(h,k,x,y);
		delay(15);
	}
	

	delay(5000);
	getch();

	//wait_for_char(); 
	closegraph(); 
	return 0; 
} 
