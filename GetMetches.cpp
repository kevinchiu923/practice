//������C���G
//�@������A12�ڤ���ΡA�C���}�l�A�ѨϥΪ̥����A�ϥΪ̥i���N����1~3�ڡA
//�q���@�ˤ]���N����1~3�ڡA����̫�@�ڬ���a�C

#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main (){
    char ans;     
	do{   
    	int user_pick=0,now_amount=12,AI_pick=0;  
    	srand(time(NULL));
    	cout<<"�{��[12]�ڤ��� \n";  
    	do{                          
    		do{                           
    			cout<<"�A�n�����X��?(range:1~3�C���ŦX�N�۰ʭn�D���s��J) \n";
    			cin>>user_pick;
    		}while(user_pick > 3 || user_pick < 1);
    
            now_amount -= user_pick;
    		if(now_amount < 0)  
    			now_amount = 0;   
    		cout<<"�{�b�ѤU["<<now_amount<<"]�ڤ��� \n";
    
    		if(now_amount == 0){
            	cout<<"�A��F!! \n";//�A�o��è����̫�@�ڦӿ� 
                break;                    
    		}
    
    		if(now_amount == 1){//�A�A�߾�����Ѥ@�ڹq���D�o�� 
            	cout<<"�q����F!! \n";
                break;
    		} 
    
   			cout<<endl;
    
    		if(now_amount > 4)
    			AI_pick=(rand() % 3 + 1);
    		else
    			AI_pick = now_amount - 1;
    
    		cout<<"�q������["<<AI_pick<<"]�ڤ��� \n"; 
    
    		now_amount -= AI_pick;
    
    		cout<<"�{�ѤU["<<now_amount<<"]�ڤ��� \n";
    
    		if(now_amount == 1)//�q������ѤU�@�ڧA�N�{�R�a��������!!! 
    			cout<<"�A��F!! \n";
    	}while(now_amount > 1);
    
    	cout<<"Play again?(Y/N) \n";
   		cin>>ans;
    
	}while(ans == 'y' || ans == 'Y');
   
    
	system ("pause");
	return 0;
}     
