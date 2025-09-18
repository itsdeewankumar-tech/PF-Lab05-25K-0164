#include <stdio.h>
int main(){
	int device_type;
	int symptom_code;
printf("Diagnostic system for a tech support hotline\n");
     printf("1 for Laptop?\n");
	printf("2 for Smartphone\n");
	printf("3 for Router\n");
	scanf("%d",&device_type);
	
if(device_type==1){
	printf("Laptop");
	
    printf("\n10 for Won't turn on \n11 for Overheating \n12 for Slow performance");
    printf("\nEnter Symptom code: ");
	scanf("%d",&symptom_code);}
	if(symptom_code==10){
		printf("\nCheck power adapter and battery connections. Try a different power outlet.\n Remove battery and hold power buttonfor 30 seconds.");
	}
	else if(symptom_code==11){
		printf("\nClean fans and ensure properventilation. Check for dustaccumulation.\n Use a coolingpad. Monitor CPU usage.");
	}
	else if(symptom_code==12){
	printf("\nRun system diagnostics andcheck resource usage. Scanfor malware.\n Upgrade RAM if necessary. Defragment hard drive.");}
	
	
	
	else if(device_type==2)
	printf("\n Smartphone");
	printf("\n20 for Battery drains fast\n21 for No signal\n22 for Touchscreen unresponsive");
	scanf("%d",&symptom_code);
	if(symptom_code==20){
		printf("Run battery calibration tool and check for background apps. Reduce screen brightness. Disable unnecessary connectivity features.");
	}
	if(symptom_code==21){
		printf("Check SIM card and networks. Toggle airplane mode. Update carrier settings. Check for network outages.");
	}
		if(symptom_code==22){
		printf("Perform screen calibration test. Clean screen surface. Restart device. Check for software updates.");
	}
	
	
	else if(device_type==3){
	
	printf("\n Router");
	scanf("%d",&device_type);
	printf("\n30 for No internet connection\n31 for Wi-Fi signal weak\n32 for Device can't connect");	
		scanf("%d",&symptom_code);
}
		if(symptom_code==30) {
			printf("Check ISP status and router cables. Restart modem and router. Check WAN connection settings. Verify internet subscription.");
		}
if(symptom_code==31){
			printf("Reposition router and check antenna connections. Reduce interference from other devices. Change Wi-Fi channel. Consider range extender.");		}
if(symptom_code==32){
			printf("Check MAC filtering and DHCP settings. Verify Wi-Fi password. Restart connecting device. Check for IP conflicts.");		}

	return 0;

}
