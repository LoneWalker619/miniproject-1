#include<stdio.h>
#ifndef __BANK_H__
#define __BANK_H__
struct date{
    int m,d,y;
 };
 struct {
    char name[60];
    int account_no,age;
    int storedpin;
    char address[60];
    char aadhar_no[15];
    double phone;
    char account_type[10];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;
 }ad,to_check,rem,transaction;
float interest(float t,float amount,int rate);
void delay(int t);
void new_acc();
void transact(void);
void see(void);
void menu(void);
#endif

