//���C���G��N�ӤH�򦨤@��A���Ӷ��ǳ����A�Z����3���H�h�X�C���H�h�X�A
//�Y�q�h�X�̪��U�@�춶�����s�s���C�аݳ̫�d�U�Ӫ��H�O��Ӫ��ĴX��?

#include<iostream>
using namespace std;
int main (){
    int man_amount=0, i=0, j=0, count=0;//j�O1���Ӽ� //i�O��m 
    cout<<"�`�H��: \n";
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
    
    cout<<"�쥻����"<<i<<"�����Ʀs�� \n";
    for(j=0; j<man_amount; j++){
        if(num[j] == 0)
        	cout<<j+1<<"  ";
    }
                             
    system ("pause");
    return 0;
} 
