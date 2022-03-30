#ifndef DIARY_H_INCLUDED
#define DIARY_H_INCLUDED

#include<stdio.h>

#include<stdlib.h>

#include<conio.h>

#include<string.h>

//Functions of an Personal Diary.//

int password();

void addrecord();

void viewrecord();

void editrecord();

void editpassword();

void deleterecord();

struct record

//Structure of an personal Diary.//


{

    char time[10];

    char name[30];

    char place[25];

    char duration[50];

    char note[1000];

} ;

#endif // DIARY_H_INCLUDED
