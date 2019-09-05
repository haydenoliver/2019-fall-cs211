#define PDC_DLL_BUILD 1
#include "curses.h"
#include <string>
#include <iostream>

using namespace std;


int main( void)
{
	/*WINDOW* main_window = nullptr;
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

	//fun stuff happens here

	for (int i = 0; i < num_cols; i++)
	{
		//top row
		mvaddch(0, i, ACS_LLCORNER);
		//bottom row
		mvaddch(num_rows - 1, i, ACS_LLCORNER);
	}
	for (int i = 0; i < num_rows; i++)
	{
		//left column
		mvaddch(i, 0, ACS_LLCORNER);
		//right column
		mvaddch(i, num_cols - 1, ACS_LLCORNER);
	}
	//tells curses to draw
	refresh(); 
	char result = getch();
	//revert back to normal console mode


	endwin(); */


	/*initscr();

	int height, width, start_x, start_y;

	height = 10;
	width = 20;
	start_y = start_x = 10;

	WINDOW* win = newwin(height, width, start_x, start_y);
	refresh();
	//char c = 'g';

 	box(win, 0, 0);
	mvwprintw(win, 1, 1, "text editor");
	wrefresh(win);


	endwin();*/

	initscr();
	noecho();
	cbreak();

	//gives text a colored background
	start_color();
	init_pair(1, COLOR_BLACK, COLOR_GREEN);
	attron(COLOR_PAIR(1));
	printw("Text Editor");
	refresh();
	
	//makes a menu box
	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);

	WINDOW* menuwin = newwin(10, xMax - 100, yMax - 10, .1);
	box(menuwin, 0, 0);
	refresh();
	wrefresh(menuwin);


	//adds choices to the menu box (not finished yet)
	string menubar[5] = { "font", "color", "size", "bold", "underline" };
	int highlight = 0;
	//int choice;

	//keypad(menuwin, true);

	


	getch();
	endwin();
	

	return 0;
	

	
	
		}
	


	

