#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess,magic;
    char y,again;
    printf("There is a number between 1 and 100, and you should guess it.\n");
    srand((int)time((time_t*)NULL));//��ʱ���趨���������
    while(1)//��һ����ѭ����Ϊ�˶����Ϸ
    {
        //��Ϸ����
        magic = 1+(int)(100.0*rand()/(RAND_MAX+1.0));//���������
        char count=0;//�����������������������ÿ10��ѯ���Ƿ����
        while(1)//�ڶ�����ѭ����Ϊ��һ����Ϸ��β���
        {
            printf("Please guess:   ");
            scanf("%d",&guess);
            getchar();//������뻺����
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
                    //goto Here;//����˫��ѭ��
                    printf("You have player %d times.",count);
                    break;
                }
            }
            if(count%10 == 0)
            {
                printf("Do you want to continue?(Y/y or other)\n");
                scanf("%1s",&y);
                getchar();
                if((y == 0x59)||(y == 0x79));//0x59��0x79�ֱ�ΪY��y��ASCII��
                else
                {
                    break;//����������Ϸ
                }
            }
        }
        //Here://Ҳ������������
        printf("Good luck!\n");
        printf("would you like to start a new game?(Y/y or other)\n");
        scanf("%1s",&again);
        getchar();
        if(again == 0x59||again == 0x79);//0x59��0x79�ֱ�ΪY��y��ASCII��
        else
        {
            break;//������
        }
    }
    printf("Goodbye!\n");
    return 0;
}
