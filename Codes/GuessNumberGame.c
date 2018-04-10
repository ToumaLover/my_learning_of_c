#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess,magic;
    char y,again;
    printf("There is a number between 1 and 100, and you should guess it.\n");
    srand((int)time((time_t*)NULL));//以时间设定随机数种子
    while(1)//第一层死循环，为了多次游戏
    {
        //游戏部分
        magic = 1+(int)(100.0*rand()/(RAND_MAX+1.0));//产生随机数
        char count=0;//计数变量，用于输出次数及每10次询问是否继续
        while(1)//第二层死循环，为了一局游戏多次猜数
        {
            printf("Please guess:   ");
            scanf("%d",&guess);
            getchar();//清空输入缓冲区
            count ++;
            if(guess > magic)
            {
                printf("Wrong!Too big!\n");
            }
            else
            {
                if(guess < magic)
                {
                    printf("Wrong!Too little!\n");
                }
                else
                {
                    printf("Write!\n");
                    //goto Here;//跳出双层循环
                    printf("You have player %d times.",count);
                    break;
                }
            }
            if(count%10 == 0)
            {
                printf("Do you want to continue?(Y/y or other)\n");
                scanf("%1s",&y);
                getchar();
                if((y == 0x59)||(y == 0x79));//0x59与0x79分别为Y与y的ASCII码
                else
                {
                    break;//跳出本次游戏
                }
            }
        }
        //Here://也就是跳到这里
        printf("Good luck!\n");
        printf("would you like to start a new game?(Y/y or other)\n");
        scanf("%1s",&again);
        getchar();
        if(again == 0x59||again == 0x79);//0x59与0x79分别为Y与y的ASCII码
        else
        {
            break;//不玩了
        }
    }
    printf("Goodbye!\n");
    return 0;
}
