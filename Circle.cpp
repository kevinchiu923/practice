//圍圈遊戲：有N個人圍成一圈，按照順序報號，凡報到3的人退出。當有人退出，
//即從退出者的下一位順號重新編號。請問最後留下來的人是原來的第幾號?

#include<iostream>
using namespace std;
int main (){
    int man_amount=0, i=0, j=0, count=0;//j是1的個數 //i是位置 
    cout<<"總人數: \n";
    cin>>man_amount;
    
    int num[man_amount];
    for(j=0; j<man_amount; j++){
        num[j] = 0;
    }
    j=0;
    
    while(man_amount-j > 2){
    	if(num[i] == 0){
            count++;
                         
        	if(count%3 == 0){ 
        		num[i] = 1;
            	j += 1;
        	}
        }
        i++;
        
		if(i == man_amount)
        	i = 0;
    }
    
    cout<<"原本的第"<<i<<"號為倖存者 \n";
    for(j=0; j<man_amount; j++){
        if(num[j] == 0)
        	cout<<j+1<<"  ";
    }
                             
    system ("pause");
    return 0;
} 
