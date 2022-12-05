#include "ProgramFrame.h"

void ProgramFrame::ErrorMessage(ostream& os) {
	os << "Input data error ! " << endl;
}

bool ProgramFrame::Continue(istream& is, ostream& os) {
	os << "Press y to continue, others to stop : ";
	char ch;  is >> ch;
	return (ch == 'Y' || ch == 'y');
}

void ProgramFrame::Run(istream& is, ostream& os) {
    bool b = true;
    do {
        StartMessage(os);
        Input(is);
        if (!Check()) {
            ErrorMessage(os);
            continue;
        }
        Process();
        Output(os);
        b = Continue(is, os);
    } while (b);
}