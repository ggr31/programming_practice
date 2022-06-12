#ifndef CALCULATOR_H
#define CALCULATOR_H


class calculator
{
    public:
        calculator();
        void result ();
        virtual ~calculator();

        float Getfirst_number() { return first_number; }
        float Getsecond_number() { return second_number; }

        float sum();
        float subtract();
        float multiply();
        float divide();
    protected:

    private:
        float first_number;
        float second_number;
};

#endif // CALCULATOR_H
