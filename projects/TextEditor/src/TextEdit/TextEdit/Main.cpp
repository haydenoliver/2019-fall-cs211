#define PDC_DLL_BUILD 1
#include "curses.h"
#include <string>
#include <iostream>

using namespace std;


int main( void)
{
	/*
	//sample border
	WINDOW* main_window = nullptr;
	int num_rows = 0;
	int num_cols = 0;


	//inititalize screen, begin curses mode
	initscr();

	//take up most of the screen
	getmaxyx(main_window, num_rows, num_cols);
	resize_term(num_rows - 1, num_cols - 1);
	getmaxyx(main_window, num_rows, num_cols);

	//turn off key echo
	noecho();
	nodelay(main_window, TRUE);
	keypad(main_window, TRUE);
	curs_set(0);
	*/
	

	//initializes window
	initscr();
	noecho();
	//user control in menu... 
	//keypad(menuwin, true);
	

	//gives text a colored background
	start_color();
	init_pair(1, COLOR_BLACK, COLOR_GREEN);
	attron(COLOR_PAIR(1));
	printw("Text Editor");
	refresh();
	



	//makes a menu box
	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);
	WINDOW* menuwin = newwin(10, xMax - 100, yMax - 10, 1);
	box(menuwin, ACS_DIAMOND, ACS_VLINE);
	
	

	refresh();
	wrefresh(menuwin);


	//adds choices to the menu box (not finished yet)
	string menubar[5] = { "font", "color", "size", "bold", "underline" };
	
	

	


	getch();
	endwin();
	

	return 0;
	

	
	
		}
	


	

