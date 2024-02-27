#pragma once
#ifndef bank_h
#define bank_h
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


class bank {
public:
	bank();
	~bank();
	virtual void set(long long int = 0.0, string = "", int = 0, int = 0);
	virtual void print() = 0;
	virtual int gettype();
	virtual long int varizi(long int);
	virtual long int bardashti(long int);
	virtual void check();

protected:
	long long int shomarehesab;
	string name;
	int exp;
	int cvv;
	long int mojodi = 10000;
	int type;

};


class jari :public bank {
public:
	jari();
	void set(long long int, string, int, int);
	long int varizi(long int);
	long int bardashti(long int);
	int gettype();
	void print();
	void check();
protected:
	long int variz;
	long int bardasht;
};



class kotah :public bank {
public:
	kotah();
	void set(long long int, string, int, int);
	long int varizi(long int);
	long int bardashti(long int);
	void print();
	int gettype();

protected:
	long int variz;
	long int bardasht;
};


class boland :public bank {
public:
	boland();
	void set(long long int, string, int, int);
	long int varizi(long int);
	long int bardashti(long int);
	void print();
	int gettype();
protected:
	long int variz;
	long int bardasht;
};


class gharz :public bank {
public:
	gharz();
	void set(long long int, string, int, int);
	long int varizi(long int);
	long int bardashti(long int);
	void print();
	void check();
	int gettype();
protected:
	long int variz;
	long int bardasht;
};
#endif