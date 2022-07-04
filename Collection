// #include<reg51.h>
//unsigned int duanma[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
//		0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};//共阴显示0~F的值
//void main()
//{
//	while(1)
//	{
//	  P2=duanma[15];   //共阴极
//	  P1=~duanma[1];//共阳极
//	}
//
//}
//#include<reg51.h>
//unsigned int duanma[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
//		0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};//共阴显示0~F的值
//void delay(unsigned int i)
//{
//	while(i--);
//}
//void main()
//{
//    int j;	
//	while(1)
//	{
//	  for(j=9;j>=0;j--)
//	  {
//	   	P2=duanma[j];   //共阴极
//	  //P1=~duanma[1];//共阳极
//	    delay(50000);
//	  }
//
//	}
//}

/*P0 段选  P2 位选  共阳极*/

//#include<reg51.h>
//unsigned int duanma[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
//		0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};//共阴显示0~F的值
//void delay(unsigned int i)
//{
//	while(i--);
//}
//void main()
//{	
//	while(1)
//	{
//	  P2=0X01;//送第一位位选		0000 0001
//	  P0=~duanma[1];//送第一位段选
//	  delay(500);//延时
//	  P0=0XFF;//消影
//	  P2=0X02;//送第二位位选	 0000 0010
//	  P0=~duanma[2];//送第二位段选
//	  delay(500);//延时
//	  P0=0XFF;//消影
//
//	  P2=0X04;//送第3位位选	 0000 0100
//	  P0=~duanma[3];//送第3位段选
//	  delay(500);//延时
//	  P0=0XFF;//消影
//
//	  P2=0X08;//送第3位位选	 0000 1000
//	  P0=~duanma[4];//送第3位段选
//	  delay(500);//延时
//	  P0=0XFF;//消影
//
//	  P2=0X10;//送第4位位选	 0001 0000
//	  P0=~duanma[5];//送第4位段选
//	  delay(500);//延时
//	  P0=0XFF;//消影
//
//	  P2=0X20;//送第5位位选	 0010 0100
//	  P0=~duanma[6];//送第5位段选
//	  delay(500);//延时
//	  P0=0XFF;//消影
//
//	  P2=0X40;//送第6位位选	 0100 1000
//	  P0=~duanma[7];//送第6位段选
//	  delay(500);//延时
//	  P0=0XFF;//消影
//
//	  P2=0X80;//送第4位位选	 1000 0000
//	  P0=~duanma[8];//送第4位段选
//	  delay(500);//延时
//	  P0=0XFF;//消影
//	}
//}

//#include<reg51.h>
//unsigned int duanma[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
//		0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};//共阴显示0~F的值
//unsigned int weima[]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
//void delay(unsigned int i)
//{
//	while(i--);
//}
//void main()
//{	
//	while(1)
//	{
//	  P2=weima[0];//送第一位位选		0000 0001
//	  P0=~duanma[1];//送第一位段选
//	  delay(500);//延时
//	  P0=0XFF;//消影
//	  P2=weima[1];;//送第二位位选	 0000 0010
//	  P0=~duanma[2];//送第二位段选
//	  delay(500);//延时
//	  P0=0XFF;//消影
//
//	  P2=weima[2];;//送第3位位选	 0000 0100
//	  P0=~duanma[3];//送第3位段选
//	  delay(500);//延时
//	  P0=0XFF;//消影
//
//	  P2=weima[3];;//送第3位位选	 0000 1000
//	  P0=~duanma[4];//送第3位段选
//	  delay(500);//延时
//	  P0=0XFF;//消影
//
//	  P2=weima[4];;//送第4位位选	 0001 0000
//	  P0=~duanma[5];//送第4位段选
//	  delay(500);//延时
//	  P0=0XFF;//消影
//
//	 P2=weima[5];;//送第5位位选	 0010 0100
//	  P0=~duanma[6];//送第5位段选
//	  delay(500);//延时
//	  P0=0XFF;//消影
//
//	  P2=weima[6];;//送第6位位选	 0100 1000
//	  P0=~duanma[7];//送第6位段选
//	  delay(500);//延时
//	  P0=0XFF;//消影
//
//	  P2=weima[7];;//送第4位位选	 1000 0000
//	  P0=~duanma[8];//送第4位段选
//	  delay(500);//延时
//	  P0=0XFF;//消影
//	}
//}
#include<reg51.h>
unsigned int duanma[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
		0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};//共阴显示0~F的值
unsigned int xianshi[]={1,9,8,7,8,8,9,7};
unsigned int weima[]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
void delay(unsigned int i)
{
	while(i--);
}
void display()
{
   	int j;
	for(j=0;j<8;j++)
	  {
	   P2=weima[j];//送第一位位选		0000 0001
	   P0=~duanma[xianshi[j]];//送第一位段选
	   delay(500);//延时
	   P0=0XFF;//消影
	  }
}
void main()
{	

	while(1)
	{
	  display();
	}
}
