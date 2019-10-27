aih ku rusak kodingan mu hahahahahaha 
#include <stdio.h>
#include <math.h>

void setcolor  (unsigned short color) {
	HANDLE hCon = GetStdHandle (STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute (hCon, color);
}

main () {
	int B, C, jalur;
	
	printf("Menentukan jumlah dari jalur yang dilewati\n");
	
	// Line 1
	setcolor(256); printf("hmhmhmhmhmhmhmhmhm");
	setcolor(278); printf("  ");
	setcolor(256); printf("hmhmhmhmhmhmhmhmhm\n");
	
	// Line 2
	setcolor(256); printf("hhmhmhmhmhm");
	setcolor(271); printf("B = 9");
	setcolor(278); printf("  ");
	setcolor(256); printf("hm");
	setcolor(278); printf("  ");
	setcolor(271); printf("C = 6");
	setcolor(256); printf("hm\n");
	
	// Line 3
	setcolor(256); printf("hmhmhmhmhmhmhm");
	setcolor(278); printf("  ");
	setcolor(256); printf("hmhmhm");
	setcolor(278); printf("  ");
	setcolor(256); printf("hmhmhmhmhm\n");
	
	// Line 4
	setcolor(256); printf("hmhmhmh");
	setcolor(271); printf("A = 5");
	setcolor(278); printf("  ");
	setcolor(256); printf("hmhmhmhmhm");
	setcolor(278); printf("  ");
	setcolor(271); printf("F = 3");
	setcolor(256); printf("hm\n");
	
	//Line 5
	setcolor(256); printf("hmhm");
	setcolor(278); printf("        ");
	setcolor(256); printf("hmhmhmhmhmhmhm");
	setcolor(278); printf("        \n");
	
	// Line 5
	setcolor(256); printf("hmhmhmhmhmhm");
	setcolor(278); printf("  ");
	setcolor(256); printf("hmhmhmhmhm");
	setcolor(278); printf("  ");
	setcolor(256); printf("hmhmhmhmhmhm\n");
	
	// Line 6
	setcolor(256); printf("hmhmhmhmhmhmhm");
	setcolor(278); printf("  ");
	setcolor(256); printf("hmhmhm");
	setcolor(278); printf("  ");
	setcolor(256); printf("hmhmhmhmhm\n");
	
	// Line 7
	setcolor(256); printf("hmhmhmhmhm");
	setcolor(271); printf("D = 10");
	setcolor(278); printf("  ");
	setcolor(256); printf("hm");
	setcolor(278); printf("  ");
	setcolor(271); printf("E = 12\n");
	
	// Line 8
	setcolor(256); printf("hmhmhmhmhmhmhmhmhm");
	setcolor(278); printf("  ");
	setcolor(256); printf("hmhmhmhmhmhmhmhmhm\n");
	
	setcolor(271); printf("Masukkan nilai kedua dari jalur yang akan anda lalui :");
	scanf("%d", &B);
	setcolor(271); printf("Masukkan Nilai ketiga dari jalur yang akan anda lalui :");
	scanf("%d", &C);
	
	jalur = 5 + B + C + 3;
	if (jalur = 5 + 9 + 6 + 3){
		printf("Jalur yang anda lewati adalah A-B-C-F");
	}
	else if (jalur = 5 + 10 + 12 + 3){
		printf("Jalur yang anda lewati adalah A-D-E-F");
	}
	else {
		printf("Maaf jalur Anda tidak tersedia");
	}
}
