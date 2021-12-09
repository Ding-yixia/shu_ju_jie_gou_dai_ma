#include <stdio.h>
#include <stdlib.h>
#define max 100
int count = 0;
typedef struct tnode
{
    char data;
    struct tnode *Lchild, *Rchild;

} BT, *PBT;

PBT CreateBTree()
{
    PBT t;
    char ch;
    scanf("%c", &ch);
    getchar();
    if (ch == '0')
    {
        t = NULL;
    }

    else
    {

        t = (PBT)malloc(sizeof(BT));
        t->data = ch;
        printf("������%c������ֽ��㣺", t->data);
        t->Lchild = CreateBTree();
        printf("������%c�����Һ�ֽ��㣺", t->data);
        t->Rchild = CreateBTree();
    }
    return t;
}
// �����
void showBtree(PBT T)
{
    if (T != NULL)
    {
        printf("%c", T->data);
        if (T->Lchild != NULL)
        {
            printf("(");
            showBtree(T->Lchild);
            if (T->Rchild != NULL)
            {
                printf(",");
                showBtree(T->Rchild);
            }
            printf(")");
        }

        else
        {
            if (T->Rchild != NULL)
                ;
            {
                printf("(");
                showBtree(T->Lchild);
                if (T->Lchild != NULL)
                {
                    printf(",");
                    showBtree(T->Rchild);
                }
                printf(")");
            }
        }
    }
}

// �����������������
void PreOrder(PBT TT)
{
    if (TT == NULL)
        return;

    printf("%c", TT->data);
    PreOrder(TT->Lchild); // ������������
    PreOrder(TT->Rchild); // ������������
}

// �����������������
void InOrder(PBT TT)
{
    if (TT == NULL)
        return;

    InOrder(TT->Lchild);    // ������������
    printf("%c", TT->data); // ��������TT�ĸ���㡣
    InOrder(TT->Rchild);    // ������������
}

// �������ĺ��������
void PostOrder(PBT TT)
{
    if (TT == NULL)
        return;

    PostOrder(TT->Lchild);  // ������������
    PostOrder(TT->Rchild);  // ������������
    printf("%c", TT->data); // ��������TT�ĸ���㡣
}

//��������α���
void LeveOrder(PBT TT)
{
    int f, r;
    BT *p, *q[max];
    p = TT;
    if (p != NULL)
    {
        f = 1;
        q[f] = p;
        r = 2;
        while (f != r)
        {
            /* codep */
            p = q[f];
            printf("%c", p->data);
            if (p->Lchild != NULL)
            {
                q[r] = p->Lchild;
                r = (r + 1) % max;
            }
            if (p->Rchild != NULL)
            {
                q[r] = p->Lchild;
                r = (r + 1) % max;
            }

            f = (f + 1) % max;
        }
    }
}
void MenuTree()
{

    printf("\n");
    printf("\n\t\t          ������ϵͳ                  *");
    printf("\n\t\t************************************");
    printf("\n\t\t*   1------����һ���¶�����       *");
    printf("\n\t\t*   2------������ʾ����ʾ       *");
    printf("\n\t\t*   3------�������               *");
    printf("\n\t\t*   4------�������               *");
    printf("\n\t\t*   5------�������               *");
    printf("\n\t\t*   6------��α���               *");
    // printf("\n\t\t*   7------�Ƚϴ���С      *");
    // printf("\n\t\t*   8------��ʾ�ַ���      *");
    // printf("\n\t\t*   9------��ʾ�ַ���      *");
    printf("\n\t\t*   0------��      ��              *");
    printf("\n\t\t************************************");
    printf("\n\t\t��ѡ��˵���(0-6)��                *");
}

int main()
{
    BT *T = NULL;
    char ch1, ch2, a;
    ch1 = 'y';
    while (ch1 == 'y' || ch1 == 'Y')
        
    {
        MenuTree();
        scanf("%c", &ch2);
        getchar();
        switch (ch2)
        {

        case '1':
            printf("����������������:\n");
            printf("�������س�,����'0'��ʾ��̽ڵ�Ϊ��:\n ");

            printf("��������:");
            T = CreateBTree();
            printf("�������ɹ�����");
            break;
        case '2':
            printf("�����������ʾ������: ");
            showBtree(T);
            break;

        case '3':
        
            printf("�����������������Ϊ:");
            PreOrder(T);
            break;
        

        case '4':
        
            printf("�����������������Ϊ:");
            InOrder(T);
            break;
        
        case '5':
        
            printf("�����������������Ϊ:");
            PostOrder(T);
            break;
        

        case '6':
        
            printf("��������α�������Ϊ:");
            LeveOrder(T);
            break;
        
        case '0':
        
            ch1 = 'n';
            break;
        
        default:
            printf("��������,������ 0_9 ����ѡ��:");
    }

        if (ch2 != '0')
        {
            printf("\n���س�������,��������������˵�::\n");
            a = getchar();
            if (a != '\xA')
            {
                getchar();
                ch1 = 'n';
            }
        }
    }
    return 0; 
}
