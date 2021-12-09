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
        printf("请输入%c结点的左孩纸结点：", t->data);
        t->Lchild = CreateBTree();
        printf("请输入%c结点的右孩纸结点：", t->data);
        t->Rchild = CreateBTree();
    }
    return t;
}
// 广义表
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

// 二叉树的先序遍历。
void PreOrder(PBT TT)
{
    if (TT == NULL)
        return;

    printf("%c", TT->data);
    PreOrder(TT->Lchild); // 遍历左子树。
    PreOrder(TT->Rchild); // 遍历右子树。
}

// 二叉树的中序遍历。
void InOrder(PBT TT)
{
    if (TT == NULL)
        return;

    InOrder(TT->Lchild);    // 遍历左子树。
    printf("%c", TT->data); // 访问子树TT的根结点。
    InOrder(TT->Rchild);    // 遍历右子树。
}

// 二叉树的后序遍历。
void PostOrder(PBT TT)
{
    if (TT == NULL)
        return;

    PostOrder(TT->Lchild);  // 遍历左子树。
    PostOrder(TT->Rchild);  // 遍历右子树。
    printf("%c", TT->data); // 访问子树TT的根结点。
}

//二叉树层次遍历
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
    printf("\n\t\t          二叉树系统                  *");
    printf("\n\t\t************************************");
    printf("\n\t\t*   1------建立一个新二叉树       *");
    printf("\n\t\t*   2------广义表表示法显示       *");
    printf("\n\t\t*   3------先序遍历               *");
    printf("\n\t\t*   4------中序遍历               *");
    printf("\n\t\t*   5------后序遍历               *");
    printf("\n\t\t*   6------层次遍历               *");
    // printf("\n\t\t*   7------比较串大小      *");
    // printf("\n\t\t*   8------显示字符串      *");
    // printf("\n\t\t*   9------显示字符串      *");
    printf("\n\t\t*   0------返      回              *");
    printf("\n\t\t************************************");
    printf("\n\t\t请选择菜单号(0-6)：                *");
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
            printf("先序输入二叉树结点:\n");
            printf("输入结点后回车,输入'0'表示后继节点为空:\n ");

            printf("输入根结点:");
            T = CreateBTree();
            printf("二叉树成功建立");
            break;
        case '2':
            printf("二叉树广义表示法如下: ");
            showBtree(T);
            break;

        case '3':
        
            printf("二叉树先序遍历序列为:");
            PreOrder(T);
            break;
        

        case '4':
        
            printf("二叉树中序遍历序列为:");
            InOrder(T);
            break;
        
        case '5':
        
            printf("二叉树后序遍历序列为:");
            PostOrder(T);
            break;
        

        case '6':
        
            printf("二叉树层次遍历序列为:");
            LeveOrder(T);
            break;
        
        case '0':
        
            ch1 = 'n';
            break;
        
        default:
            printf("输入有误,请输入 0_9 进行选择:");
    }

        if (ch2 != '0')
        {
            printf("\n按回车健继续,按任意键返回主菜单::\n");
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
