// //��������ҵ����д�����������3��������������ܱ�3����������

 #include<stdio.h>
 #include<Windows.h>
 int main()
 {
 int number;
 int times;
  
     
     for(int i=1; i<=10;i++)
     {
        int a;
        printf("����һ������\n");
        scanf("%d",&number);
//        getchar();
        number%3==0? printf("%d",number):printf("NO");
        system("pause");
     }
    // printf("%d",times);������������м���
 }
//
//// �ڶ�����ҵ����д��������"ABCdaef"�������abcDEG��
//
//#include <stdio.h>
//
//#include <ctype.h>
//
//#include <string.h>
//
//void transform(char a[],char b[])
//{
//    //�ȴ�С����ת��
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
//    char *s1 = s;    //s1ָ���ַ����׵�ַ
//    while((*s!='E')&& (*s!=0) )    //�ַ���Ϊ���������߲�Ϊ����ָ����һ���ַ�
//        s++;
//    *s=0;    //������ַ���Ϊ������
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
//    printf("�������ַ���");
//  scanf("%s",a);
//  transform(a,b);
//    //�ٲõ��������ٽ���DE�ַ���
//     Cutchar(b);
//      
//       
//      strcat(b,c);
//      printf("%s",b);
//}
