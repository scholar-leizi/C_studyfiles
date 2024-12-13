/*
C璇█鏄竴绉嶁�滅粨鏋勫寲鈥濈殑绋嬪簭璁捐璇█锛�
	椤哄簭缁撴瀯
    閫夋嫨缁撴瀯
    寰幆缁撴瀯
*/
#include <stdio.h>
int main()
{
    int today = 2024;
    int birthday = 0;
    int same = 0;//鍒濆鍖栨鏁�
    while (same <= 3)//寰幆璇彞
    {
        if (same == 3)//鍒ゆ柇璇彞锛岄檮鍔犲垽鏂潯浠�
        {
            printf("您的次数已用完，请明天再试！\n");
        }
        else
        {
<<<<<<< HEAD
            printf("璇疯緭鍏ユ偍鐨勫嚭鐢熷勾浠斤細");
            scanf("%d",&birthday);//杈撳叆鏁板�煎苟瀛樺偍
=======
            printf("请输入您的出生年份：");
            scanf("%d",&birthday);
>>>>>>> branch 'master' of https://gitee.com/lll20031230/C_studyfiles
            if (birthday <= 0)
            {
                printf("请您输入正确年份！\n");
            }
            else
            {
                if (today - birthday >= 18)
                {
                    printf("您已成年，请尽情享受游戏时光！\n");
                }
                else
                {
                    printf("您未成年，将限制您的游戏时间！\n");
                }
                same+=3;
            }
        }
        same++;//smae = same+1;鈥斺��>澧炲姞娆℃暟
    }
    return 0;
}