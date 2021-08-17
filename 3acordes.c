#include "types.h"
#include "stat.h"
#include "user.h"

int main (){
	modeswitch(1);
	
	/* fondo gris */
	plotrectangle(0,0,320,200,27);
	
	/* Adriel */
	plotrectangle(42,79,38,9,6);
	plotrectangle(40,77,5,2,0);
	plotrectangle(47,77,10,2,0);
	plotrectangle(67,77,13,2,0);
	plotrectangle(57,79,10,2,0);
	plotrectangle(40,79,2,5,0);
	plotrectangle(45,79,2,2,0);
	plotrectangle(52,81,3,2,0);
	plotrectangle(47,83,3,2,0);
	plotrectangle(62,83,3,2,0);
	plotrectangle(70,81,2,2,0);
	plotrectangle(75,83,2,2,0);
	plotrectangle(42,83,2,3,0);
	plotrectangle(40,86,4,2,0);
	plotrectangle(80,79,2,11,0);
	plotrectangle(47,88,8,2,6);
	plotrectangle(37,88,3,2,0);
	plotrectangle(40,88,5,2,89);
	plotrectangle(45,88,2,2,0);
	plotrectangle(55,88,25,7,89);
	plotrectangle(77,90,10,2,0);
	plotrectangle(35,90,10,10,0);
	plotrectangle(45,110,15,10,89);
	plotrectangle(45,90,7,25,0);
	plotrectangle(37,100,3,6,0);
	plotrectangle(40,102,5,2,0);
	plotrectangle(35,106,10,14,89);
	plotrectangle(35,105,2,7,0);
	plotrectangle(32,112,3,6,0);
	plotrectangle(40,104,5,3,89);
	plotrectangle(38,90,2,2,89);
	plotrectangle(45,90,2,2,89);
	plotrectangle(40,92,2,2,89);
	plotrectangle(38,95,2,4,89);
	plotrectangle(42,95,3,2,89);
	plotrectangle(40,98,2,2,89);
	plotrectangle(40,100,5,2,89);
	plotrectangle(52,95,23,15,89);
	plotrectangle(47,94,3,20,6);
	plotrectangle(45,115,5,3,0);
	plotrectangle(52,90,5,6,89);
	plotrectangle(57,93,10,2,0);
	plotrectangle(72,93,3,2,0);
	plotrectangle(75,92,2,9,0);
	plotrectangle(50,95,5,4,0);
	plotrectangle(55,95,2,7,0);
	plotrectangle(57,102,10,2,0);
	plotrectangle(67,95,2,7,0);
	plotrectangle(69,95,3,2,0);
	plotrectangle(77,98,10,2,0);
	plotrectangle(87,92,2,7,0);
	plotrectangle(80,100,9,2,0);
	plotrectangle(75,102,14,8,89); 
	plotrectangle(62,108,25,2,0);
	plotrectangle(75,102,5,2,0);
	plotrectangle(89,102,2,6,0);
	plotrectangle(87,107,2,2,0);
	plotrectangle(60,110,2,19,0);
	plotrectangle(88,109,2,1,27);
	plotrectangle(62,110,18,3,6); 
	plotrectangle(62,110,5,17,6); 
	plotrectangle(67,113,15,6,0); 
	plotrectangle(67,113,3,16,0); 
	plotrectangle(60,127,8,2,0);
	plotrectangle(72,125,10,5,89); 
	plotrectangle(70,123,13,2,0); 
	plotrectangle(80,110,2,8,0); 
	plotrectangle(70,125,2,5,0); 
	plotrectangle(70,130,15,2,0); 
	plotrectangle(82,125,3,6,0); 
	plotrectangle(77,127,3,3,0); 
	plotrectangle(70,115,4,2,15); 
	plotrectangle(77,115,3,2,15);
	plotrectangle(42,119,3,2,0); 
	plotrectangle(45,115,15,10,89); 
	plotrectangle(45,121,3,2,0);
	plotrectangle(45,123,5,2,0); 
	plotrectangle(50,125,10,2,0); 
	plotrectangle(75,97,2,3,89); 
	plotrectangle(75,100,5,2,89); 
	plotrectangle(60,95,5,5,77); 
	plotrectangle(62,97,5,5,77); 
	plotrectangle(62,97,2,2,0); 
	plotrectangle(80,92,5,4,77); 
	plotrectangle(82,94,5,4,77); 
	plotrectangle(82,93,2,2,0);
	plotrectangle(85,92,2,2,89);
	plotrectangle(77,92,3,6,89);
	plotrectangle(80,96,2,2,89);
	plotrectangle(87,109,3,2,27);
	

	/*Jaique */
	plotrectangle(100,70,25,1,25);
	plotrectangle(100,71,25,2,0);
	plotrectangle(97,73,35,2,0);
	plotrectangle(97,75,43,2,0);
	plotrectangle(100,77,47,2,0);
	plotrectangle(105,79,52,2,0);
	plotrectangle(107,81,58,2,0);
	plotrectangle(110,83,57,2,0);
	plotrectangle(110,85,60,2,0);
	plotrectangle(112,87,58,2,0);
	plotrectangle(167,87,5,4,0);
	plotrectangle(150,88,17,3,90);
	plotrectangle(117,89,33,2,0);
	plotrectangle(120,91,15,1,0);
	plotrectangle(135,91,35,3,90);
	plotrectangle(120,92,15,2,0);
	plotrectangle(120,94,7,2,0);
	plotrectangle(170,91,5,2,0);
	plotrectangle(127,94,43,15,90);
	plotrectangle(120,94,5,3,0);
	plotrectangle(117,98,10,7,0);
	plotrectangle(125,96,2,5,90);
	plotrectangle(120,95,5,3,0);
	plotrectangle(120,105,7,5,0);
	plotrectangle(120,101,5,2,90);
	plotrectangle(120,98,2,5,90);
	//cara, orejas
	plotrectangle(127,105,40,5,90);
	plotrectangle(135,100,10,4,15);
	plotrectangle(160,98,10,4,15);
	plotrectangle(138,100,4,4,0);
	plotrectangle(163,98,4,4,0);
	plotrectangle(152,97,3,3,0);
	plotrectangle(155,100,2,4,0);
	plotrectangle(157,104,3,4,0);
	plotrectangle(150,108,7,2,0);
	plotrectangle(130,110,35,5,90);
	plotrectangle(170,93,7,2,0);
	plotrectangle(170,93,2,10,90);
	plotrectangle(172,93,3,10,0);
	plotrectangle(175,94,2,6,90);
	plotrectangle(177,93,2,7,0);
	plotrectangle(175,100,2,2,0);
	plotrectangle(175,91,3,2,0);
	plotrectangle(170,104,2,4,0);
	plotrectangle(167,108,3,2,0);
	//Nariz para abajo
	plotrectangle(165,110,2,13,0);
	plotrectangle(127,110,3,5,0);
	plotrectangle(130,115,2,3,0);
	plotrectangle(135,115,5,5,90);
	plotrectangle(132,115,3,1,90);
	plotrectangle(140,115,25,10,90);
	plotrectangle(145,125,20,4,90);
	plotrectangle(162,122,3,7,0);
	plotrectangle(147,118,10,3,0);
	plotrectangle(132,116,3,2,0);
	plotrectangle(135,118,2,3,0);
	plotrectangle(137,120,3,2,0);
	plotrectangle(137,121,3,2,0);
	plotrectangle(140,123,2,2,0);
	plotrectangle(142,125,3,2,0);
	plotrectangle(145,127,5,2,0);
	plotrectangle(150,129,12,2,0);

  /* Edward*/
    int edward []= {
27,27,27,27,27,27,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,27,27,27,27,27,27,27,27,27,27,
27,27,27,27,27,0,0,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,0,0,27,27,27,27,27,27,27,27,27,
27,27,27,27,0,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,0,27,27,27,27,27,27,27,27,
27,27,27,0,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,0,27,27,27,27,27,27,27,
27,27,27,0,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,0,27,27,27,27,27,27,27,
27,27,0,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,0,27,27,27,27,27,27,
27,27,0,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,0,27,27,27,27,27,
27,27,0,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,0,27,27,27,27,
0,186,186,186,186,186,186,186,186,186,186,186,186,186,0,0,0,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,0,27,27,
0,186,186,186,186,186,186,186,186,186,186,186,186,0,90,90,90,0,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,0,27,
0,186,186,186,186,186,186,186,0,186,186,186,0,90,90,90,90,90,0,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,0,27,
0,186,186,186,186,186,186,186,0,186,186,0,90,15,0,0,15,90,0,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,0,27,
0,186,186,186,186,186,186,186,186,0,0,90,90,15,0,0,15,90,90,0,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,186,0,
0,186,186,186,186,186,186,186,0,90,90,90,90,90,90,90,90,90,90,90,0,0,186,186,186,186,186,186,186,186,186,186,186,186,186,186,0,
0,186,186,186,186,186,186,186,0,90,90,90,90,90,90,90,90,0,90,90,90,90,0,0,186,186,186,186,186,186,186,186,186,186,186,186,0,
0,186,186,186,186,186,186,186,0,90,90,90,90,90,90,90,0,90,90,90,90,90,90,90,0,186,186,186,186,186,186,186,186,186,186,186,0,
0,186,186,186,186,186,186,186,186,0,90,90,90,90,90,90,0,90,90,90,90,90,90,90,90,0,186,186,186,186,186,186,186,186,186,186,0,
0,186,186,186,186,186,186,186,186,0,90,90,90,90,90,0,90,90,90,90,90,90,90,90,90,0,186,186,186,186,186,186,186,186,186,186,0,
0,186,186,186,186,186,186,186,186,186,0,90,90,90,90,0,90,0,0,90,90,90,90,90,90,0,186,186,186,186,186,186,186,186,186,186,0,
27,0,186,186,186,186,186,186,186,186,0,90,90,90,90,0,0,90,90,90,90,90,90,90,90,0,186,186,186,186,186,186,186,186,186,186,0,
27,0,186,186,186,186,186,186,186,186,186,0,90,90,90,90,90,90,90,90,90,90,90,90,90,0,186,186,186,186,186,186,186,186,186,186,0,
27,27,0,186,186,186,186,186,186,186,186,186,0,90,90,90,90,90,0,0,0,90,90,90,90,90,0,186,186,186,186,186,186,186,186,0,27,
27,27,27,0,0,0,0,0,186,186,186,186,186,0,90,90,90,90,90,90,90,90,90,90,90,0,27,0,0,0,0,0,0,0,0,27,27,
27,27,27,27,27,27,27,27,0,0,0,0,0,0,0,90,90,90,90,90,90,90,90,90,0,27,27,27,27,27,27,27,27,27,27,27,27,
27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,0,0,0,0,0,0,0,0,0,27,27,27,27,27,27,27,27,27,27,27,27,27
};
  /**** para cambiar de lugar , cambiar i,j y el maximo de cada while ****/
  int p =0;
  int j =195; 
  int i =75; 
  while(i < 245){
  	j = 195;
  	while(j < 269){	
  		if(p < 925){
  			plotrectangle(j,i,2,2,edward[p]);
  			p++;
  		}
  		j = j +2;
  	}
  	i = i +2;
  }
  exit();
}