#pragma once
#include <iostream>
using namespace std;

class ProgramFrame
{
protected:
    virtual void StartMessage(ostream&) = 0;
    virtual void Input(istream&) = 0;
    virtual bool Check() = 0;
    virtual void ErrorMessage(ostream&);
    virtual void Output(ostream&) = 0;
    virtual void Process() = 0;
    virtual bool Continue(istream&, ostream&);
public:
    void Run(istream&, ostream&);
};

