#include<stdio.h>
#include<math.h>

	int main(){
		float h,w,BMI,s;
		printf("Enter your height(cm) : ");
		scanf("%f",&h);
		printf("Enter your weight(kg) : ");
		scanf("%f",&w);
		
		while(h>0&&w>0){
			BMI=w/(h*h)*10000;
			s=(BMI-24)*h*h/100002;
			printf("Your BMI is %.2f\n",BMI);
			if(BMI<18.5){
				s=18.5-BMI;
				printf("體重過輕\n建議增重%.2f公斤\n",s);
			}
			else if(BMI<24)
				printf("正常\n");
			else if(BMI<27)
				printf("過重\n建議減重%.2f公斤\n",s);
			else if(BMI<30)
				printf("輕度肥胖\n建議減重%.2f公斤\n",s);
			else if(BMI<35)
				printf("中度肥胖\n建議減重%.2f公斤\n",s);
			else
				printf("重度肥胖\n建議減重%.2f公斤\n",s);
			
			printf("\nEnter your height(cm) : ");
			scanf("%f",&h);
			printf("Enter your weight(kg) : ");
			scanf("%f",&w);
		}
	}
