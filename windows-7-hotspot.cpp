#include <stdio.h>
#include <windows.h>

int main()
{
	int ch;
	char ssid[100],key[100];
	char cmd_buffer[100];
	
	while(1)
	{
		printf("========================================\n\n");
		printf("윈도우7 용 핫스팟 설정\n\n\n");
		printf("1. 핫스팟 정보 설정\n\n");
		printf("2. 핫스팟 ON\n\n");
		printf("3. 핫스팟 OFF\n\n\n");
		printf("========================================\n");
		
		printf("선택 : ");
		scanf("%d",&ch);
		printf("\n");
		
		switch (ch){
			case 1:
				printf("핫스팟 이름 입력 : ");
				scanf("%s",&ssid);
				printf("핫스팟 비밀번호 입력 : ");
				scanf("%s",&key);
			
				printf("\n");
				sprintf(cmd_buffer, "netsh wlan set hostednetwork mode=allow ssid=%s key=%s",ssid,key);
	  			system(cmd_buffer);
				break;
			case 2:
				printf("\n");
				system("netsh wlan start hostednetwork");
				break;
			case 3:
				printf("\n");
				system("netsh wlan stop hostednetwork");
				break;
			default:
				printf("다시 시도해주세요.\n");
				break;
		}
		
		Sleep(2000);
		system("cls");
	}
	
	
	
}

