#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
class cube
{
private:
    char edge[25],corner[25],temp1,temp2,temp3;
public:
cube()
{
    strcpy(edge,"ufurubuldfdrdbdlfrflbrbl");
    strcpy(corner,"ufrurbublulfdrfdfldlbdbr");
}
cube(char *n,char *m)
{
    strcpy(edge,n);
    strcpy(corner,m);
}
void printconfig()
{
    int i;
    cout<<endl;
    for(i=0;i<24;i++)
    {
        printf("%c",edge[i]);
        if(i%2!=0)
            printf(" ");
    }
    for(i=0;i<24;i++)
    {
        printf("%c",corner[i]);
        if(i%3==2)
        printf(" ");
    }
}
void m(){
    temp1=edge[16];
    temp2=edge[17];
    edge[16]=edge[21];
    edge[17]=edge[20];
    edge[20]=edge[23];
    edge[21]=edge[22];
    edge[22]=edge[19];
    edge[23]=edge[18];
    edge[18]=edge[17];
    edge[19]=edge[16];
}
void l(){
    temp1=edge[6];
    temp2=edge[7];
    edge[6]=edge[22];
    edge[7]=edge[23];
    edge[22]=edge[14];
    edge[23]=edge[15];
    edge[14]=edge[18];
    edge[15]=edge[19];
    edge[18]=temp1;
    edge[19]=temp2;
    temp1=corner[9];
    temp2=corner[10];
    temp3=corner[11];
    corner[9]=corner[7];
    corner[10]=corner[8];
    corner[11]=corner[6];
    corner[6]=corner[20];
    corner[7]=corner[18];
    corner[8]=corner[19];
    corner[18]=corner[16];
    corner[19]=corner[17];
    corner[20]=corner[15];
    corner[15]=temp3;
    corner[16]=temp1;
    corner[17]=temp2;
    cout<<"L ";
}
void r(){
    temp1=edge[2];
    temp2=edge[3];
    edge[2]=edge[16];
    edge[3]=edge[17];
    edge[16]=edge[10];
    edge[17]=edge[11];
    edge[10]=edge[20];
    edge[11]=edge[21];
    edge[20]=temp1;
    edge[21]=temp2;
    temp1=corner[0];
    temp2=corner[1];
    temp3=corner[2];
    corner[0]=corner[14];
    corner[1]=corner[12];
    corner[2]=corner[13];
    corner[12]=corner[22];
    corner[13]=corner[23];
    corner[14]=corner[21];
    corner[21]=corner[5];
    corner[22]=corner[3];
    corner[23]=corner[4];
    corner[3]=temp2;
    corner[4]=temp3;
    corner[5]=temp1;
        cout<<"R ";

}
void f(){
    temp1=edge[0];
    temp2=edge[1];
    edge[0]=edge[18];
    edge[1]=edge[19];
    edge[18]=edge[8];
    edge[19]=edge[9];
    edge[8]=edge[16];
    edge[9]=edge[17];
    edge[16]=temp1;
    edge[17]=temp2;
    temp1=corner[0];
    temp2=corner[1];
    temp3=corner[2];
    corner[0]=corner[10];
    corner[1]=corner[11];
    corner[2]=corner[9];
    corner[9]=corner[17];
    corner[10]=corner[15];
    corner[11]=corner[16];
    corner[15]=corner[13];
    corner[16]=corner[14];
    corner[17]=corner[12];
    corner[12]=temp3;
    corner[13]=temp1;
    corner[14]=temp2;
        cout<<"F ";
}
void b(){
    temp1=edge[4];
    temp2=edge[5];
    edge[4]=edge[20];
    edge[5]=edge[21];
    edge[20]=edge[12];
    edge[21]=edge[13];
    edge[12]=edge[22];
    edge[13]=edge[23];
    edge[22]=edge[4];
    edge[23]=edge[5];
    temp1=corner[3];
    temp2=corner[4];
    temp3=corner[5];
    corner[3]=corner[23];
    corner[4]=corner[21];
    corner[5]=corner[22];
    corner[21]=corner[19];
    corner[22]=corner[20];
    corner[23]=corner[18];
    corner[18]=corner[8];
    corner[19]=corner[6];
    corner[20]=corner[7];
    corner[6]=temp2;
    corner[7]=temp3;
    corner[8]=temp1;
        cout<<"B ";

}
void u(){
        cout<<"U ";

    temp1=edge[0];
    temp2=edge[1];
    edge[0]=edge[2];
    edge[1]=edge[3];
    edge[2]=edge[4];
    edge[3]=edge[5];
    edge[4]=edge[6];
    edge[5]=edge[7];
    edge[6]=temp1;
    edge[7]=temp2;
    temp1=corner[9];
    temp2=corner[10];
    temp3=corner[11];
    corner[9]=corner[0];
    corner[10]=corner[1];
    corner[11]=corner[2];
    corner[0]=corner[3];
    corner[1]=corner[4];
    corner[2]=corner[5];
    corner[3]=corner[6];
    corner[4]=corner[7];
    corner[5]=corner[8];
    corner[6]=temp1;
    corner[7]=temp2;
    corner[8]=temp3;
}
void d(){
        cout<<"D ";

    temp1=edge[8];
    temp2=edge[9];
    edge[8]=edge[14];
    edge[9]=edge[15];
    edge[14]=edge[12];
    edge[15]=edge[13];
    edge[12]=edge[10];
    edge[13]=edge[11];
    edge[10]=temp1;
    edge[11]=temp2;
    temp1=corner[12];
    temp2=corner[13];
    temp3=corner[14];
    corner[12]=corner[15];
    corner[13]=corner[16];
    corner[14]=corner[17];
    corner[15]=corner[18];
    corner[16]=corner[19];
    corner[17]=corner[20];
    corner[18]=corner[21];
    corner[19]=corner[22];
    corner[20]=corner[23];
    corner[21]=temp1;
    corner[22]=temp2;
    corner[23]=temp3;
}
void li(){
        cout<<"Li ";

    l();
    l();
    l();
}
void ri(){
        cout<<"Ri ";

    r();
    r();
    r();
}
void fi(){
        cout<<"Fi ";

    f();
    f();
    f();
}
void bi(){
        cout<<"Bi ";

    b();
    b();
    b();
}
void ui(){
        cout<<"Ui ";

    u();
    u();
    u();
}
void di(){
        cout<<"Di ";

    d();
    d();
    d();
}
void cu();
void cui();
void algo();
};
    cube solved;
