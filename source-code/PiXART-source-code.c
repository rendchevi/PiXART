#include<stdio.h>
#include<stdlib.h>

// Created by: Rendi Chevi & Refanka Nabil

//Declare global variable
int row, col;
char canvas[35][35] = {
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
					{' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
				   	};	

	char erase = ' '; 	

	int key, row = 0, col = 0, block = 254,state = 0;
	
	void main_menu(), help_main_menu(), paint_mode(), canvasBoard();

int main(){
	
	main_menu();
	
	return 0;
}

void main_menu()
{


while(1){
	
printf("\n\t\t\t\t\t =============================================================================================");
printf("\n\n");
printf("\t\t\t\t\t   ||     |||||||||||  ||||||||  ||||      ||||     |||||     |||||||||    |||||||||||    ||\n");
printf("\t\t\t\t\t   ||     |||     |||    |||       |||    |||      ||| |||     |||    ||       |||        ||\n");
printf("\t\t\t\t\t   ||     |||     |||    |||        |||  |||      |||   |||    |||     ||      |||        ||\n");
printf("\t\t\t\t\t   ||     |||     |||    |||         ||||||       |||   |||    |||    ||       |||        ||\n");
printf("\t\t\t\t\t   ||     |||||||||||    |||          ||||       |||||||||||   ||||||||        |||        ||\n");
printf("\t\t\t\t\t   ||     |||            |||         ||||||      |||     |||   |||   ||||      |||        ||\n");
printf("\t\t\t\t\t   ||     |||            |||        |||  |||     |||     |||   |||    |||      |||        ||\n");
printf("\t\t\t\t\t   ||     |||            |||       |||    |||    |||     |||   |||    |||      |||        ||\n");
printf("\t\t\t\t\t   ||     |||          |||||||   ||||      ||||  |||     |||   |||    |||      |||        ||\n");
printf("\n");
printf("\t\t\t\t\t =============================================================================================");
printf("\n\t\t\t\t\t    			      Created by: Rendi Chevi ; Refanka Nabil");
printf("\n\n\n");
printf("\n\n");

printf("\t\t\t\t\t\t            [Use ARROW UP and ARROW DOWN key to navigate the main menu]");
printf("\n\n\n");

printf("\t\t\t\t\t\t\t              ||||||| ||||||   |||   |||||  ||||||\n");
printf("\t\t\t\t\t\t\t              ||        ||    || ||  ||  ||   ||\n");
printf("\t\t\t\t\t\t\t   "); if (state == 0) printf(">>>>>"); else printf("     "); 
					  printf("      |||||||   ||    |||||  |||||    ||\n");
printf("\t\t\t\t\t\t\t                   ||   ||   ||   || ||  ||   ||\n");	
printf("\t\t\t\t\t\t\t              |||||||   ||   ||   || ||  ||   ||\n");
printf("\n\n\n");

printf("\t\t\t\t\t\t\t              ||    ||    |||||||   ||       ||||||||\n");	
printf("\t\t\t\t\t\t\t              ||    ||   ||         ||       ||    ||\n");
printf("\t\t\t\t\t\t\t   "); if (state == 1) printf(">>>>>"); else printf("     "); 
					  printf("      ||||||||   |||||||    ||       ||||||||  \n");
printf("\t\t\t\t\t\t\t              ||    ||   ||         ||       ||  \n");
printf("\t\t\t\t\t\t\t              ||    ||    |||||||   |||||||  ||  \n");
printf("\n\n\n");

printf("\t\t\t\t\t\t\t               |||||||  ||   ||  ||||||  ||||||\n");	
printf("\t\t\t\t\t\t\t              ||         || ||     ||      ||\n");
printf("\t\t\t\t\t\t\t   "); if (state == 2) printf(">>>>>"); else printf("     "); 
					  printf("      |||||||     |||      ||      ||\n");
printf("\t\t\t\t\t\t\t              ||         || ||     ||      ||\n");
printf("\t\t\t\t\t\t\t               |||||||  ||   ||  ||||||    ||\n");
printf("\n\n\n\n\n\n\n");

key = getch();

system("cls");

if(key == 72){
	state = state - 1;
	state = abs(state);
}
if(key == 80){
	if(state == 2){
		state = 1;
	}
	state = state + 1;
	state = abs(state);
}
if (state == 0 && key == 13 ){
	paint_mode();
}
if (state == 1 && key == 13 ){
	help_main_menu();
}
if (state == 2 && key == 13 ){
	break;
}
	
}

}


void help_main_menu(){
	
	printf("\n    Welcome to PiXART!\n\n\n");
	printf("\n");
	
	printf("    PiXART Key Navigation Guide:\n\n");
	printf("    %c Navigate the main menu in PIXART done with ARROW UP and ARROW DOWN key\n    Press enter to proceed\n\n",223);
	printf("    %c Choose 'START' to start making your pixel art!\n    You will enter 'PAINT MODE' where you could paint pixels in 35x35 board\n\n",223);
	printf("    %c Key navigation guide in ''PAINT MODE' will be displayed when you have entered the 'PAINT MODE'\n\n",223);
	printf("    %c Choose 'EXIT' to quit PiXART\n\n\n",223);
	
	printf("    Enjoy PIXART!\n\n");
	
	printf("    [Press 'BACKSPACE' to go back to main menu]");
	
	key = getch();
	
	if (key == 127 || key == 8){
		main_menu();
	}
}


void paint_mode()
{
	
	canvasBoard();
	
	while(1)
	{	
	
	key = getch();
	
	if(key == 102) //key "f"
	{
		canvas[row][col] = block;
		canvasBoard();
	}

	if(key == 101) //key "e"
	{
		canvas[row][col] = erase;
		canvasBoard();
	}
	
	if(key == 127 || key == 8) //key BACKSPACE
	{
		system("cls");
		main_menu();
	}
	
	if(key == 77) //key ARROW RIGHT 
	{	
		++col;
		
		row = abs(row);
		col = abs(col);
		
		printf("                                          \r");
		printf("\t\t\t\t You are on [%d][%d]",row,col);
	}
	
	if(key == 75) //key ARROW LEFT
	{
		--col;
		
		row = abs(row);
		col = abs(col);
		
		printf("                                          \r");
		printf("\t\t\t\t You are on [%d][%d]",row,col);
	}
	
	if(key == 80) //key ARROW DOWN
	{
		++row;
		
		row = abs(row);
		col = abs(col);
		
		printf("                                          \r");
		printf("\t\t\t\t You are on [%d][%d]",row,col);
	}
	
	if(key == 72) //key ARROW UP
	{
		--row;
		
		row = abs(row);
		col = abs(col);
		
		printf("                                          \r");
		printf("\t\t\t\t You are on [%d][%d]",row,col);
	}
	
	}
}

//User's pixel canvas function
void canvasBoard()
{
	system("cls");
	
	printf("\n");
	printf("\t\t\t\t\t   \t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240);
	printf("\t\t\t\t\t   \t\t\t%c       P A I N T  M O D E      %c\n",186,186);
	printf("\t\t\t\t\t   \t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240,240);
	
	printf("\t\t\t\t PAINT MODE KEY NAVIGATION GUIDE:\n\n");
	printf("\t\t\t\t %c Navigate the row and column of the canvas by pressing key ARROW UP, ARROW DOWN, ARROW RIGHT,and ARROW LEFT on your keyboard\n",223);
	printf("\t\t\t\t %c On the selected row and column, press f to paint a block of pixel\n",223);
	printf("\t\t\t\t %c On the selected row and column, press e to erase a block of pixel\n",223);
	printf("\t\t\t\t %c To go back to the main menu, press BACKSPACE\n",223);
	printf("\n\n");
	
	printf("\t\t\t\t Enjoy PiXART!\n\n\n");
	
	printf("\t\t\t\t\t    0                                                                   34\n");
	printf("\t\t\t\t\t    _______________________________________________________________________\n");
	
	printf("\t\t\t\t\t0   |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[0][0],canvas[0][1],canvas[0][2],canvas[0][3],canvas[0][4],canvas[0][5],canvas[0][6],canvas[0][7],canvas[0][8],canvas[0][9],canvas[0][10],canvas[0][11],canvas[0][12],canvas[0][13],canvas[0][14],canvas[0][15],canvas[0][16],canvas[0][17],canvas[0][18],canvas[0][19],canvas[0][20],canvas[0][21],canvas[0][22],canvas[0][23],canvas[0][24],canvas[0][25],canvas[0][26],canvas[0][27],canvas[0][28],canvas[0][29],canvas[0][30],canvas[0][31],canvas[0][32],canvas[0][33],canvas[0][34]);
	printf("\t\t\t\t\t1   |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[1][0],canvas[1][1],canvas[1][2],canvas[1][3],canvas[1][4],canvas[1][5],canvas[1][6],canvas[1][7],canvas[1][8],canvas[1][9],canvas[1][10],canvas[1][11],canvas[1][12],canvas[1][13],canvas[1][14],canvas[1][15],canvas[1][16],canvas[1][17],canvas[1][18],canvas[1][19],canvas[1][20],canvas[1][21],canvas[1][22],canvas[1][23],canvas[1][24],canvas[1][25],canvas[1][26],canvas[1][27],canvas[1][28],canvas[1][29],canvas[1][30],canvas[1][31],canvas[1][32],canvas[1][33],canvas[1][34]);
	printf("\t\t\t\t\t2   |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[2][0],canvas[2][1],canvas[2][2],canvas[2][3],canvas[2][4],canvas[2][5],canvas[2][6],canvas[2][7],canvas[2][8],canvas[2][9],canvas[2][10],canvas[2][11],canvas[2][12],canvas[2][13],canvas[2][14],canvas[2][15],canvas[2][16],canvas[2][17],canvas[2][18],canvas[2][19],canvas[2][20],canvas[2][21],canvas[2][22],canvas[2][23],canvas[2][24],canvas[2][25],canvas[2][26],canvas[2][27],canvas[2][28],canvas[2][29],canvas[2][30],canvas[2][31],canvas[2][32],canvas[2][33],canvas[2][34]);
	printf("\t\t\t\t\t3   |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[3][0],canvas[3][1],canvas[3][2],canvas[3][3],canvas[3][4],canvas[3][5],canvas[3][6],canvas[3][7],canvas[3][8],canvas[3][9],canvas[3][10],canvas[3][11],canvas[3][12],canvas[3][13],canvas[3][14],canvas[3][15],canvas[3][16],canvas[3][17],canvas[3][18],canvas[3][19],canvas[3][20],canvas[3][21],canvas[3][22],canvas[3][23],canvas[3][24],canvas[3][25],canvas[3][26],canvas[3][27],canvas[3][28],canvas[3][29],canvas[3][30],canvas[3][31],canvas[3][32],canvas[3][33],canvas[3][34]);
	printf("\t\t\t\t\t4   |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[4][0],canvas[4][1],canvas[4][2],canvas[4][3],canvas[4][4],canvas[4][5],canvas[4][6],canvas[4][7],canvas[4][8],canvas[4][9],canvas[4][10],canvas[4][11],canvas[4][12],canvas[4][13],canvas[4][14],canvas[4][15],canvas[4][16],canvas[4][17],canvas[4][18],canvas[4][19],canvas[4][20],canvas[4][21],canvas[4][22],canvas[4][23],canvas[4][24],canvas[4][25],canvas[4][26],canvas[4][27],canvas[4][28],canvas[4][29],canvas[4][30],canvas[4][31],canvas[4][32],canvas[4][33],canvas[4][34]);
	
	printf("\t\t\t\t\t5   |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[5][0],canvas[5][1],canvas[5][2],canvas[5][3],canvas[5][4],canvas[5][5],canvas[5][6],canvas[5][7],canvas[5][8],canvas[5][9],canvas[5][10],canvas[5][11],canvas[5][12],canvas[5][13],canvas[5][14],canvas[5][15],canvas[5][16],canvas[5][17],canvas[5][18],canvas[5][19],canvas[5][20],canvas[5][21],canvas[5][22],canvas[5][23],canvas[5][24],canvas[5][25],canvas[5][26],canvas[5][27],canvas[5][28],canvas[5][29],canvas[5][30],canvas[5][31],canvas[5][32],canvas[5][33],canvas[5][34]);
	printf("\t\t\t\t\t6   |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[6][0],canvas[6][1],canvas[6][2],canvas[6][3],canvas[6][4],canvas[6][5],canvas[6][6],canvas[6][7],canvas[6][8],canvas[6][9],canvas[6][10],canvas[6][11],canvas[6][12],canvas[6][13],canvas[6][14],canvas[6][15],canvas[6][16],canvas[6][17],canvas[6][18],canvas[6][19],canvas[6][20],canvas[6][21],canvas[6][22],canvas[6][23],canvas[6][24],canvas[6][25],canvas[6][26],canvas[6][27],canvas[6][28],canvas[6][29],canvas[6][30],canvas[6][31],canvas[6][32],canvas[6][33],canvas[6][34]);
	printf("\t\t\t\t\t7   |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[7][0],canvas[7][1],canvas[7][2],canvas[7][3],canvas[7][4],canvas[7][5],canvas[7][6],canvas[7][7],canvas[7][8],canvas[7][9],canvas[7][10],canvas[7][11],canvas[7][12],canvas[7][13],canvas[7][14],canvas[7][15],canvas[7][16],canvas[7][17],canvas[7][18],canvas[7][19],canvas[7][20],canvas[7][21],canvas[7][22],canvas[7][23],canvas[7][24],canvas[7][25],canvas[7][26],canvas[7][27],canvas[7][28],canvas[7][29],canvas[7][30],canvas[7][31],canvas[7][32],canvas[7][33],canvas[7][34]);
	printf("\t\t\t\t\t8   |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[8][0],canvas[8][1],canvas[8][2],canvas[8][3],canvas[8][4],canvas[8][5],canvas[8][6],canvas[8][7],canvas[8][8],canvas[8][9],canvas[8][10],canvas[8][11],canvas[8][12],canvas[8][13],canvas[8][14],canvas[8][15],canvas[8][16],canvas[8][17],canvas[8][18],canvas[8][19],canvas[8][20],canvas[8][21],canvas[8][22],canvas[8][23],canvas[8][24],canvas[8][25],canvas[8][26],canvas[8][27],canvas[8][28],canvas[8][29],canvas[8][30],canvas[8][31],canvas[8][32],canvas[8][33],canvas[8][34]);
	printf("\t\t\t\t\t9   |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[9][0],canvas[9][1],canvas[9][2],canvas[9][3],canvas[9][4],canvas[9][5],canvas[9][6],canvas[9][7],canvas[9][8],canvas[9][9],canvas[9][10],canvas[9][11],canvas[9][12],canvas[9][13],canvas[9][14],canvas[9][15],canvas[9][16],canvas[9][17],canvas[9][18],canvas[9][19],canvas[9][20],canvas[9][21],canvas[9][22],canvas[9][23],canvas[9][24],canvas[9][25],canvas[9][26],canvas[9][27],canvas[9][28],canvas[9][29],canvas[9][30],canvas[9][31],canvas[9][32],canvas[9][33],canvas[9][34]);
	
	printf("\t\t\t\t\t10  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[10][0],canvas[10][1],canvas[10][2],canvas[10][3],canvas[10][4],canvas[10][5],canvas[10][6],canvas[10][7],canvas[10][8],canvas[10][9],canvas[10][10],canvas[10][11],canvas[10][12],canvas[10][13],canvas[10][14],canvas[10][15],canvas[10][16],canvas[10][17],canvas[10][18],canvas[10][19],canvas[10][20],canvas[10][21],canvas[10][22],canvas[10][23],canvas[10][24],canvas[10][25],canvas[10][26],canvas[10][27],canvas[10][28],canvas[10][29],canvas[10][30],canvas[10][31],canvas[10][32],canvas[10][33],canvas[10][34]);
	printf("\t\t\t\t\t11  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[11][0],canvas[11][1],canvas[11][2],canvas[11][3],canvas[11][4],canvas[11][5],canvas[11][6],canvas[11][7],canvas[11][8],canvas[11][9],canvas[11][10],canvas[11][11],canvas[11][12],canvas[11][13],canvas[11][14],canvas[11][15],canvas[11][16],canvas[11][17],canvas[11][18],canvas[11][19],canvas[11][20],canvas[11][21],canvas[11][22],canvas[11][23],canvas[11][24],canvas[11][25],canvas[11][26],canvas[11][27],canvas[11][28],canvas[11][29],canvas[11][30],canvas[11][31],canvas[11][32],canvas[11][33],canvas[11][34]);
	printf("\t\t\t\t\t12  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[12][0],canvas[12][1],canvas[12][2],canvas[12][3],canvas[12][4],canvas[12][5],canvas[12][6],canvas[12][7],canvas[12][8],canvas[12][9],canvas[12][10],canvas[12][11],canvas[12][12],canvas[12][13],canvas[12][14],canvas[12][15],canvas[12][16],canvas[12][17],canvas[12][18],canvas[12][19],canvas[12][20],canvas[12][21],canvas[12][22],canvas[12][23],canvas[12][24],canvas[12][25],canvas[12][26],canvas[12][27],canvas[12][28],canvas[12][29],canvas[12][30],canvas[12][31],canvas[12][32],canvas[12][33],canvas[12][34]);
	printf("\t\t\t\t\t13  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[13][0],canvas[13][1],canvas[13][2],canvas[13][3],canvas[13][4],canvas[13][5],canvas[13][6],canvas[13][7],canvas[13][8],canvas[13][9],canvas[13][10],canvas[13][11],canvas[13][12],canvas[13][13],canvas[13][14],canvas[13][15],canvas[13][16],canvas[13][17],canvas[13][18],canvas[13][19],canvas[13][20],canvas[13][21],canvas[13][22],canvas[13][23],canvas[13][24],canvas[13][25],canvas[13][26],canvas[13][27],canvas[13][28],canvas[13][29],canvas[13][30],canvas[13][31],canvas[13][32],canvas[13][33],canvas[13][34]);
	printf("\t\t\t\t\t14  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[14][0],canvas[14][1],canvas[14][2],canvas[14][3],canvas[14][4],canvas[14][5],canvas[14][6],canvas[14][7],canvas[14][8],canvas[14][9],canvas[14][10],canvas[14][11],canvas[14][12],canvas[14][13],canvas[14][14],canvas[14][15],canvas[14][16],canvas[14][17],canvas[14][18],canvas[14][19],canvas[14][20],canvas[14][21],canvas[14][22],canvas[14][23],canvas[14][24],canvas[14][25],canvas[14][26],canvas[14][27],canvas[14][28],canvas[14][29],canvas[14][30],canvas[14][31],canvas[14][32],canvas[14][33],canvas[14][34]);
	
	printf("\t\t\t\t\t15  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[15][0],canvas[15][1],canvas[15][2],canvas[15][3],canvas[15][4],canvas[15][5],canvas[15][6],canvas[15][7],canvas[15][8],canvas[15][9],canvas[15][10],canvas[15][11],canvas[15][12],canvas[15][13],canvas[15][14],canvas[15][15],canvas[15][16],canvas[15][17],canvas[15][18],canvas[15][19],canvas[15][20],canvas[15][21],canvas[15][22],canvas[15][23],canvas[15][24],canvas[15][25],canvas[15][26],canvas[15][27],canvas[15][28],canvas[15][29],canvas[15][30],canvas[15][31],canvas[15][32],canvas[15][33],canvas[15][34]);
	printf("\t\t\t\t\t16  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[16][0],canvas[16][1],canvas[16][2],canvas[16][3],canvas[16][4],canvas[16][5],canvas[16][6],canvas[16][7],canvas[16][8],canvas[16][9],canvas[16][10],canvas[16][11],canvas[16][12],canvas[16][13],canvas[16][14],canvas[16][15],canvas[16][16],canvas[16][17],canvas[16][18],canvas[16][19],canvas[16][20],canvas[16][21],canvas[16][22],canvas[16][23],canvas[16][24],canvas[16][25],canvas[16][26],canvas[16][27],canvas[16][28],canvas[16][29],canvas[16][30],canvas[16][31],canvas[16][32],canvas[16][33],canvas[16][34]);
	printf("\t\t\t\t\t17  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[17][0],canvas[17][1],canvas[17][2],canvas[17][3],canvas[17][4],canvas[17][5],canvas[17][6],canvas[17][7],canvas[17][8],canvas[17][9],canvas[17][10],canvas[17][11],canvas[17][12],canvas[17][13],canvas[17][14],canvas[17][15],canvas[17][16],canvas[17][17],canvas[17][18],canvas[17][19],canvas[17][20],canvas[17][21],canvas[17][22],canvas[17][23],canvas[17][24],canvas[17][25],canvas[17][26],canvas[17][27],canvas[17][28],canvas[17][29],canvas[17][30],canvas[17][31],canvas[17][32],canvas[17][33],canvas[17][34]);
	printf("\t\t\t\t\t18  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[18][0],canvas[18][1],canvas[18][2],canvas[18][3],canvas[18][4],canvas[18][5],canvas[18][6],canvas[18][7],canvas[18][8],canvas[18][9],canvas[18][10],canvas[18][11],canvas[18][12],canvas[18][13],canvas[18][14],canvas[18][15],canvas[18][16],canvas[18][17],canvas[18][18],canvas[18][19],canvas[18][20],canvas[18][21],canvas[18][22],canvas[18][23],canvas[18][24],canvas[18][25],canvas[18][26],canvas[18][27],canvas[18][28],canvas[18][29],canvas[18][30],canvas[18][31],canvas[18][32],canvas[18][33],canvas[18][34]);
	printf("\t\t\t\t\t19  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[19][0],canvas[19][1],canvas[19][2],canvas[19][3],canvas[19][4],canvas[19][5],canvas[19][6],canvas[19][7],canvas[19][8],canvas[19][9],canvas[19][10],canvas[19][11],canvas[19][12],canvas[19][13],canvas[19][14],canvas[19][15],canvas[19][16],canvas[19][17],canvas[19][18],canvas[19][19],canvas[19][20],canvas[19][21],canvas[19][22],canvas[19][23],canvas[19][24],canvas[19][25],canvas[19][26],canvas[19][27],canvas[19][28],canvas[19][29],canvas[19][30],canvas[19][31],canvas[19][32],canvas[19][33],canvas[19][34]);
	
	printf("\t\t\t\t\t20  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[20][0],canvas[20][1],canvas[20][2],canvas[20][3],canvas[20][4],canvas[20][5],canvas[20][6],canvas[20][7],canvas[20][8],canvas[20][9],canvas[20][10],canvas[20][11],canvas[20][12],canvas[20][13],canvas[20][14],canvas[20][15],canvas[20][16],canvas[20][17],canvas[20][18],canvas[20][19],canvas[20][20],canvas[20][21],canvas[20][22],canvas[20][23],canvas[20][24],canvas[20][25],canvas[20][26],canvas[20][27],canvas[20][28],canvas[20][29],canvas[20][30],canvas[20][31],canvas[20][32],canvas[20][33],canvas[20][34]);
	printf("\t\t\t\t\t21  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[21][0],canvas[21][1],canvas[21][2],canvas[21][3],canvas[21][4],canvas[21][5],canvas[21][6],canvas[21][7],canvas[21][8],canvas[21][9],canvas[21][10],canvas[21][11],canvas[21][12],canvas[21][13],canvas[21][14],canvas[21][15],canvas[21][16],canvas[21][17],canvas[21][18],canvas[21][19],canvas[21][20],canvas[21][21],canvas[21][22],canvas[21][23],canvas[21][24],canvas[21][25],canvas[21][26],canvas[21][27],canvas[21][28],canvas[21][29],canvas[21][30],canvas[21][31],canvas[21][32],canvas[21][33],canvas[21][34]);
	printf("\t\t\t\t\t22  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[22][0],canvas[22][1],canvas[22][2],canvas[22][3],canvas[22][4],canvas[22][5],canvas[22][6],canvas[22][7],canvas[22][8],canvas[22][9],canvas[22][10],canvas[22][11],canvas[22][12],canvas[22][13],canvas[22][14],canvas[22][15],canvas[22][16],canvas[22][17],canvas[22][18],canvas[22][19],canvas[22][20],canvas[22][21],canvas[22][22],canvas[22][23],canvas[22][24],canvas[22][25],canvas[22][26],canvas[22][27],canvas[22][28],canvas[22][29],canvas[22][30],canvas[22][31],canvas[22][32],canvas[22][33],canvas[22][34]);
	printf("\t\t\t\t\t23  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[23][0],canvas[23][1],canvas[23][2],canvas[23][3],canvas[23][4],canvas[23][5],canvas[23][6],canvas[23][7],canvas[23][8],canvas[23][9],canvas[23][10],canvas[23][11],canvas[23][12],canvas[23][13],canvas[23][14],canvas[23][15],canvas[23][16],canvas[23][17],canvas[23][18],canvas[23][19],canvas[23][20],canvas[23][21],canvas[23][22],canvas[23][23],canvas[23][24],canvas[23][25],canvas[23][26],canvas[23][27],canvas[23][28],canvas[23][29],canvas[23][30],canvas[23][31],canvas[23][32],canvas[23][33],canvas[23][34]);
	printf("\t\t\t\t\t24  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[24][0],canvas[24][1],canvas[24][2],canvas[24][3],canvas[24][4],canvas[24][5],canvas[24][6],canvas[24][7],canvas[24][8],canvas[24][9],canvas[24][10],canvas[24][11],canvas[24][12],canvas[24][13],canvas[24][14],canvas[24][15],canvas[24][16],canvas[24][17],canvas[24][18],canvas[24][19],canvas[24][20],canvas[24][21],canvas[24][22],canvas[24][23],canvas[24][24],canvas[24][25],canvas[24][26],canvas[24][27],canvas[24][28],canvas[24][29],canvas[24][30],canvas[24][31],canvas[24][32],canvas[24][33],canvas[24][34]);
	
	printf("\t\t\t\t\t25  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[25][0],canvas[25][1],canvas[25][2],canvas[25][3],canvas[25][4],canvas[25][5],canvas[25][6],canvas[25][7],canvas[25][8],canvas[25][9],canvas[25][10],canvas[25][11],canvas[25][12],canvas[25][13],canvas[25][14],canvas[25][15],canvas[25][16],canvas[25][17],canvas[25][18],canvas[25][19],canvas[25][20],canvas[25][21],canvas[25][22],canvas[25][23],canvas[25][24],canvas[25][25],canvas[25][26],canvas[25][27],canvas[25][28],canvas[25][29],canvas[25][30],canvas[25][31],canvas[25][32],canvas[25][33],canvas[25][34]);
	printf("\t\t\t\t\t26  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[26][0],canvas[26][1],canvas[26][2],canvas[26][3],canvas[26][4],canvas[26][5],canvas[26][6],canvas[26][7],canvas[26][8],canvas[26][9],canvas[26][10],canvas[26][11],canvas[26][12],canvas[26][13],canvas[26][14],canvas[26][15],canvas[26][16],canvas[26][17],canvas[26][18],canvas[26][19],canvas[26][20],canvas[26][21],canvas[26][22],canvas[26][23],canvas[26][24],canvas[26][25],canvas[26][26],canvas[26][27],canvas[26][28],canvas[26][29],canvas[26][30],canvas[26][31],canvas[26][32],canvas[26][33],canvas[26][34]);
	printf("\t\t\t\t\t27  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[27][0],canvas[27][1],canvas[27][2],canvas[27][3],canvas[27][4],canvas[27][5],canvas[27][6],canvas[27][7],canvas[27][8],canvas[27][9],canvas[27][10],canvas[27][11],canvas[27][12],canvas[27][13],canvas[27][14],canvas[27][15],canvas[27][16],canvas[27][17],canvas[27][18],canvas[27][19],canvas[27][20],canvas[27][21],canvas[27][22],canvas[27][23],canvas[27][24],canvas[27][25],canvas[27][26],canvas[27][27],canvas[27][28],canvas[27][29],canvas[27][30],canvas[27][31],canvas[27][32],canvas[27][33],canvas[27][34]);
	printf("\t\t\t\t\t28  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[28][0],canvas[28][1],canvas[28][2],canvas[28][3],canvas[28][4],canvas[28][5],canvas[28][6],canvas[28][7],canvas[28][8],canvas[28][9],canvas[28][10],canvas[28][11],canvas[28][12],canvas[28][13],canvas[28][14],canvas[28][15],canvas[28][16],canvas[28][17],canvas[28][18],canvas[28][19],canvas[28][20],canvas[28][21],canvas[28][22],canvas[28][23],canvas[28][24],canvas[28][25],canvas[28][26],canvas[28][27],canvas[28][28],canvas[28][29],canvas[28][30],canvas[28][31],canvas[28][32],canvas[28][33],canvas[28][34]);
	printf("\t\t\t\t\t29  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[29][0],canvas[29][1],canvas[29][2],canvas[29][3],canvas[29][4],canvas[29][5],canvas[29][6],canvas[29][7],canvas[29][8],canvas[29][9],canvas[29][10],canvas[29][11],canvas[29][12],canvas[29][13],canvas[29][14],canvas[29][15],canvas[29][16],canvas[29][17],canvas[29][18],canvas[29][19],canvas[29][20],canvas[29][21],canvas[29][22],canvas[29][23],canvas[29][24],canvas[29][25],canvas[29][26],canvas[29][27],canvas[29][28],canvas[29][29],canvas[29][30],canvas[29][31],canvas[29][32],canvas[29][33],canvas[29][34]);
	
	printf("\t\t\t\t\t30  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[30][0],canvas[30][1],canvas[30][2],canvas[30][3],canvas[30][4],canvas[30][5],canvas[30][6],canvas[30][7],canvas[30][8],canvas[30][9],canvas[30][10],canvas[30][11],canvas[30][12],canvas[30][13],canvas[30][14],canvas[30][15],canvas[30][16],canvas[30][17],canvas[30][18],canvas[30][19],canvas[30][20],canvas[30][21],canvas[30][22],canvas[30][23],canvas[30][24],canvas[30][25],canvas[30][26],canvas[30][27],canvas[30][28],canvas[30][29],canvas[30][30],canvas[30][31],canvas[30][32],canvas[30][33],canvas[30][34]);
	printf("\t\t\t\t\t31  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[31][0],canvas[31][1],canvas[31][2],canvas[31][3],canvas[31][4],canvas[31][5],canvas[31][6],canvas[31][7],canvas[31][8],canvas[31][9],canvas[31][10],canvas[31][11],canvas[31][12],canvas[31][13],canvas[31][14],canvas[31][15],canvas[31][16],canvas[31][17],canvas[31][18],canvas[31][19],canvas[31][20],canvas[31][21],canvas[31][22],canvas[31][23],canvas[31][24],canvas[31][25],canvas[31][26],canvas[31][27],canvas[31][28],canvas[31][29],canvas[31][30],canvas[31][31],canvas[31][32],canvas[31][33],canvas[31][34]);
	printf("\t\t\t\t\t32  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[32][0],canvas[32][1],canvas[32][2],canvas[32][3],canvas[32][4],canvas[32][5],canvas[32][6],canvas[32][7],canvas[32][8],canvas[32][9],canvas[32][10],canvas[32][11],canvas[32][12],canvas[32][13],canvas[32][14],canvas[32][15],canvas[32][16],canvas[32][17],canvas[32][18],canvas[32][19],canvas[32][20],canvas[32][21],canvas[32][22],canvas[32][23],canvas[32][24],canvas[32][25],canvas[32][26],canvas[32][27],canvas[32][28],canvas[32][29],canvas[32][30],canvas[32][31],canvas[32][32],canvas[32][33],canvas[32][34]);
	printf("\t\t\t\t\t33  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",canvas[33][0],canvas[33][1],canvas[33][2],canvas[33][3],canvas[33][4],canvas[33][5],canvas[33][6],canvas[33][7],canvas[33][8],canvas[33][9],canvas[33][10],canvas[33][11],canvas[33][12],canvas[33][13],canvas[33][14],canvas[33][15],canvas[33][16],canvas[33][17],canvas[33][18],canvas[33][19],canvas[33][20],canvas[33][21],canvas[33][22],canvas[33][23],canvas[33][24],canvas[33][25],canvas[33][26],canvas[33][27],canvas[33][28],canvas[33][29],canvas[33][30],canvas[33][31],canvas[33][32],canvas[33][33],canvas[33][34]);
	printf("\t\t\t\t\t34  |%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|%c|\n\n\n",canvas[34][0],canvas[34][1],canvas[34][2],canvas[34][3],canvas[34][4],canvas[34][5],canvas[34][6],canvas[34][7],canvas[34][8],canvas[34][9],canvas[34][10],canvas[34][11],canvas[34][12],canvas[34][13],canvas[34][14],canvas[34][15],canvas[34][16],canvas[34][17],canvas[34][18],canvas[34][19],canvas[34][20],canvas[34][21],canvas[34][22],canvas[34][23],canvas[34][24],canvas[34][25],canvas[34][26],canvas[34][27],canvas[34][28],canvas[34][29],canvas[34][30],canvas[34][31],canvas[34][32],canvas[34][33],canvas[34][34]);
	
	
	
	printf("\t\t\t\t You are on [%d][%d]",row,col);

}
