#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <string.h> 
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

struct SS {
	int Temp;
	char Name[100];
};
struct LS {
	int Temp;
	char Name[100];
};
struct MTM {
	int Temp;
	char Name[100];
};
struct Hood {
	int Temp;
	char Name[100];
};
struct KN {
	int Temp;
	char Name[100];
};
struct nMTM {
	int Temp;
	char Name[100];
};
struct nHood {
	int Temp;
	char Name[100];
};
struct Shorts {
	int Temp;
	char Name[100];
};
struct Pants {
	int Temp;
	char Name[100];
};
struct SK {
	int Temp;
	char Name[100];
};
struct SS *arr1;
struct LS *arr2;
struct MTM *arr3;
struct Hood *arr4;
struct KN *arr5;
struct nMTM *arr6;
struct nHood *arr7;
struct Shorts *arr8;
struct Pants *arr9;
struct SK *arr10;
int count1 = sizeof(arr1);
int count2 = sizeof(arr2);
int count3 = sizeof(arr3);
int count4 = sizeof(arr4);
int count5 = sizeof(arr5);
int count6 = sizeof(arr6);
int count7 = sizeof(arr7);
int count8 = sizeof(arr8);
int count9 = sizeof(arr9);
int count10 = sizeof(arr10);

void Start(int *mode) {
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t::오늘의 적당한 옷::\n\n\n\n");
	printf("\t\t\t\t\t1. 적당한 옷\n\n\n");
	printf("\t\t\t\t\t2. 옷장\n\n\n");
	printf("\t\t\t\t\t3. 종료하기\n\n\n");
	scanf("%d", mode);
}

void TemInput(int *tem) {
	system("cls");
	printf("\n\n\n\t\t\t\t   ::오늘의 기온을 입력하세요::\n\n\t\t\t\t     :");
	scanf("%d",tem);
}

int Choice() {
	int c = 0;
	c = _getch();
	return c;
}

void Result(int temperature) {
	srand(time(NULL));
	system("cls");
	printf("\n\n\n\t\t\t\t   ::%d℃에 입으면 적당한 옷은::\n\n\n\n\t\t\t\t     \n",temperature);
	if (temperature >= 20) {
		int T = (rand() % count1)+1;
		printf("\t\t\t\t%s 반팔에\n", arr1[T].Name);
		int b = (rand() % 3)+1;
		int B = 0;
		switch (b) {
		case 1:
			B = (rand() % count8)+1;
			printf("\t\t\t\t%s 반바지\n", arr8[B].Name);
			break;
		case 2:
			B = (rand() % count9)+1;
			printf("\t\t\t\t%s 바지\n", arr9[B].Name);
			break;
		case 3:
			B = (rand() % count10)+1;
			printf("\t\t\t\t%s 치마\n", arr10[B].Name);
			break;
		}
		printf("\n\t\t\t\t어때요?\n");
	}
	else if (temperature >= 10) {
		int T = 0;
		int t = (rand() % 3)+1;
		switch (t) {
		case 1:
			T = (rand() % count2)+1;
			printf("\t\t\t\t%s 긴팔에", arr2[T].Name);
			break;
		case 2:
			T = (rand() % count3)+1;
			printf("\t\t\t\t%s 맨투맨에", arr3[T].Name);
			break;
		case 3:
			T = (rand() % count4)+1;
			printf("\t\t\t\t%s 후드티에", arr4[T].Name);
			break;
		}
		int B = 0;
		int b = (rand() % 2)+1;
		switch (b) {
		case 1:
			B = (rand() % count9)+1;
			printf("\t\t\t\t%s 바지\n", arr9[B].Name);
			break;
		case 2:
			B = (rand() % count10)+1;
			printf("\t\t\t\t%s 치마\n", arr10[B].Name);
			break;
		}
		printf("\n\t\t\t\t어때요?\n");
	}
	else if (temperature < 10) {
		int T = 0;
		int t = (rand() % 3) + 1;
		switch (t) {
		case 1:
			T = (rand() % count5) + 1;
			printf("\t\t\t\t%s 니트\n", arr5[T].Name);
			break;
		case 2:
			T = (rand() % count6) + 1;
			printf("\t\t\t\t%s 기모 맨투맨\n", arr6[T].Name);
			break;
		case 3:
			T = (rand() % count7) + 1;
			printf("\t\t\t\t%s 기모 후드티\n", arr7[T].Name);
			break;
		}
		int B = 0;
		int b = (rand() % 2) + 1;
		switch (b) {
		case 1:
			B = (rand() % count9) + 1;
			printf("\t\t\t\t%s 바지\n", arr9[B].Name);
			break;
		case 2:
			B = (rand() % count10) + 1;
			printf("\t\t\t\t%s 치마\n", arr10[B].Name);
			break;
		}
		printf("\n\t\\t\tt어때요?\n");
	}
	printf("\nESC를 눌러 시작 화면으로 돌아가기");
}

