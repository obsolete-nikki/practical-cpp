#include <iostream>
#include <string>
using namespace std;

void ctr() {
	string retail = "CTR-001";
	string retailxl = "SPR-001";
	string newretail = "KTR-001";
	string newretailxl = "RED-001";
	string tworetail = "FTR-001";
	string newtworetailxl = "JAN-001";
	string model;

		cout << "Please enter your model number: ";
		cin >> model;
		cout << "\n";

		if (model == retail) {
			cout << "This is a Nintendo 3DS system.\n\n";
		}
		else if (model == retailxl) {
			cout << "This is a Nintendo 3DS XL/LL system.\n\n";
		}
		else if (model == newretail) {
			cout << "This is a New Nintendo 3DS system.\n\n";
		}
		else if (model == newretailxl) {
			cout << "This is a New Nintendo 3DS XL/LL system.\n\n";
		}
		else if (model == tworetail) {
			cout << "This is a Nintendo 2DS system.\n\n";
		}
		else if (model == newtworetailxl) {
			cout << "This is a New Nintendo 2DS XL/LL system.\n\n";
		}
		else {
			cout << "This Nintendo Switch system is not recognised.\n\n";
		}

}

void wiiu() {
	string retail = "WUP-001";
	string gamepad = "WUP-010";
	string procontr = "WUP-005";
	string catdev = "WUT-001";
	string catr = "WUT-002";
	string anatel = "WUT-011";
	string model;

		cout << "Please enter your model number: ";
		cin >> model;
		cout << "\n";

		if (model == retail) {
			cout << "This is a Nintendo Wii U system.\n\n";
		}
		else if (model == gamepad) {
			cout << "This is a Wii U gamepad.\n\n";
		}
		else if (model == procontr) {
			cout << "This is a Wii U Pro Controller.\n\n";
		}
		else if (model == catdev) {
			cout << "This is a Wii U CAT-DEV development system.\n\n";
		}
		else if (model == catr) {
			cout << "This is a Wii U CAT-R development system.\n\n";
		}
		else if (model == anatel) {
			cout << "This is an Anatel Cafe Reader development system.\n\n";
		}
		else {
			cout << "This WiiU system is not recognised.\n\n";
		}

}

void nswitch() {
	string retail = "HAC-001";
	string sdev = "HAT-001";
	string edev = "HAT-002";
	string oledretail = "HEG-001";
	string model;

		cout << "Please enter your model number: ";
		cin >> model;
		cout << "\n";

		if (model == retail) {
			cout << "This is a Nintendo Switch system.\n\n";
		}
		else if (model == sdev) {
			cout << "This is a Nintendo Switch SDEV Development Kit.\n\n";
		}
		else if (model == edev) {
			cout << "This is a Nintendo Switch EDEV Development Kit.\n\n";
		}
		else if (model == oledretail) {
			cout << "This is a Nintendo Switch OLED Model system.\n\n";
		}
		else {
			cout << "This Nintendo 3DS system is not recognised.\n\n";
		}

}

int main() {

	cout << "\n\n    This is a test program intended to identify\nNintendo 3DS, Switch and Wii U systems by their model number.\n\n           ----- Written by Nikki -----\n\n";

	while (true) {
		string type;
		string decision;
		cout << "Please enter your console type (3DS/Switch/WiiU): ";
		cin >> type;
		cout << "\n";

		if (type == "3DS") {
            ctr();
		} else if (type == "Switch") {
            nswitch();
		} else if (type == "WiiU") {
            wiiu();
		} else if (type == "switch") {
            nswitch();
		} else if (type == "wiiu") {
            wiiu();
		} else if (type == "3ds") {
            ctr();
		} else {
            cout << "Unrecognised system.\n\n";
		}

        cout << "Enter another? (y/n)\n\n";
		cin >> decision;
		if (decision == "y") {
			cout << "\n";
		}
		else if (decision == "n") {
			cout << "\n";
			break;
		}
		else {
			cout << "\n";
			break;
		}
	}

	cout << "Thank you for using this program.\n\n";

    return 0;
}
