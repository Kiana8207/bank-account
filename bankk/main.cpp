#include"bank.h"

// منو اول
void one(bank** j, int num) {
	long int variz, bardasht;
	int adad;
	cout << " Kodam amalyat?\t 1. variz\t 2. bardasht\t 3. Check\t\t 0. exit" << endl;
	cin >> adad;
	for (int i = num - 1; i < num; i++) {
		switch (adad) {
		case 1:
			cout << "meghdar varizi ra vared konid" << endl;
			cin >> variz;
			j[i]->varizi(variz);
			j[i]->print();
			one(j, num);
			break;

		case 2:
			cout << "meghdar bardashti ra vared konid" << endl;
			cin >> bardasht;
			j[i]->bardashti(bardasht);
			j[i]->print();
			one(j, num);
			break;

		case 3:
			j[i]->check();
			one(j, num);
			break;

		case 0:
			break;

		default:
			break;
		}
	}
	system("CLS");
	for (int i = 0; i < num; i++) {
		if (j[i]->gettype() == 1) {
			j[i]->print();
		}
	}
}

// منو دوم 
void two(bank** k, int num) {
	long int variz, bardasht;
	int adad;
	cout << " Kodam amalyat?\t 1. variz\t 2. bardasht\t\t 0. exit" << endl;
	cin >> adad;
	for (int i = num - 1; i < num; i++) {
		switch (adad) {
		case 1:
			cout << "meghdar varizi ra vared konid" << endl;
			cin >> variz;
			k[i]->varizi(variz);
			k[i]->print();
			two(k, num);
			break;

		case 2:
			cout << "meghdar bardashti ra vared konid" << endl;
			cin >> bardasht;
			k[i]->bardashti(bardasht);
			k[i]->print();
			two(k, num);
			break;

		case 0:
			break;

		default:
			break;
		}
	}
	system("CLS");
	for (int i = 0; i < num; i++) {
		if (k[i]->gettype() == 2) {
			k[i]->print();
		}
	}
}
// منو سوم
void three(bank** b, int num) {
	long int variz, bardasht;
	int adad;
	cout << " Kodam amalyat?\t 1. variz\t 2. bardasht\t\t 0. exit" << endl;
	cin >> adad;
	for (int i = num - 1; i < num; i++) {
		switch (adad) {
		case 1:
			cout << "meghdar varizi ra vared konid" << endl;
			cin >> variz;
			b[i]->varizi(variz);
			b[i]->print();
			three(b, num);
			break;

		case 2:
			cout << "meghdar bardashti ra vared konid" << endl;
			cin >> bardasht;
			b[i]->bardashti(bardasht);
			b[i]->print();
			three(b, num);
			break;

		case 0:
			break;

		default:
			break;

		}
	}
	system("CLS");
	for (int i = 0; i < num; i++) {
		if (b[i]->gettype() == 3) {
			b[i]->print();
		}
	}
}

// منو چهارم
void four(bank** g, int num) {
	long int variz, bardasht;
	int adad;
	cout << " Kodam amalyat?\t 1. variz\t 2. bardasht\t 3. Check\t\t 0. exit" << endl;
	cin >> adad;
	for (int i = num - 1; i < num; i++) {
		switch (adad) {
		case 1:
			cout << "meghdar varizi ra vared konid" << endl;
			cin >> variz;
			g[i]->varizi(variz);
			g[i]->print();
			four(g, num);
			break;

		case 2:
			cout << "meghdar bardashti ra vared konid" << endl;
			cin >> bardasht;
			g[i]->bardashti(bardasht);
			g[i]->print();
			four(g, num);
			break;

		case 3:
			g[i]->check();
			four(g, num);
			break;

		case 0:
			break;

		default:
			break;
		}
	}
	system("CLS");
	for (int i = 0; i < num; i++) {
		if (g[i]->gettype() == 4) {
			g[i]->print();
		}
	}

}

