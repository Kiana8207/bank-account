#include"bank.h"

bank::bank() {}

bank::~bank() {}

void bank::set(long long int SHOMAREHESAB, string NAME, int EXP, int CVV)
{
	shomarehesab = (SHOMAREHESAB > 0) ? SHOMAREHESAB : 0;
	name = NAME;
	exp = EXP;
	cvv = (CVV > 0) ? CVV : 000;
}

void bank::print()
{
	cout << "shomarehesab:" << shomarehesab << endl;
	cout << "name:" << name << endl;
	cout << "exp:" << exp << endl;
	cout << "cvv:" << cvv << endl;
}

int bank::gettype()
{
	return type;
}

long int bank::varizi(long int VARIZI) {
	return 0;
}

long int bank::bardashti(long int BARDASHT) {
	return 0;
}

void bank::check()
{
}

jari::jari()
{
	type == 1;
}

void jari::set(long long int SHOMAREHESAB, string NAME, int EXP, int CVV)
{
	bank::set(SHOMAREHESAB, NAME, EXP, CVV);
}

long int jari::varizi(long int VARIZI)
{
	variz = VARIZI;
	mojodi = mojodi + variz;
	return mojodi;
}
long int jari::bardashti(long int BARDASHT)
{
	bardasht = BARDASHT;
	if (mojodi >= bardasht)
		mojodi = mojodi - bardasht;
	else
		cout << "mojodi kafi nist" << endl;
	return mojodi;
}
int jari::gettype()
{
	return 1;
}
void jari::print()
{
	bank::print();
	cout << "mojodi:" << mojodi << endl;
}

void jari::check()
{
	cout << "mitavanid daste check daryaft konid" << endl;
}





kotah::kotah()
{
	type == 2;
}

void kotah::set(long long int SHOMAREHESAB, string NAME, int EXP, int CVV)
{
	bank::set(SHOMAREHESAB, NAME, EXP, CVV);
}

long int kotah::varizi(long int VARIZ)
{
	variz = VARIZ;
	mojodi = mojodi + variz;
	mojodi += (mojodi * 5) / 100;
	return mojodi;
}

long int kotah::bardashti(long int BARDASHT)
{
	bardasht = BARDASHT;
	long int x = 0;
	x = mojodi;
	if ((x -= bardasht) >= 10000)
		mojodi = mojodi - bardasht;
	else
		cout << "mojodi kafi nist" << endl;
	return mojodi;
}

void kotah::print()
{
	bank::print();
	cout << "mojodi:" << mojodi << endl;
}

int kotah::gettype()
{
	return 2;
}





boland::boland()
{
	type == 3;
}

void boland::set(long long int SHOMAREHESAB, string NAME, int EXP, int CVV)
{
	bank::set(SHOMAREHESAB, NAME, EXP, CVV);
}

long int boland::varizi(long int VARIZ)
{
	variz = VARIZ;
	mojodi = mojodi + variz;
	mojodi += (mojodi * 22) / 100;
	return mojodi;
}

long int boland::bardashti(long int BARDASHT)
{
	bardasht = BARDASHT;
	int x = 0;
	x = mojodi / 12;
	cout << "shoma har mah mitavanid " << x << " toman bardasht konid" << endl;
	int y = 0;
	y = x;
	if ((y - bardasht) >= 10000) {
		x = x - bardasht;
		bank::print();
		cout << "mojodi:" << x << endl;
	}
	else
		cout << "mojodi kafi nist" << endl;
	return x;
}

void boland::print()
{
	bank::print();
	cout << "mojodi:" << mojodi << endl;
}

int boland::gettype()
{
	return 3;
}




gharz::gharz()
{
	type = 4;
}

long int gharz::varizi(long int VARIZ)
{
	variz = VARIZ;
	mojodi = mojodi + variz;
	return mojodi;
}

long int gharz::bardashti(long int BARDASHT)
{
	bardasht = BARDASHT;
	if (mojodi >= bardasht)
		mojodi = mojodi - bardasht;
	else
		cout << "mojodi kafi nist" << endl;
	return mojodi;
}

void gharz::print()
{
	bank::print();
	cout << "mojodi:" << mojodi << endl;

	cout << type << endl;
}


void gharz::check()
{
	cout << "nemitavanid daste check daryaft konid" << endl;
}

int gharz::gettype()
{
	return 4;
}

void gharz::set(long long int SHOMAREHESAB, string NAME, int EXP, int CVV)
{
	bank::set(SHOMAREHESAB, NAME, EXP, CVV);
}
