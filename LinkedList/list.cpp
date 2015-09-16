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
