#include<reg51.h>
sbit k1=P1^0;	 //秒+  键断开 P1^0=1<>k1=1	;  键闭合 P1^0=0<>k1=0	;
sbit k2=P1^1;
sbit k3=P1^2;	 //分+	键断开 P1^1=1<>k2=1	;  键闭合 P1^1=0<>k2=0	;
sbit beep=P1^4;

unsigned int duanma[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
		0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71,0x40};//共阴显示0~F,-的值
unsigned int xianshi[]={1,2,16,3,0,16,2,9};
unsigned int weima[]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
int shi=23,fen=59,miao=58;
int count=0;
void delay(unsigned int i)
{
	while(i--);
}
void fenli()
{
  xianshi[0]=shi/10;//12/10	=1
  xianshi[1]=shi%10;//12%10 =2
  xianshi[2]=16;
  xianshi[3]=fen/10;//12/10	=1
  xianshi[4]=fen%10;//12%10 =2
  xianshi[5]=16;
  xianshi[6]=miao/10;//12/10	=1
  xianshi[7]=miao%10;//12%10 =2
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
void dis_delay(unsigned int i)
{
unsigned int j;
for(j=0;j<i;j++)
{
display();
}
}

void T1_inti()	//定时器中断初始化
{
  TMOD=0x01;//工作方式
  TH0=(65536-20000)/256;//设定初值,进入一次中断50ms
  TL0=(65536-20000)%256;
  TR0=1;//启动
  EA=1;//开总中断
  ET0=1;//开定时器中断
  EX0=1; //打开外部中断 0
  IT0=1;//下降沿触发

}
void key()
{
  if(k1==0)
  {
  	dis_delay(2);//延时消抖
	if(k1==0)
	{
	  miao++;
	  if(miao>59)
	  {
	   fen++;
	   miao=0;
	   if(fen>59)
	   {
	   	 shi++;
		 fen=0;
		 if(shi>23)
		 {
		  shi=0;
		 }
	   }
	  }
	}
  
  }
}

void de()
{
    if(k2==0)
      {
         dis_delay(2);
         if(k2==0)
          {
            fen++;
            if(fen>59)
              {
                fen=0;
                shi++;
                if(shi>23)
                {
                  shi=0;
                }
              }
          }
      }
}

void de1()
{
  if(k3==0)
   {
     dis_delay(2);
     if(k3==0)
      {
        shi--;
        if(shi<=0)
          {
            shi=23;
          }
      }
   }
}

void main()
{	
	T1_inti();
	while(1)
	{
	  key();
	  de();
	  de1();
	  fenli();
	  display();
	}
}


void T1_int()  interrupt 1		 //中断服务子程序
{
  TH0=(65536-20000)/256;//设定初值,进入一次中断50ms
  TL0=(65536-20000)%256;
  count++;
  if(count==25)		 //判断1s是否到 20*50=1000
  {
  	 count=0;
	 miao++;
	 if(miao>59)
	 {
	 	fen++;
		miao=0;
		if(fen>59)
		{
			shi++;
			fen=0;
			if(shi>23)
			{
				shi=0;
			}
		
		}
	 
	 
	 }
  }
}

void INT0_0()  interrupt 0		 //中断服务子程序
{
  TR0=~TR0;
}