// منو ثبت نام
void sabtnam() {
	int tedadHesab = 0, i = 0;
	bank** b1;
	long long int hesab;
	int cvv, exp, variz, bardasht;
	string name;
	b1 = new bank * [tedadHesab];
	int adad;
	cout << "Ba salam\nLotfan gozine mored nazar ra entekhab konid: " << endl;
	cout << "1. hesab jari\t 2. seporde kotah modat\t 3. seporde boland modat\t 4. gharzolhasane\t 0. exit" << endl;
	cin >> adad;
	while (adad != 0)
	{
		switch (adad) {
		case 0:
			cout << "Be omid didar" << endl;
			break;

		case 1:
			cout << "Lotfan shomare hesab khod ra vared konid: " << endl;
			cin >> hesab;
			cout << "Lotfan name khode ra vared konid: " << endl;
			cin >> name;
			cout << "Lotfan cvv mored nazar ra vared konid: " << endl;
			cin >> cvv;
			cout << "Lotfan exp mored nazar ra vared konid: " << endl;
			cin >> exp;
			tedadHesab++;
			for (i = tedadHesab - 1; i < tedadHesab; i++) {
				b1[i] = new jari();
				b1[i]->set(hesab, name, exp, cvv);
				b1[i]->print();
				one(b1, tedadHesab);
			}
			cout << "Lotfan gozine mored nazar ra entekhab konid: " << endl;
			cout << "1. hesab jari\t 2. seporde kotah modat\t 3. seporde boland modat\t 4. gharzolhasane\t 0. exit" << endl;
			cin >> adad;
			break;
		case 2:
			cout << "Lotfan shomare hesab khod ra vared konid: " << endl;
			cin >> hesab;
			cout << "Lotfan name khode ra vared konid: " << endl;
			cin >> name;
			cout << "Lotfan cvv mored nazar ra vared konid: " << endl;
			cin >> cvv;
			cout << "Lotfan exp mored nazar ra vared konid: " << endl;
			cin >> exp;
			tedadHesab++;
			for (i = tedadHesab - 1; i < tedadHesab; i++) {
				b1[i] = new kotah();
				b1[i]->set(hesab, name, exp, cvv);
				b1[i]->print();
				two(b1, tedadHesab);
			}
			cout << "Lotfan gozine mored nazar ra entekhab konid: " << endl;
			cout << "1. hesab jari\t 2. seporde kotah modat\t 3. seporde boland modat\t 4. gharzolhasane\t 0. exit" << endl;
			cin >> adad;
			break;

		case 3:
			cout << "Lotfan shomare hesab khod ra vared konid: " << endl;
			cin >> hesab;
			cout << "Lotfan name khode ra vared konid: " << endl;
			cin >> name;
			cout << "Lotfan cvv mored nazar ra vared konid: " << endl;
			cin >> cvv;
			cout << "Lotfan exp mored nazar ra vared konid: " << endl;
			cin >> exp;
			tedadHesab++;
			for (i = tedadHesab - 1; i < tedadHesab; i++) {
				b1[i] = new boland();
				b1[i]->set(hesab, name, exp, cvv);
				b1[i]->print();
				three(b1, tedadHesab);
			}
			cout << "Lotfan gozine mored nazar ra entekhab konid: " << endl;
			cout << "1. hesab jari\t 2. seporde kotah modat\t 3. seporde boland modat\t 4. gharzolhasane\t 0. exit" << endl;
			cin >> adad;
			break;

		case 4:
			cout << "Lotfan shomare hesab khod ra vared konid: " << endl;
			cin >> hesab;
			cout << "Lotfan name khode ra vared konid: " << endl;
			cin >> name;
			cout << "Lotfan cvv mored nazar ra vared konid: " << endl;
			cin >> cvv;
			cout << "Lotfan exp mored nazar ra vared konid: " << endl;
			cin >> exp;
			tedadHesab++;
			for (i = tedadHesab - 1; i < tedadHesab; i++) {
				b1[i] = new gharz();
				b1[i]->set(hesab, name, exp, cvv);
				b1[i]->print();
				four(b1, tedadHesab);
			}
			cout << "Lotfan gozine mored nazar ra entekhab konid: " << endl;
			cout << "1. hesab jari\t 2. seporde kotah modat\t 3. seporde boland modat\t 4. gharzolhasane\t 0. exit" << endl;
			cin >> adad;
			break;

		default:
			break;
		}
	}
}

int main() {
	sabtnam();
	return 0;
}