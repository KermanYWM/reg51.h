// #include<reg51.h>
//unsigned int duanma[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
//		0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};//������ʾ0~F��ֵ
//void main()
//{
//	while(1)
//	{
//	  P2=duanma[15];   //������
//	  P1=~duanma[1];//������
//	}
//
//}
//#include<reg51.h>
//unsigned int duanma[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
//		0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};//������ʾ0~F��ֵ
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
//	   	P2=duanma[j];   //������
//	  //P1=~duanma[1];//������
//	    delay(50000);
//	  }
//
//	}
//}

/*P0 ��ѡ  P2 λѡ  ������*/

//#include<reg51.h>
//unsigned int duanma[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
//		0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};//������ʾ0~F��ֵ
//void delay(unsigned int i)
//{
//	while(i--);
//}
//void main()
//{	
//	while(1)
//	{
//	  P2=0X01;//�͵�һλλѡ		0000 0001
//	  P0=~duanma[1];//�͵�һλ��ѡ
//	  delay(500);//��ʱ
//	  P0=0XFF;//��Ӱ
//	  P2=0X02;//�͵ڶ�λλѡ	 0000 0010
//	  P0=~duanma[2];//�͵ڶ�λ��ѡ
//	  delay(500);//��ʱ
//	  P0=0XFF;//��Ӱ
//
//	  P2=0X04;//�͵�3λλѡ	 0000 0100
//	  P0=~duanma[3];//�͵�3λ��ѡ
//	  delay(500);//��ʱ
//	  P0=0XFF;//��Ӱ
//
//	  P2=0X08;//�͵�3λλѡ	 0000 1000
//	  P0=~duanma[4];//�͵�3λ��ѡ
//	  delay(500);//��ʱ
//	  P0=0XFF;//��Ӱ
//
//	  P2=0X10;//�͵�4λλѡ	 0001 0000
//	  P0=~duanma[5];//�͵�4λ��ѡ
//	  delay(500);//��ʱ
//	  P0=0XFF;//��Ӱ
//
//	  P2=0X20;//�͵�5λλѡ	 0010 0100
//	  P0=~duanma[6];//�͵�5λ��ѡ
//	  delay(500);//��ʱ
//	  P0=0XFF;//��Ӱ
//
//	  P2=0X40;//�͵�6λλѡ	 0100 1000
//	  P0=~duanma[7];//�͵�6λ��ѡ
//	  delay(500);//��ʱ
//	  P0=0XFF;//��Ӱ
//
//	  P2=0X80;//�͵�4λλѡ	 1000 0000
//	  P0=~duanma[8];//�͵�4λ��ѡ
//	  delay(500);//��ʱ
//	  P0=0XFF;//��Ӱ
//	}
//}

//#include<reg51.h>
//unsigned int duanma[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
//		0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};//������ʾ0~F��ֵ
//unsigned int weima[]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
//void delay(unsigned int i)
//{
//	while(i--);
//}
//void main()
//{	
//	while(1)
//	{
//	  P2=weima[0];//�͵�һλλѡ		0000 0001
//	  P0=~duanma[1];//�͵�һλ��ѡ
//	  delay(500);//��ʱ
//	  P0=0XFF;//��Ӱ
//	  P2=weima[1];;//�͵ڶ�λλѡ	 0000 0010
//	  P0=~duanma[2];//�͵ڶ�λ��ѡ
//	  delay(500);//��ʱ
//	  P0=0XFF;//��Ӱ
//
//	  P2=weima[2];;//�͵�3λλѡ	 0000 0100
//	  P0=~duanma[3];//�͵�3λ��ѡ
//	  delay(500);//��ʱ
//	  P0=0XFF;//��Ӱ
//
//	  P2=weima[3];;//�͵�3λλѡ	 0000 1000
//	  P0=~duanma[4];//�͵�3λ��ѡ
//	  delay(500);//��ʱ
//	  P0=0XFF;//��Ӱ
//
//	  P2=weima[4];;//�͵�4λλѡ	 0001 0000
//	  P0=~duanma[5];//�͵�4λ��ѡ
//	  delay(500);//��ʱ
//	  P0=0XFF;//��Ӱ
//
//	 P2=weima[5];;//�͵�5λλѡ	 0010 0100
//	  P0=~duanma[6];//�͵�5λ��ѡ
//	  delay(500);//��ʱ
//	  P0=0XFF;//��Ӱ
//
//	  P2=weima[6];;//�͵�6λλѡ	 0100 1000
//	  P0=~duanma[7];//�͵�6λ��ѡ
//	  delay(500);//��ʱ
//	  P0=0XFF;//��Ӱ
//
//	  P2=weima[7];;//�͵�4λλѡ	 1000 0000
//	  P0=~duanma[8];//�͵�4λ��ѡ
//	  delay(500);//��ʱ
//	  P0=0XFF;//��Ӱ
//	}
//}
#include<reg51.h>
unsigned int duanma[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
		0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};//������ʾ0~F��ֵ
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
	   P2=weima[j];//�͵�һλλѡ		0000 0001
	   P0=~duanma[xianshi[j]];//�͵�һλ��ѡ
	   delay(500);//��ʱ
	   P0=0XFF;//��Ӱ
	  }
}
void main()
{	

	while(1)
	{
	  display();
	}
}