void CloM(int *clm) {
	system("cls");
	printf("\n\t\t1. 옷 둘러보기\n\n\t\t2. 옷 추가하기\n\n\n\n");
	scanf("%d", clm);
}

void CloShow(int *k) {
	system("cls");
	printf("\n\n\n\t\t\t\t   ::내 옷장::\n\n\n\n");
	printf("  1. 반팔  2. 긴팔  3. 맨투맨  4. 후드티  5. 니트  6. 기모 맨투맨  7. 기모 후드티  8. 반바지 \n  9. 바지 10. 치마 \n\n");
	printf(" 둘러보고 싶은 옷 종류를 입력하세요\n");
	scanf("%d", k);
}

int RCloShow(int k) {
	int key;
	switch (k) {
	case 1:
		for (int i = 0; i < count1; i++) {
			printf("%s ", arr1[i].Name);
		}break;
	case 2:
		for (int i = 0; i < count2; i++) {
			printf("%s ", arr2[i].Name);
		}break;
	case 3:
		for (int i = 0; i < count3; i++) {
			printf("%s ", arr3[i].Name);
		}break;
	case 4:
		for (int i = 0; i < count4; i++) {
			printf("%s ", arr4[i].Name);
		}break;
	case 5:
		for (int i = 0; i < count5; i++) {
			printf("%s ", arr5[i].Name);
		}break;
	case 6:
		for (int i = 0; i < count6; i++) {
			printf("%s ", arr6[i].Name);
		}break;
	case 7:
		for (int i = 0; i < count7; i++) {
			printf("%s ", arr7[i].Name);
		}break;
	case 8:
		for (int i = 0; i < count8; i++) {
			printf("%s ", arr8[i].Name);
		}break;
	case 9:
		for (int i = 0; i < count9; i++) {
			printf("%s ", arr9[i].Name);
		}break;
	case 10:
		for (int i = 0; i < count10; i++) {
			printf("%s ", arr10[i].Name);
		}break;
	}
	printf("\n\nESC를 눌러 시작 화면으로 나가기");
	return key = _getch();
}

void Add(int *k, int *num) {
	system("cls");
	printf("\n\n\n\t\t\t\t         ::옷 추가하기::\n\n");
	printf("  1. 반팔  2. 긴팔  3. 맨투맨  4. 후드티  5. 니트  6. 기모 맨투맨  7. 기모 후드티  8. 반바지 \n  9. 바지 10. 치마\n\n");
	printf("추가할 옷의 종류를 입력하세요\n");
	scanf("%d", k);
	printf("몇 벌을 추가하시겠습니까?\n");
	scanf("%d", num);
}

