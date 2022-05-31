#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;
int koino(int metritis_koino, int metr_koino);
int fifty_fifty(int metritis_50_50, int metr_koin);
int til(int metritis_til, int metr_til);
void final(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color A");
	cout << "Congratulations, you made it and you won 1 Million dollars !" << endl;
}
void question_15(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color 7");
	cout << "Now you will be playing for 1 MILLION $" << endl;
	cout << "This is the final question. If you answer wrong, you will lose everything" << endl;
	cout << "If you answer right, you will get 1 MILLION $" << endl;
	cout << "And your question is:" << endl;
	cout << "In 1718, which pirate died in battle off the coast of what is now North Carolina?" << endl;
	cout << "a.Calico Jack" << endl;
	cout << "b.Blackbeard" << endl;
	cout << "c.Bartholomew Roberts" << endl;
	cout << "d.Captain Kidd" << endl;
	cin >> a;
	switch (a) {
	case 'a': {
		system("color 4");
		cout << "You chose a" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'b': {
		cout << "You chose b" << endl;
		cout << "Congratulations this was the right answer!" << endl;
		final(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	case 'c': {
		system("color 4");
		cout << "You chose c" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'd': {
		system("color 4");
		cout << "You chose d" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case '1': {
		cout << "You chose to ask the audience" << endl;
		m_koino = koino(metritis_koino, metr_koino);
		if (m_koino == 1) {
			cout << "The audience says that the correct answer is b" << endl;
			metritis_koino--;
		}
		else if (m_koino == 10) {
			cout << "Sorry, there are no points left for an audience question" << endl;
		}
		else {
			cout << "The audience says that the correct answer is a" << endl;
			metritis_koino--;
		}
		cout << "What do you think is the answer?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			cout << "You chose b" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			final(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_15(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '2': {
		cout << "You chose to do 50/50" << endl;
		m_50_50 = fifty_fifty(metritis_50_50, metr_50_50);
		if (m_50_50 == 10) {
			cout << "Sorry there are no points left for a 50-50" << endl;
		}
		else {
			cout << "b.Blackbeard" << endl;
			cout << "d.Captain Kidd" << endl;
			metritis_50_50--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'b': {
			cout << "You chose b" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			final(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_15(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '3': {
		cout << "You chose to call your friend" << endl;
		m_til = til(metritis_til, metr_til);
		if (m_til == 1) {
			cout << "Your friend tells you that the correct answer is b" << endl;
			metritis_til--;
		}
		else if (m_til == 10) {
			cout << "Sorry there are no points left for a telephone" << endl;
		}
		else {
			cout << "Your friend tells you that the correct answer is a" << endl;
			metritis_til--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			cout << "You chose b" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			final(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_15(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	default: {
		system("color 4");
		cout << "It seems that you pressed a wrong key" << endl;
		cout << "Let's go again" << endl;
		question_15(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
void question_14_mid(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color 7");
	cout << "You are about to go to the final question" << endl;
	cout << "You now have 500000$" << endl;
	cout << "You can leave with this quantity, or you can continue the game" << endl;
	cout << "But be careful, if you lose afterwards, ou will lose all your money" << endl;
	cout << "What do you chose?" << endl;
	cout << "Press 1 to continue, or press 2 to exit with 500000$" << endl;
	cin >> a;
	switch (a) {
	case '1': {
		cout << "Ok, then. Let's continue" << endl;
		question_15(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	case '2': {
		system("color 4");
		cout << "Ok, then. You chose to leave with 50000$. Have a nice day" << endl;
		break;
	}
	default: {
		system("color 4");
		cout << "It seems that you pressed a wrong key" << endl;
		cout << "Let's go again" << endl;
		question_14_mid(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
void question_14(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color 7");
	cout << "Now you will be playing for 500000$" << endl;
	cout << "And your question is:" << endl;
	cout << "11.Who is the only British politician to have held all four “Great Offices of State” at some point during their career?" << endl;
	cout << "a.David Lloyd George" << endl;
	cout << "b.Harold Wilson" << endl;
	cout << "c.James Callaghan" << endl;
	cout << "d.John Major" << endl;
	cin >> a;
	switch (a) {
	case 'a': {
		system("color 4");
		cout << "You chose a" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'b': {
		system("color 4");
		cout << "You chose b" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'c': {
		cout << "You chose c" << endl;
		cout << "Congratulations this was the right answer!" << endl;
		cout << "Let's go to the next question" << endl;
		question_14_mid(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	case 'd': {
		system("color 4");
		cout << "You chose d" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case '1': {
		cout << "You chose to ask the audience" << endl;
		m_koino = koino(metritis_koino, metr_koino);
		if (m_koino == 1) {
			cout << "The audience says that the correct answer is c" << endl;
			metritis_koino--;
		}
		else if (m_koino == 10) {
			cout << "Sorry, there are no points left for an audience question" << endl;
		}
		else {
			cout << "The audience says that the correct answer is a" << endl;
			metritis_koino--;
		}
		cout << "What do you think is the answer?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			cout << "You chose c" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_14_mid(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_14(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '2': {
		cout << "You chose to do 50/50" << endl;
		m_50_50 = fifty_fifty(metritis_50_50, metr_50_50);
		if (m_50_50 == 10) {
			cout << "Sorry there are no points left for a 50-50" << endl;
		}
		else {
			cout << "b.Harold Wilson" << endl;
			cout << "c.James Callaghan" << endl;
			metritis_50_50--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			cout << "You chose c" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_14_mid(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_14(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '3': {
		cout << "You chose to call your friend" << endl;
		m_til = til(metritis_til, metr_til);
		if (m_til == 1) {
			cout << "Your friend tells you that the correct answer is c" << endl;
			metritis_til--;
		}
		else if (m_til == 10) {
			cout << "Sorry there are no points left for a telephone" << endl;
		}
		else {
			cout << "Your friend tells you that the correct answer is b" << endl;
			metritis_til--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			cout << "You chose c" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_14_mid(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_14(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	default: {
		system("color 4");
		cout << "It seems that you pressed a wrong key" << endl;
		cout << "Let's go again" << endl;
		question_14(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
void question_13(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color 7");
	cout << "Now you will be playing for 250000$" << endl;
	cout << "And your question is:" << endl;
	cout << "13.Which of these cetaceans is classified as a “toothed whale”?" << endl;
	cout << "a.Sperm whale" << endl;
	cout << "b.Gray whale" << endl;
	cout << "c.Minke whale" << endl;
	cout << "d.Humpback whale" << endl;
	cin >> a;
	switch (a) {
	case 'a': {
		cout << "You chose a" << endl;
		cout << "Congratulations this was the right answer!" << endl;
		cout << "Let's go to the next question" << endl;
		question_14(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	case 'b': {
		system("color 4");
		cout << "You chose b" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'c': {
		system("color 4");
		cout << "You chose c" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'd': {
		system("color 4");
		cout << "You chose d" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case '1': {
		cout << "You chose to ask the audience" << endl;
		m_koino = koino(metritis_koino, metr_koino);
		if (m_koino == 1) {
			cout << "The audience says that the correct answer is a" << endl;
			metritis_koino--;
		}
		else if (m_koino == 10) {
			cout << "Sorry, there are no points left for an audience question" << endl;
		}
		else {
			cout << "The audience says that the correct answer is c" << endl;
			metritis_koino--;
		}
		cout << "What do you think is the answer?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			cout << "You chose a" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_14(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_13(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '2': {
		cout << "You chose to do 50/50" << endl;
		m_50_50 = fifty_fifty(metritis_50_50, metr_50_50);
		if (m_50_50 == 10) {
			cout << "Sorry there are no points left for a 50-50" << endl;
		}
		else {
			cout << "a.Sperm whale" << endl;
			cout << "b.Gray whale" << endl;
			metritis_50_50--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			cout << "You chose a" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_14(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_13(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '3': {
		cout << "You chose to call your friend" << endl;
		m_til = til(metritis_til, metr_til);
		if (m_til == 1) {
			cout << "Your friend tells you that the correct answer is a" << endl;
			metritis_til--;
		}
		else if (m_til == 10) {
			cout << "Sorry there are no points left for a telephone" << endl;
		}
		else {
			cout << "Your friend tells you that the correct answer is b" << endl;
			metritis_til--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			cout << "You chose a" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_14(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_13(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	default: {
		system("color 4");
		cout << "It seems that you pressed a wrong key" << endl;
		cout << "Let's go again" << endl;
		question_13(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
void question_12(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color 7");
	cout << "Now you will be playing for 125000$" << endl;
	cout << "And your question is:" << endl;
	cout << "12.Construction of which of these famous landmarks was completed first?" << endl;
	cout << "a.Empire State Building" << endl;
	cout << "b.Royal Albert Hall" << endl;
	cout << "c.Eiffel Tower" << endl;
	cout << "d.Big Ben Clock Tower" << endl;
	cin >> a;
	switch (a) {
	case 'a': {
		system("color 4");
		cout << "You chose a" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'b': {
		system("color 4");
		cout << "You chose b" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'c': {
		system("color 4");
		cout << "You chose c" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'd': {
		cout << "You chose d" << endl;
		cout << "Congratulations this was the right answer!" << endl;
		cout << "Let's go to the next question" << endl;
		question_13(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	case '1': {
		cout << "You chose to ask the audience" << endl;
		m_koino = koino(metritis_koino, metr_koino);
		if (m_koino == 1) {
			cout << "The audience says that the correct answer is d" << endl;
			metritis_koino--;
		}
		else if (m_koino == 10) {
			cout << "Sorry, there are no points left for an audience question" << endl;
		}
		else {
			cout << "The audience says that the correct answer is c" << endl;
			metritis_koino--;
		}
		cout << "What do you think is the answer?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			cout << "You chose d" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_13(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_12(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '2': {
		cout << "You chose to do 50/50" << endl;
		m_50_50 = fifty_fifty(metritis_50_50, metr_50_50);
		if (m_50_50 == 10) {
			cout << "Sorry there are no points left for a 50-50" << endl;
		}
		else {
			cout << "c.Eiffel Tower" << endl;
			cout << "d.Big Ben Clock Tower" << endl;
			metritis_50_50--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			cout << "You chose d" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_13(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_12(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '3': {
		cout << "You chose to call your friend" << endl;
		m_til = til(metritis_til, metr_til);
		if (m_til == 1) {
			cout << "Your friend tells you that the correct answer is d" << endl;
			metritis_til--;
		}
		else if (m_til == 10) {
			cout << "Sorry there are no points left for a telephone" << endl;
		}
		else {
			cout << "Your friend tells you that the correct answer is b" << endl;
			metritis_til--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			cout << "You chose d" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_13(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_12(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	default: {
		system("color 4");
		cout << "It seems that you pressed a wrong key" << endl;
		cout << "Let's go again" << endl;
		question_12(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
void question_11(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color 7");
	cout << "Now you will be playing for 64000$" << endl;
	cout << "And your question is:" << endl;
	cout << "11.At the closest point, which island group is only 50 miles south-east of the coast of Florida?" << endl;
	cout << "a.Bahamas *" << endl;
	cout << "b.US Virgin Islands" << endl;
	cout << "c.Turksand Caicos Islands" << endl;
	cout << "d.Bermuda" << endl;
	cin >> a;
	switch (a) {
	case 'a': {
		cout << "You chose a" << endl;
		cout << "Congratulations this was the right answer!" << endl;
		cout << "Let's go to the next question" << endl;
		question_12(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	case 'b': {
		system("color 4");
		cout << "You chose b" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'c': {
		system("color 4");
		cout << "You chose c" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'd': {
		system("color 4");
		cout << "You chose c" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case '1': {
		cout << "You chose to ask the audience" << endl;
		m_koino = koino(metritis_koino, metr_koino);
		if (m_koino == 1) {
			cout << "The audience says that the correct answer is a" << endl;
			metritis_koino--;
		}
		else if (m_koino == 10) {
			cout << "Sorry, there are no points left for an audience question" << endl;
		}
		else {
			cout << "The audience says that the correct answer is d" << endl;
			metritis_koino--;
		}
		cout << "What do you think is the answer?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			cout << "You chose a" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_12(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_11(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '2': {
		cout << "You chose to do 50/50" << endl;
		m_50_50 = fifty_fifty(metritis_50_50, metr_50_50);
		if (m_50_50 == 10) {
			cout << "Sorry there are no points left for a 50-50" << endl;
		}
		else {
			cout << "a.Bahamas" << endl;
			cout << "d.Bermuda" << endl;
			metritis_50_50--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			cout << "You chose a" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_12(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_11(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '3': {
		cout << "You chose to call your friend" << endl;
		m_til = til(metritis_til, metr_til);
		if (m_til == 1) {
			cout << "Your friend tells you that the correct answer is a" << endl;
			metritis_til--;
		}
		else if (m_til == 10) {
			cout << "Sorry there are no points left for a telephone" << endl;
		}
		else {
			cout << "Your friend tells you that the correct answer is b" << endl;
			metritis_til--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			cout << "You chose a" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_12(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_11(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	default: {
		system("color 4");
		cout << "It seems that you pressed a wrong key" << endl;
		cout << "Let's go again" << endl;
		question_11(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
void question_10(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color 7");
	cout << "Now you will be playing for 32000$" << endl;
	cout << "And your question is:" << endl;
	cout << "10.Which of these religious observances lasts for the shortest period of time during the calendar year?" << endl;
	cout << "a.Ramadan" << endl;
	cout << "b.Diwali" << endl;
	cout << "c.Lent" << endl;
	cout << "d.Hanukkah" << endl;
	cin >> a;
	switch (a) {
	case 'a': {
		system("color 4");
		cout << "You chose a" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'b': {
		cout << "You chose b" << endl;
		cout << "Congratulations this was the right answer!" << endl;
		cout << "Let's go to the next question" << endl;
		question_11(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	case 'c': {
		system("color 4");
		cout << "You chose c" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'd': {
		system("color 4");
		cout << "You chose d" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case '1': {
		cout << "You chose to ask the audience" << endl;
		m_koino = koino(metritis_koino, metr_koino);
		if (m_koino == 1) {
			cout << "The audience says that the correct answer is b" << endl;
			metritis_koino--;
		}
		else if (m_koino == 10) {
			cout << "Sorry, there are no points left for an audience question" << endl;
		}
		else {
			cout << "The audience says that the correct answer is a" << endl;
			metritis_koino--;
		}
		cout << "What do you think is the answer?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			cout << "You chose b" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_11(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_10(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '2': {
		cout << "You chose to do 50/50" << endl;
		m_50_50 = fifty_fifty(metritis_50_50, metr_50_50);
		if (m_50_50 == 10) {
			cout << "Sorry there are no points left for a 50-50" << endl;
		}
		else {
			cout << "b.Diwali" << endl;
			cout << "d.Hanukkah" << endl;
			metritis_50_50--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'b': {
			cout << "You chose b" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_11(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_10(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '3': {
		cout << "You chose to call your friend" << endl;
		m_til = til(metritis_til, metr_til);
		if (m_til == 1) {
			cout << "Your friend tells you that the correct answer is b" << endl;
			metritis_til--;
		}
		else if (m_til == 10) {
			cout << "Sorry there are no points left for a telephone" << endl;
		}
		else {
			cout << "Your friend tells you that the correct answer is a" << endl;
			metritis_til--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			cout << "You chose b" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_11(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_10(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	default: {
		system("color 4");
		cout << "It seems that you pressed a wrong key" << endl;
		cout << "Let's go again" << endl;
		question_10(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
void question_9_mid(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color 7");
	cout << "You are about to go to the 10th question" << endl;
	cout << "You now have 1600$" << endl;
	cout << "You can leave with this quantity, or you can continue the game" << endl;
	cout << "But be careful, if you lose afterwards, ou will lose all your money" << endl;
	cout << "What do you chose?" << endl;
	cout << "Press 1 to continue, or press 2 to exit with 1600$" << endl;
	cin >> a;
	switch (a) {
	case '1': {
		cout << "Ok, then. Let's continue" << endl;
		question_10(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	case '2': {
		system("color 4");
		cout << "Ok, then. You chose to leave with 1600$. Have a nice day" << endl;
		break;
	}
	default: {
		system("color 4");
		cout << "It seems that you pressed a wrong key" << endl;
		cout << "Let's go again" << endl;
		question_9_mid(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
void question_9(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color 7");
	cout << "Now you will be playing for 16000$" << endl;
	cout << "And your question is:" << endl;
	cout << "9.In Doctor Who, what was the signature look of the fourth Doctor, as portrayed by Tom Baker?" << endl;
	cout << "a.Bow - tie, bracesand tweed jacket" << endl;
	cout << "b.Wide - brimmed hat and extra long scarf" << endl;
	cout << "c.Pinstripe suit and trainers" << endl;
	cout << "d.Cape, velvet jacketand frilly shirt" << endl;
	cin >> a;
	switch (a) {
	case 'a': {
		system("color 4");
		cout << "You chose a" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'b': {
		cout << "You chose b" << endl;
		cout << "Congratulations this was the right answer!" << endl;
		cout << "Let's go to the next question" << endl;
		question_9_mid(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	case 'c': {
		system("color 4");
		cout << "You chose c" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'd': {
		system("color 4");
		cout << "You chose d" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case '1': {
		cout << "You chose to ask the audience" << endl;
		m_koino = koino(metritis_koino, metr_koino);
		if (m_koino == 1) {
			cout << "The audience says that the correct answer is b" << endl;
			metritis_koino--;
		}
		else if (m_koino == 10) {
			cout << "Sorry, there are no points left for an audience question" << endl;
		}
		else {
			cout << "The audience says that the correct answer is a" << endl;
			metritis_koino--;
		}
		cout << "What do you think is the answer?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			cout << "You chose b" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_9_mid(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_9(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '2': {
		cout << "You chose to do 50/50" << endl;
		m_50_50 = fifty_fifty(metritis_50_50, metr_50_50);
		if (m_50_50 == 10) {
			cout << "Sorry there are no points left for a 50-50" << endl;
		}
		else {
			cout << "a.Bow - tie, bracesand tweed jacket" << endl;
			cout << "b.Wide - brimmed hat and extra long scarf" << endl;
			metritis_50_50--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			cout << "You chose b" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_9_mid(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_9(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '3': {
		cout << "You chose to call your friend" << endl;
		m_til = til(metritis_til, metr_til);
		if (m_til == 1) {
			cout << "Your friend tells you that the correct answer is b" << endl;
			metritis_til--;
		}
		else if (m_til == 10) {
			cout << "Sorry there are no points left for a telephone" << endl;
		}
		else {
			cout << "Your friend tells you that the correct answer is c" << endl;
			metritis_til--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			cout << "You chose b" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_9_mid(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_9(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	default: {
		system("color 4");
		cout << "It seems that you pressed a wrong key" << endl;
		cout << "Let's go again" << endl;
		question_9(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
void question_8(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color 7");
	cout << "Now you will be playing for 8000$" << endl;
	cout << "And your question is:" << endl;
	cout << "8.Obstetrics is a branch of medicine particularly concerned with what?" << endl;
	cout << "a.Childbirth" << endl;
	cout << "b.Broken bones" << endl;
	cout << "c.Heart conditions" << endl;
	cout << "d.Old age" << endl;
	cin >> a;
	switch (a) {
	case 'a': {
		cout << "You chose a" << endl;
		cout << "Congratulations this was the right answer!" << endl;
		cout << "Let's go to the next question" << endl;
		question_9(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	case 'b': {
		system("color 4");
		cout << "You chose b" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'c': {
		system("color 4");
		cout << "You chose c" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'd': {
		system("color 4");
		cout << "You chose d" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case '1': {
		cout << "You chose to ask the audience" << endl;
		m_koino = koino(metritis_koino, metr_koino);
		if (m_koino == 1) {
			cout << "The audience says that the correct answer is a" << endl;
			metritis_koino--;
		}
		else if (m_koino == 10) {
			cout << "Sorry, there are no points left for an audience question" << endl;
		}
		else {
			cout << "The audience says that the correct answer is d" << endl;
			metritis_koino--;
		}
		cout << "What do you think is the answer?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			cout << "You chose a" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_9(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_8(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '2': {
		cout << "You chose to do 50/50" << endl;
		m_50_50 = fifty_fifty(metritis_50_50, metr_50_50);
		if (m_50_50 == 10) {
			cout << "Sorry there are no points left for a 50-50" << endl;
		}
		else {
			cout << "a.Childbirth" << endl;
			cout << "c.Heart conditions" << endl;
			metritis_50_50--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			cout << "You chose a" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_9(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_8(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '3': {
		cout << "You chose to call your friend" << endl;
		m_til = til(metritis_til, metr_til);
		if (m_til == 1) {
			cout << "Your friend tells you that the correct answer is a" << endl;
			metritis_til--;
		}
		else if (m_til == 10) {
			cout << "Sorry there are no points left for a telephone" << endl;
		}
		else {
			cout << "Your friend tells you that the correct answer is c" << endl;
			metritis_til--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			cout << "You chose a" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_9(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_8(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	default: {
		system("color 4");
		cout << "It seems that you pressed a wrong key" << endl;
		cout << "Let's go again" << endl;
		question_8(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
void question_7(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color 7");
	cout << "Now you will be playing for 4000$" << endl;
	cout << "And your question is:" << endl;
	cout << "7.What does the word loquacious mean?" << endl;
	cout << "a.Angry" << endl;
	cout << "b.Chatty" << endl;
	cout << "c.Beautiful" << endl;
	cout << "d.Shy" << endl;
	cin >> a;
	switch (a) {
	case 'a': {
		system("color 4");
		cout << "You chose a" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'b': {
		cout << "You chose b" << endl;
		cout << "Congratulations this was the right answer!" << endl;
		cout << "Let's go to the next question" << endl;
		question_8(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	case 'c': {
		system("color 4");
		cout << "You chose c" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'd': {
		system("color 4");
		cout << "You chose d" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case '1': {
		cout << "You chose to ask the audience" << endl;
		m_koino = koino(metritis_koino, metr_koino);
		if (m_koino == 1) {
			cout << "The audience says that the correct answer is b" << endl;
			metritis_koino--;
		}
		else if (m_koino == 10) {
			cout << "Sorry, there are no points left for an audience question" << endl;
		}
		else {
			cout << "The audience says that the correct answer is a" << endl;
			metritis_koino--;
		}
		cout << "What do you think is the answer?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			cout << "You chose b" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_8(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_7(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '2': {
		cout << "You chose to do 50/50" << endl;
		m_50_50 = fifty_fifty(metritis_50_50, metr_50_50);
		if (m_50_50 == 10) {
			cout << "Sorry there are no points left for a 50-50" << endl;
		}
		else {
			cout << "b.Chatty" << endl;
			cout << "c.Beautiful" << endl;
			metritis_50_50--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'b': {
			cout << "You chose b" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_8(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_7(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '3': {
		cout << "You chose to call your friend" << endl;
		m_til = til(metritis_til, metr_til);
		if (m_til == 1) {
			cout << "Your friend tells you that the correct answer is b" << endl;
			metritis_til--;
		}
		else if (m_til == 10) {
			cout << "Sorry there are no points left for a telephone" << endl;
		}
		else {
			cout << "Your friend tells you that the correct answer is c" << endl;
			metritis_til--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			cout << "You chose b" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_8(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_7(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	default: {
		system("color 4");
		cout << "It seems that you pressed a wrong key" << endl;
		cout << "Let's go again" << endl;
		question_7(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
void question_6(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color 7");
	cout << "Now you will be playing for 2000$" << endl;
	cout << "And your question is:" << endl;
	cout << "6.Which toys have been marketed with the phrase “robots in disguise”?" << endl;
	cout << "a.Bratz Dolls" << endl;
	cout << "b.Sylvanian Families" << endl;
	cout << "c.Hatchimals" << endl;
	cout << "d.Transformers" << endl;
	cin >> a;
	switch (a) {
	case 'a': {
		system("color 4");
		cout << "You chose a" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'b': {
		system("color 4");
		cout << "You chose b" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'c': {
		system("color 4");
		cout << "You chose c" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'd': {
		cout << "You chose d" << endl;
		cout << "Congratulations this was the right answer!" << endl;
		cout << "Let's go to the next question" << endl;
		question_7(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	case '1': {
		cout << "You chose to ask the audience" << endl;
		m_koino = koino(metritis_koino, metr_koino);
		if (m_koino == 1) {
			cout << "The audience says that the correct answer is d" << endl;
			metritis_koino--;
		}
		else if (m_koino == 10) {
			cout << "Sorry, there are no points left for an audience question" << endl;
		}
		else {
			cout << "The audience says that the correct answer is a" << endl;
			metritis_koino--;
		}
		cout << "What do you think is the answer?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			cout << "You chose d" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_7(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_6(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '2': {
		cout << "You chose to do 50/50" << endl;
		m_50_50 = fifty_fifty(metritis_50_50, metr_50_50);
		if (m_50_50 == 10) {
			cout << "Sorry there are no points left for a 50-50" << endl;
		}
		else {
			cout << "c.Hatchimals" << endl;
			cout << "d.Transformers " << endl;
			metritis_50_50--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			cout << "You chose d" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_7(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_6(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '3': {
		cout << "You chose to call your friend" << endl;
		m_til = til(metritis_til, metr_til);
		if (m_til == 1) {
			cout << "Your friend tells you that the correct answer is d" << endl;
			metritis_til--;
		}
		else if (m_til == 10) {
			cout << "Sorry there are no points left for a telephone" << endl;
		}
		else {
			cout << "Your friend tells you that the correct answer is c" << endl;
			metritis_til--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			cout << "You chose d" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_7(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_6(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	default: {
		system("color 4");
		cout << "It seems that you pressed a wrong key" << endl;
		cout << "Let's go again" << endl;
		question_6(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
void question_5(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color 7");
	cout << "Now you will be playing for 1000$" << endl;
	cout << "And your question is:" << endl;
	cout << "5.The hammer and sickle is one of the most recognisable symbols of which political ideology?" << endl;
	cout << "a.Republicanism" << endl;
	cout << "b.Communism" << endl;
	cout << "c.Conservatism" << endl;
	cout << "d.Liberalism" << endl;
	cin >> a;
	switch (a) {
	case 'a': {
		system("color 4");
		cout << "You chose a" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'b': {
		cout << "You chose b" << endl;
		cout << "Congratulations this was the right answer!" << endl;
		cout << "Let's go to the next question" << endl;
		question_6(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	case 'c': {
		system("color 4");
		cout << "You chose c" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'd': {
		system("color 4");
		cout << "You chose d" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case '1': {
		cout << "You chose to ask the audience" << endl;
		m_koino = koino(metritis_koino, metr_koino);
		if (m_koino == 1) {
			cout << "The audience says that the correct answer is b" << endl;
			metritis_koino--;
		}
		else if (m_koino == 10) {
			cout << "Sorry, there are no points left for an audience question" << endl;
		}
		else {
			cout << "The audience says that the correct answer is d" << endl;
			metritis_koino--;
		}
		cout << "What do you think is the answer?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			cout << "You chose b" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_6(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_5(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '2': {
		cout << "You chose to do 50/50" << endl;
		m_50_50 = fifty_fifty(metritis_50_50, metr_50_50);
		if (m_50_50 == 10) {
			cout << "Sorry there are no points left for a 50-50" << endl;
		}
		else {
			cout << "a.Republicanism" << endl;
			cout << "b.Communism" << endl;
			metritis_50_50--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			cout << "You chose b" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_6(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_5(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '3': {
		cout << "You chose to call your friend" << endl;
		m_til = til(metritis_til, metr_til);
		if (m_til == 1) {
			cout << "Your friend tells you that the correct answer is b" << endl;
			metritis_til--;
		}
		else if (m_til == 10) {
			cout << "Sorry there are no points left for a telephone" << endl;
		}
		else {
			cout << "Your friend tells you that the correct answer is c" << endl;
			metritis_til--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			cout << "You chose b" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_6(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_5(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	default: {
		system("color 4");
		cout << "It seems that you pressed a wrong key" << endl;
		cout << "Let's go again" << endl;
		question_5(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
void question_4_mid(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color 7");
	cout << "You are about to go to the 5ft question" << endl;
	cout << "You now have 500$" << endl;
	cout << "You can leave with this quantity, or you can continue the game" << endl;
	cout << "But be careful, if you lose afterwards, ou will lose all your money" << endl;
	cout << "What do you chose?" << endl;
	cout << "Press 1 to continue, or press 2 to exit with 500$" << endl;
	cin >> a;
	switch (a) {
	case '1': {
		cout << "Ok, then. Let's continue" << endl;
		question_5(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	case '2': {
		system("color E");
		cout << "Ok, then. You chose to leave with 500$. Have a nice day" << endl;
		break;
	}
	default: {
		system("color 4");
		cout << "It seems that you pressed a wrong key" << endl;
		cout << "Let's go again" << endl;
		question_4_mid(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
void question_4(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color 7");
	cout << "Now you will be playing for 500$" << endl;
	cout << "And your question is:" << endl;
	cout << "4.Which of these brands was chiefly associated with the manufacture of household locks?" << endl;
	cout << "a.Phillips" << endl;
	cout << "b.Flymo" << endl;
	cout << "c.Chubb" << endl;
	cout << "d.Ronseal" << endl;
	cin >> a;
	switch (a) {
	case 'a': {
		system("color 4");
		cout << "You chose a" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'b': {
		system("color 4");
		cout << "You chose b" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'c': {
		cout << "You chose c" << endl;
		cout << "Congratulations this was the right answer!" << endl;
		cout << "Let's go to the next question" << endl;
		question_4_mid(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	case 'd': {
		system("color 4");
		cout << "You chose d" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case '1': {
		cout << "You chose to ask the audience" << endl;
		m_koino = koino(metritis_koino, metr_koino);
		if (m_koino == 1) {
			cout << "The audience says that the correct answer is c" << endl;
			metritis_koino--;
		}
		else if (m_koino == 10) {
			cout << "Sorry, there are no points left for an audience question" << endl;
		}
		else {
			cout << "The audience says that the correct answer is d" << endl;
			metritis_koino--;
		}
		cout << "What do you think is the answer?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			cout << "You chose c" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_4_mid(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_4(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '2': {
		cout << "You chose to do 50/50" << endl;
		m_50_50 = fifty_fifty(metritis_50_50, metr_50_50);
		if (m_50_50 == 10) {
			cout << "Sorry there are no points left for a 50-50" << endl;
		}
		else {
			cout << "a.Ronseal" << endl;
			cout << "c.Chubb" << endl;
			metritis_50_50--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			cout << "You chose c" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_4_mid(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_4(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '3': {
		cout << "You chose to call your friend" << endl;
		m_til = til(metritis_til, metr_til);
		if (m_til == 1) {
			cout << "Your friend tells you that the correct answer is c" << endl;
			metritis_til--;
		}
		else if (m_til == 10) {
			cout << "Sorry there are no points left for a telephone" << endl;
		}
		else {
			cout << "Your friend tells you that the correct answer is d" << endl;
			metritis_til--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			cout << "You chose c" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_4_mid(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_4(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	default: {
		system("color 4");
		cout << "It seems that you pressed a wrong key" << endl;
		cout << "Let's go again" << endl;
		question_4(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
void question_3(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color 7");
	cout << "Now you will be playing for 300$" << endl;
	cout << "And your question is:" << endl;
	cout << "3.What name is given to the revolving belt machinery in an airport that delivers checked luggage from the plane to baggage reclaim?" << endl;
	cout << "a.Hangar" << endl;
	cout << "b.Terminal" << endl;
	cout << "c.Concourse" << endl;
	cout << "d.Carousel" << endl;
	cin >> a;
	switch (a) {
	case 'a': {
		system("color 4");
		cout << "You chose a" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'b': {
		system("color 4");
		cout << "You chose b" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'c': {
		system("color 4");
		cout << "You chose c" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'd': {
		cout << "You chose d" << endl;
		cout << "Congratulations this was the right answer!" << endl;
		cout << "Let's go to the next question" << endl;
		question_4(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	case '1': {
		cout << "You chose to ask the audience" << endl;
		m_koino = koino(metritis_koino, metr_koino);
		if (m_koino == 1) {
			cout << "The audience says that the correct answer is d" << endl;
			metritis_koino--;
		}
		else if (m_koino == 10) {
			cout << "Sorry, there are no points left for an audience question" << endl;
		}
		else {
			cout << "The audience says that the correct answer is a" << endl;
			metritis_koino--;
		}
		cout << "What do you think is the answer?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			cout << "You chose d" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_4(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_3(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '2': {
		cout << "You chose to do 50/50" << endl;
		m_50_50 = fifty_fifty(metritis_50_50, metr_50_50);
		if (m_50_50 == 10) {
			cout << "Sorry there are no points left for a 50-50" << endl;
		}
		else {
			cout << "c.Concourse" << endl;
			cout << "d.Carousel" << endl;
			metritis_50_50--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			cout << "You chose d" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_4(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_3(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '3': {
		cout << "You chose to call your friend" << endl;
		m_til = til(metritis_til, metr_til);
		if (m_til == 1) {
			cout << "Your friend tells you that the correct answer is d" << endl;
			metritis_til--;
		}
		else if (m_til == 10) {
			cout << "Sorry there are no points left for a telephone" << endl;
		}
		else {
			cout << "Your friend tells you that the correct answer is c" << endl;
			metritis_til--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			cout << "You chose d" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_4(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_3(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	default: {
		system("color 4");
		cout << "It seems that you pressed a wrong key" << endl;
		cout << "Let's go again" << endl;
		question_3(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
void question_2(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color 7");
	cout << "Now you will be playing for 200$" << endl;
	cout << "And your question is:" << endl;
	cout << "2.Which Disney character famously leaves a glass slipper behind at a royal ball?" << endl;
	cout << "a.Pocahontas" << endl;
	cout << "b.Sleeping Beauty" << endl;
	cout << "c.Cinderella" << endl;
	cout << "d.Elsa" << endl;
	cin >> a;
	switch (a) {
	case 'a': {
		system("color 4");
		cout << "You chose a" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'b': {
		system("color 4");
		cout << "You chose b" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'c': {
		cout << "You chose c" << endl;
		cout << "Congratulations this was the right answer!" << endl;
		cout << "Let's go to the next question" << endl;
		question_3(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	case 'd': {
		system("color 4");
		cout << "You chose d" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case '1': {
		cout << "You chose to ask the audience" << endl;
		m_koino = koino(metritis_koino, metr_koino);
		if (m_koino == 1) {
			cout << "The audience says that the correct answer is c" << endl;
			metritis_koino--;
		}
		else if (m_koino == 10) {
			cout << "Sorry, there are no points left for an audience question" << endl;
		}
		else {
			cout << "The audience says that the correct answer is a" << endl;
			metritis_koino--;
		}
		cout << "What do you think is the answer?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			cout << "You chose c" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_3(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_2(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '2': {
		cout << "You chose to do 50/50" << endl;
		m_50_50 = fifty_fifty(metritis_50_50, metr_50_50);
		if (m_50_50 == 10) {
			cout << "Sorry there are no points left for a 50-50" << endl;
		}
		else {
			cout << "b.Sleeping Beauty" << endl;
			cout << "c.Cinderella" << endl;
			metritis_50_50--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			cout << "You chose c" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_3(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_2(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '3': {
		cout << "You chose to call your friend" << endl;
		m_til = til(metritis_til, metr_til);
		if (m_til == 1) {
			cout << "Your friend tells you that the correct answer is c" << endl;
			metritis_til--;
		}
		else if (m_til == 10) {
			cout << "Sorry there are no points left for a telephone" << endl;
		}
		else {
			cout << "Your friend tells you that the correct answer is b" << endl;
			metritis_til--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			system("color 4");
			cout << "You chose b" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'c': {
			cout << "You chose c" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_3(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_2(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	default: {
		system("color 4");
		cout << "It seems that you pressed a wrong key" << endl;
		cout << "Let's go again" << endl;
		question_2(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
void question_1(int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, char a, int m_koino, int m_50_50, int m_til, int time) {
	system("color 7");
	cout << "Remember, you can get an answer from the audience, you can get a 50/50, or you can call a friend" << endl;
	cout << "You have only 1 use per help. You can access those functions if you type: " << endl;
	cout << "1 for the audience " << endl << "2 for the 50/50 " << endl << "3 for a friend call" << endl;
	cout << "Let's begin our game." << endl << "You are now playing for 0 dollars." << endl;
	cout << "And your question is:" << endl;
	cout << "1.In the UK, the abbreviation NHS stands for National what Service?" << endl;
	cout << "a.Humanity" << endl;
	cout << "b.Health" << endl;
	cout << "c.Honour" << endl;
	cout << "d.Household" << endl;
	cin >> a;
	switch (a) {
	case 'a': {
		system("color 4");
		cout << "You chose a" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'b': {
		cout << "You chose b" << endl;
		cout << "Congratulations this was the right answer!" << endl;
		cout << "Let's go to the next question" << endl;
		question_2(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	case 'c': {
		system("color 4");
		cout << "You chose c" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case 'd': {
		system("color 4");
		cout << "You chose d" << endl;
		cout << "Unfortunately it is wrong and you don't win anything" << endl;
		break;
	}
	case '1': {
		cout << "You chose to ask the audience" << endl;
		m_koino = koino(metritis_koino, metr_koino);
		if (m_koino == 1) {
			cout << "The audience says that the correct answer is b" << endl;
			metritis_koino--;
		}
		else if (m_koino == 10) {
			cout << "Sorry, there are no points left for an audience question" << endl;
		}
		else {
			cout << "The audience says that the correct answer is a" << endl;
			metritis_koino--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			cout << "You chose b" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_2(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_1(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '2': {
		cout << "You chose to do 50/50" << endl;
		m_50_50 = fifty_fifty(metritis_50_50, metr_50_50);
		if (m_50_50 == 10) {
			cout << "Sorry there are no points left for a 50-50" << endl;
		}
		else {
			cout << "b.Health" << endl;
			cout << "d.Household" << endl;
			metritis_50_50--;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'b': {
			cout << "You chose b" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_2(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_1(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	case '3': {
		cout << "You chose to call your friend" << endl;
		m_til = til(metritis_til, metr_til);
		if (m_til == 1) {
			cout << "Your friend tells you that the correct answer is b" << endl;
			metritis_til--;
		}
		else if (m_til == 10) {
			cout << "Sorry there are no points left for a telephone" << endl;
		}
		else {
			metritis_til--;
			cout << "Your friend tells you that the correct answer is c" << endl;
		}
		cout << "What do you chose now?" << endl;
		cin >> a;
		switch (a) {
		case 'a': {
			system("color 4");
			cout << "You chose a" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'b': {
			cout << "You chose b" << endl;
			cout << "Congratulations this was the right answer!" << endl;
			cout << "Let's go to the next question" << endl;
			question_2(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		case 'c': {
			system("color 4");
			cout << "You chose c" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		case 'd': {
			system("color 4");
			cout << "You chose d" << endl;
			cout << "Unfortunately it is wrong and you don't win anything" << endl;
			break;
		}
		default: {
			system("color 4");
			cout << "It seems that you pressed a wrong key" << endl;
			cout << "Let's go again" << endl;
			question_1(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
			break;
		}
		}
		break;
	}
	default: {
		system("color 4");
		cout << "It seems that you pressed a wrong key" << endl;
		cout << "Let's go again" << endl;
		question_1(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
void ask_again(char start, char a, int metritis_koino, int metr_koino, int metritis_50_50, int metr_50_50, int metritis_til, int metr_til, int m_koino, int m_50_50, int m_til, int time) {
	system("color 4");
	cout << "It seems that you typed wrong" << endl;
	cout << "Type begin again so we can start" << endl;
	cin >> start;
	switch (start) {
	case '1': {
		cout << "Ok, let's begin with the first question" << endl;
		question_1(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	default: {
		ask_again(start, metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
int main()
{
	system("color 7");
	int time = 0;
	char start;
	char a = 0;
	int metritis_koino = 1, metritis_50_50 = 1, metritis_til = 1;
	int metr_koino = 1, metr_50_50 = 1, metr_til = 1;
	int m_koino = 1, m_50_50 = 1, m_til = 1;
	cout << "Welcome to Who wants to be a Millionare?" << endl;
	cout << "To start, type 1" << endl;
	cin >> start;
	switch (start) {
	case '1': {
		cout << "Ok, let's begin with the first question" << endl;
		question_1(metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, a, m_koino, m_50_50, m_til, time);
		break;
	}
	default: {
		ask_again(start, a, metritis_koino, metr_koino, metritis_50_50, metr_50_50, metritis_til, metr_til, m_koino, m_50_50, m_til, time);
		break;
	}
	}
}
int koino(int metritis_koino, int metr_koino) {
	if (metritis_koino == 1) {
		srand(time(NULL));
		metr_koino = rand() % 2 + 1;
		return metr_koino;
	}
	else {
		metr_koino = 10;
		return metr_koino;
	}
}
int fifty_fifty(int metritis_50_50, int metr_50_50) {
	if (metritis_50_50 == 1) {
		srand(time(NULL));
		metr_50_50 = rand() % 2 + 1;
		return metr_50_50;
	}
	else {
		metr_50_50 = 10;
		return metr_50_50;
	}
}
int til(int metritis_til, int metr_til) {
	if (metritis_til == 1) {
		srand(time(NULL));
		metr_til = rand() % 2 + 1;
		return metr_til;
	}
	else {
		metr_til = 10;
		return metr_til;
	}
}