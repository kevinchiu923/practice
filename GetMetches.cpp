//取火柴遊戲：
//一盒火柴，12根火柴棒，遊戲開始，由使用者先取，使用者可任意取走1~3根，
//電腦一樣也任意取走1~3根，取到最後一根為輸家。

#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main (){
    char ans;     
	do{   
    	int user_pick=0,now_amount=12,AI_pick=0;  
    	srand(time(NULL));
    	cout<<"現有[12]根火柴 \n";  
    	do{                          
    		do{                           
    			cout<<"你要取走幾根?(range:1~3。不符合將自動要求重新輸入) \n";
    			cin>>user_pick;
    		}while(user_pick > 3 || user_pick < 1);
    
            now_amount -= user_pick;
    		if(now_amount < 0)  
    			now_amount = 0;   
    		cout<<"現在剩下["<<now_amount<<"]根火柴 \n";
    
    		if(now_amount == 0){
            	cout<<"你輸了!! \n";//你這白癡取到最後一根而輸 
                break;                    
    		}
    
    		if(now_amount == 1){//你耍心機取到剩一根電腦非得輸 
            	cout<<"電腦輸了!! \n";
                break;
    		} 
    
   			cout<<endl;
    
    		if(now_amount > 4)
    			AI_pick=(rand() % 3 + 1);
    		else
    			AI_pick = now_amount - 1;
    
    		cout<<"電腦取走["<<AI_pick<<"]根火柴 \n"; 
    
    		now_amount -= AI_pick;
    
    		cout<<"現剩下["<<now_amount<<"]根火柴 \n";
    
    		if(now_amount == 1)//電腦取到剩下一根你就認命吧挖哈哈哈!!! 
    			cout<<"你輸了!! \n";
    	}while(now_amount > 1);
    
    	cout<<"Play again?(Y/N) \n";
   		cin>>ans;
    
	}while(ans == 'y' || ans == 'Y');
   
    
	system ("pause");
	return 0;
}     
