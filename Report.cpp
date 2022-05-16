#include "Report.h"

Report::Report()
{
	for (int i = 0; i < SIZE8; i++) {
		pay[i] = 0;
	}

	for (int i = 0; i < SIZE9; i++) {
		order[i] = 0;
	}
}

Report::Report(PaymentDetails* payRep, Order* orderRep)
{
	for (int i = 0; i < SIZE8; i++) {
		pay[i] = payRep;
	}

	for (int i = 0; i < SIZE8; i++) {
		order[i] = orderRep;
	}

}

void Report::PaymentDetailsReport()
{
	cout << "Get payment details report" << endl;
}

void Report::OrderDetailsReport()
{
	cout << "Get order details report" << endl;
}

Report::~Report()
{
	for (int i = 0; i < SIZE8; i++) {
		delete pay[i] ;
	}

	for (int i = 0; i < SIZE8; i++) {
		delete order[i];
	}
}
