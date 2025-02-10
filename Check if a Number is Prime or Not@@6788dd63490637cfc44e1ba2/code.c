void isprime(){
    int n,i,count=0 ;
    scanf("%d",&n);




for(int i=1;i<=n;i++){
    if(n%i==0){
        count++;
    }
}
if(count==2){
    printf("Prime\n");
}
else{
    printf("Not Prime");
}


}
int main(){
    isprime();
    return 0;


}