void cube::cu(){
    u();
    d();
    m();
    solved.u();
    solved.d();
    solved.m();
    cout<<"CubeFlipUp ";
    //printconfig();
    }
void cube::cui(){
    cu();
    cu();
    cu();
    cout<<"CubeFlipUpInvert ";
}
void cube::algo()
{
    l();
}
/*void layer1(){
    int i,j;
    for(i=0;i<24;i++)
    {
        if((edge[i]=='d'&& i%2 == 0 && edge[i+1]=='b')||(edge[i]=='d'&& i%2 != 0 && edge[i-1]=='b'))
        {
            if(i/3==0)
                {
                    while(((edge[i-1]!=edgedef[i])&&(i%2!=0))&&((edge[i+1]!=edgedef[i+1])&&(i%2==0))
                        u();
                        b();b();
                }
            else if(i/3==1)
                while(edge[i+1]!=edgedef[i+1])
                    d();
            else if(i==17||i==21)
                {
                    r();
                    i=0;
                }
            else if(i==19||i==23)
            {
                l();
                i=0;
            }
        }
        else if(edge[i]=='d' && i%2!=0 && edge[i]=='b')
        {
            if
        }
    }

}*/
int main()
{
    char edge[25],corner[25],edgedef[]="ufurubuldfdrdbdlfrflbrbl",cornerdef[]="ufrurbublulfdrfdfldlbdbr";
    strcpy(edge,edgedef);
    strcpy(corner,cornerdef);
    int i;
    /*for(i=0;i<24;i++)
    {
        scanf("%c",&edge[i]);
    }
    for(i=0;i<24;i++)
    {
        scanf("%c",&corner[i]);
    }*/
    cube scram(edge,corner);
    scram.algo();
    scram.printconfig();
    /*for(i=0;i<24;i++)
    {
        printf("%c",edge[i]);
        if(i%2!=0)
            printf(" ");
    }
    for(i=0;i<24;i++)
    {
        printf("%c",corner[i]);
        if(i%3==2)
        printf(" ");
    }*/
    return 0;
}