int RAdd(int k, int num) {
	int key;
	switch (k) {
		case 1:
			arr1 = (struct SS *)malloc(sizeof(struct SS)*num);
			for (int i = 0; i < num; i++) {
				arr1[i].Temp = 25;
				printf("반팔의 이름을 입력하세요\n");
				scanf("%s", arr1[i].Name);
			}
			break;
		case 2:
			arr2 = (struct LS *)malloc(sizeof(struct LS)*num);
			for (int i = 0; i < num; i++) {
				arr2[i].Temp = 20;
				printf("긴팔의 이름을 입력하세요\n");
				scanf("%s", arr2[i].Name);
			}
			break;
		case 3:
			arr3 = (struct MTM *)malloc(sizeof(struct MTM)*num);
			for (int i = 0; i < num; i++) {
				arr3[i].Temp = 15;
				printf("맨투맨의 이름을 입력하세요\n");
				scanf("%s", arr3[i].Name);
			}
			break;
		case 4:
			arr4 = (struct Hood *)malloc(sizeof(struct Hood)*num);
			for (int i = 0; i < num; i++) {
				arr4[i].Temp = 15;
				printf("후드티의 이름을 입력하세요\n");
				scanf("%s", arr4[i].Name);
			}
			break;
		case 5:
			arr5 = (struct KN *)malloc(sizeof(struct KN)*num);
			for (int i = 0; i < num; i++) {
				arr5[i].Temp = 10;
				printf("니트의 이름을 입력하세요\n");
				scanf("%s", arr5[i].Name);
			}
			break;
		case 6:
			arr6 = (struct nMTM *)malloc(sizeof(struct nMTM)*num);
			for (int i = 0; i < num; i++) {
				arr6[i].Temp = 5;
				printf("기모 맨투맨의 이름을 입력하세요\n");
				scanf("%s", arr3[i].Name);
			}
			break;
		case 7:
			arr7 = (struct nHood *)malloc(sizeof(struct nHood)*num);
			for (int i = 0; i < num; i++) {
				arr7[i].Temp = 5;
				printf("기모 후드티의 이름을 입력하세요\n");
				scanf("%s", arr7[i].Name);
			}
			break;
		case 8:
			arr8 = (struct Shorts *)malloc(sizeof(struct Shorts)*num);
			for (int i = 0; i < num; i++) {
				arr8[i].Temp = 32;
				printf("반바지의 이름을 입력하세요\n");
				scanf("%s", arr8[i].Name);
			}
			break;
		case 9:
			arr9 = (struct Pants*)malloc(sizeof(struct Pants)*num);
			for (int i = 0; i < num; i++) {
				arr9[i].Temp = 15;
				printf("바지의 이름을 입력하세요\n");
				scanf("%s", arr9[i].Name);
			}
			break;
		case 10:
			arr10 = (struct SK *)malloc(sizeof(struct SK)*num);
			for (int i = 0; i < num; i++) {
				arr10[i].Temp = 15;
				printf("치마의 이름을 입력하세요\n");
				scanf("%s", arr10[i].Name);
			}break;
	}
	printf("\nESC를 눌러 시작 화면으로 나가기");
	return key = _getch();
}

void End() {
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n                                   ::오늘의 적당한 옷을 종료합니다::           \n\n\n\n\n\n\n\n\n\n");
}

int main() {
	system("mode con cols=100 lines=50");
	int Mode, Tem, Clm,C,K,Num,Kind;


	while (1) {
	Home:
		Start(&Mode);
		if (Mode == 1) {
			TemInput(&Tem);
			while (1) {
				C = 0;
				Result(Tem);
				if (Choice() == 0x1B)
					goto Home;
			}
		}
		else if (Mode == 2) {
			CloM(&Clm);
			if (Clm == 1) {
				CloShow(&Kind);
				if (RCloShow(Kind) == 0x1B)
					goto Home;
			}
			else if (Clm == 2) {
				Add(&K,&Num);
				if (RAdd(K, Num) == 0x1B)
					goto Home;
			}
		}
		else if (Mode == 3) {
			End();
			free(arr1);
			free(arr2);
			free(arr3);
			free(arr4);
			free(arr5);
			free(arr6);
			free(arr7);
			free(arr8);
			free(arr9);
			free(arr10);
		}
		break;
	}
}