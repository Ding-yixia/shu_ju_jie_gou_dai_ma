// //第三次作业：编写程序随机输入3个数，输出其中能被3整除的数。

 #include<stdio.h>
 #include<Windows.h>
 int main()
 {
 int number;
 int times;
  
     
     for(int i=1; i<=10;i++)
     {
        int a;
        printf("输入一个数：\n");
        scanf("%d",&number);
//        getchar();
        number%3==0? printf("%d",number):printf("NO");
        system("pause");
     }
    // printf("%d",times);输出这样的数有几个
 }
//
//// 第二次作业：编写程序输入"ABCdaef"，输出“abcDEG”
//
//#include <stdio.h>
//
//#include <ctype.h>
//
//#include <string.h>
//
//void transform(char a[],char b[])
//{
//    //先大小互相转换
//    int i = 0, j = 0;
//
//    // gets(a);
//
//    while (a[i] != '\0')
//    {
//
//        if (a[i] >= 'A' && a[i] <= 'Z')
//        {
//
//            b[j++] = tolower(a[i]);
//        }
//
//        else if (a[i] >= 'a' && a[i] <= 'z')
//        {
//
//            b[j++] = toupper(a[i]);
//        }
//
//        else
//        {
//
//            b[j++] = a[i];
//        }
//
//        i++;
//    }
//
//    b[j] = '\0';
//
////    printf("%s", b);
//}
//
//char * Cutchar(char * s)
//{
//    char *s1 = s;    //s1指向字符串首地址
//    while((*s!='E')&& (*s!=0) )    //字符不为结束符或者不为？，指向下一个字符
//        s++;
//    *s=0;    //将这个字符置为结束符
//}
//
//
//int main()
//{
//
//    char a[100];
//
//    char b[100];
//    char c[100]="EG";
//
//    printf("请输入字符串");
//  scanf("%s",a);
//  transform(a,b);
//    //再裁掉三个，再接上DE字符串
//     Cutchar(b);
//      
//       
//      strcat(b,c);
//      printf("%s",b);
//}
