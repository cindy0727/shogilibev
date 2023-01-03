#ifndef USER_H
#define USER_H

#define ROW 9
#define COL 9

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include <ev.h>

typedef struct user_t
{
    char userchess_board[ROW][COL];
    char tmp;
    int tmprow, tmpcol;

    //原本和改動的棋子位置
    char input;
    int orignrow, origncol, afterrow, aftercol;

    struct user_t *prev;
    struct user_t *next;

} user;

FILE *fptr;

user chess_board;
user *usermeptr;
user *useryouptr;
user *usermefrontptr;//記資料的頭
user *useryoufrontptr;//記資料的頭

user *tmpmefrontptr;
user *tmpyoufrontptr;

user *userloadptr;//儲存s先儲存到這個linkedlist
user *loadfrontptr;//記著資料頭的東西

//timer裡需要用到的參數
ev_io stop_watcher; 
ev_timer timeout_watcher;
time_t user1starttime, user2starttime, user1endtime, user2endtime, user1usedtime, user2usedtime;
int user1hour, user1minute, user1second, user2hour, user2minute, user2second;


int rearone;
int reartwo;
int frontone;
int fronttwo;
int loadfront;

void creat_user1(user *user1);//建立user1
void creat_user2(user *user2);//建立user2

void chineseuser1 (char letter);//轉換成中文字並印出藍色字
void chineseuser2 (char letter);//轉換成中文字並印出紅色字

#endif

