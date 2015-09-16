#include <iostream>
#include "list.h"

address alokasi (infotype x)
{
    address p;
    p = new elmlist;
    info(p)=x;
    return p;
}

void baru (infotype *x)
{
    infotype y;
    cout<<"Input data"<<endl;
    cout<<"Nama     : ";
    cin>>y.nama;
    cout<<"ID       : ";
    cin>>y.id;
    cout<<"tglmasuk : ";
    cin>>y.tgl;
    cout<<"Jenis    : ";
    cin>>y.jenis;
    cout<<"Harga    : ";
    cin>>y.harga;
    *x=y;
}
void insertfirst (list *L, address P)
{
    if((*L).first==NULL)
    {
        (*L).first=P;
        next((*L).first)=NULL;


    }
    else
    {
        next(P)=NULL;
        next(P)=(*L).first;
        (*L).first=P;
    }
}
void insertlast(list *L,address P)
{
    address Q;
    Q=(*L).first;
    while(next(Q)!=NULL)
    {
        Q=next(Q);
    }
    next(P)=NULL;
    next(Q)=P;
}
