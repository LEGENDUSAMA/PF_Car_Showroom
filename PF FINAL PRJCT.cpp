#include <iostream>
using namespace std;
int main()
{
	int Quantity , Rate, Discount, Total_amount, Payable_amount;
	cout << "\t\t\t\t\tVehicles Basic & Payment Information" << endl << endl;
	cout << "Press 1 for Available Cars" << endl;

	int(z);
	cin >> z;

	switch (z)
	{
	case 1:
		cout << "Press 1 for Honda" << endl;
		cout << "Press 2 for Audi" << endl;
		cout << "Press 3 for Nissan" << endl;
		cout << "Press 4 for Porsche" << endl;
		cout << "Press 5 for Bugatti" << endl;
		cout << "Press 6 for Toyota" << endl;
		cout << "Press 7 for Lexus" << endl;
		cout << "Press 8 for Rolls Royce" << endl;

		int(z);
		cin >> z;
		switch (z)
		{
		case 1:
			cout << "Press 1 for Honda Engine No And Power" << endl;
			cout << "Press 2 for Honda Chassis No" << endl;
			cout << "Press 3 for Honda Model And Manufactured Year" << endl;
			cout << "Press 4 for Honda Registration No" << endl;
			cout << "Press 5 for Honda Colour" << endl;
			cout << "Press 6 for Honda Price" << endl;
			int(z);
			cin >> z;


			switch (z)
			{
			case 1:
				cout << "Honda Car Engine No is" << endl << "5WB946T290" << endl << "Power 3493 CC" << endl << "Thank You\n";
				break;
			case 2:
				cout << "Honda Chassis No is" << endl << "84YN4-63106J-M85VIP" << endl << "Thank You\n";
				break;
			case 3:
				cout << "Honda Vehicle Model is" << endl << "Honda NSX - 2nd Generation\n" << endl << "Manufactured in 2018" << endl << "Thank You\n";
				break;
			case 4:
				cout << "Honda Rst.No is" << endl << "BF 110" << endl << "Thank You\n";
				break;
			case 5:
				cout << "Honda Car colour is" << endl << "Valencia Red Pearl" << endl << "Thank You\n";
				break;
			case 6:
				cout << "Honda Car Price is" << endl << "$187,629" << endl << "Thank You\n";
				cout << "\n\tNumber of Quantity: ";
				cin >> Quantity;
				Rate = 187629;
				Payable_amount = Quantity * Rate;
				if (Quantity >= 2)
				{
					if (Payable_amount > 187650 && Payable_amount < 375300)
					{
						Discount = Payable_amount * 0.08;
					}
					else if (Payable_amount > 375300 && Payable_amount < 562950)
					{
						Discount = Payable_amount * 0.1;
					}
					else if (Payable_amount > 562950)
					{
						Discount = Payable_amount * 0.12;
					}
				}
				Total_amount = Payable_amount - Discount;
					cout << "\n\n\n\t\t\tPayment detial\n\n";
	cout << "\t\tThe Rate of Your Selected Car is:  $" << Rate << "/Quantity" << endl;
	cout << "\t\tPayable amount:  "<<"$"<< Payable_amount << endl;
	cout << "\t\tDiscount:  "<<"$" << Discount << endl;
	cout << "\t\tTotal billing amount:  "<<"$" << Total_amount << endl;

				break;
			default:
				cout << "You Press Incorrect Button\n";
				break;
			}

			break;

		case 2:
			cout << "Press 1 for Audi Engine No And Power" << endl;
			cout << "Press 2 for Audi Chassis No" << endl;
			cout << "Press 3 for Audi Model and Manufactured Year" << endl;
			cout << "Press 4 for Audi Registration No" << endl;
			cout << "Press 5 for Audi Colour" << endl;
			cout << "Press 6 for Audi Price" << endl;

			cin >> z;
			switch (z)
			{
			case 1:
				cout << "Audi Car Engine No is" << endl << "IFM7540LNPQ" << endl << "Power 5204 CC" << endl << "Thank You\n";
				break;
			case 2:
				cout << "Audi Car Chassis No is" << endl << "P72720-205VG-640J1" << endl << "Thank You\n";
				break;
			case 3:
				cout << "Audi Car Model is" << endl << "Audi R8\n" << endl << "Manufactured in 2021" << endl << "Thank You\n";
				break;
			case 4:
				cout << "Audi Rst.No is" << endl << "ISL 999" << endl << "Thank You\n";
				break;
			case 5:
				cout << "Audi Car Colour is" << endl << "Tango Red Metallic" << endl << "Thank You\n";
				break;
			case 6:
				cout << "Audi Car Price is" << endl << "$142,700" << endl << "Thank You\n";
				cout << "\n\tNumber of Quantity: ";
				cin >> Quantity;
				Rate = 142700;
				Payable_amount = Quantity * Rate;
				if (Quantity >= 2)
				{
					if (Payable_amount > 142750 && Payable_amount < 285500)
					{
						Discount = Payable_amount * 0.08;
					}
					else if (Payable_amount > 285500 && Payable_amount < 428250)
					{
						Discount = Payable_amount * 0.1;
					}
					else if (Payable_amount > 428250)
					{
						Discount = Payable_amount * 0.12;
					}
				}
				Total_amount = Payable_amount - Discount;
					cout << "\n\n\n\t\t\tPayment detial\n\n";
	cout << "\t\tThe Rate of Your Selected Car is:  $" << Rate << "/Quantity" << endl;
	cout << "\t\tPayable amount:  "<<"$"<< Payable_amount << endl;
	cout << "\t\tDiscount:  "<<"$" << Discount << endl;
	cout << "\t\tTotal billing amount:  "<<"$" << Total_amount << endl;
				break;
			default:
				cout << "You Press Incorrect Button\n";
				break;
			}
			break;

		case 3:
			cout << "Press 1 for Nissan Engine No And Power" << endl;
			cout << "Press 2 for Nissan Chassis No" << endl;
			cout << "Press 3 for Nissan Model and Manufactured Year" << endl;
			cout << "Press 4 for Nissan Registration No" << endl;
			cout << "Press 5 for Nissan Colour" << endl;
			cout << "Press 6 for Nissan Price" << endl;

			cin >> z;
			switch (z)
			{
			case 1:
				cout << "Nissan Car Engine No is" << endl << "97GJ432-08NG532" << endl << "Power 3799 CC" << endl << "Thank You\n";
				break;
			case 2:
				cout << "Nissan Car Chassis No is" << endl << "BY73P-64196-BH739" << endl << "Thank You\n";
				break;
			case 3:
				cout << "Nissan Car Model is" << endl << "Nissan GTR\n" << endl << "Manufactured in 2021" << endl << "Thank You\n";
				break;
			case 4:
				cout << "Nissan Rst.No is" << endl << "RWP 111" << endl << "Thank You\n";
				break;
			case 5:
				cout << "Nissan Vehicle Colour is" << endl << "Katsura Orange\n";
				break;
			case 6:
				cout << "Nissan Car Price is" << endl << "$113,540" << endl << "Thank You\n";
				cout << "\n\tNumber of Quantity: ";
				cin >> Quantity;
				Rate = 113540;
				Payable_amount = Quantity * Rate;
				if (Quantity >= 2)
				{
					if (Payable_amount > 113550 && Payable_amount < 227100)
					{
						Discount = Payable_amount * 0.08;
					}
					else if (Payable_amount > 227100 && Payable_amount < 340650)
					{
						Discount = Payable_amount * 0.1;
					}
					else if (Payable_amount > 340650)
					{
						Discount = Payable_amount * 0.12;
					}
				}
				Total_amount = Payable_amount - Discount;
					cout << "\n\n\n\t\t\tPayment detial\n\n";
	cout << "\t\tThe Rate of Your Selected Car is:  $" << Rate << "/Quantity" << endl;
	cout << "\t\tPayable amount:  "<<"$"<< Payable_amount << endl;
	cout << "\t\tDiscount:  "<<"$" << Discount << endl;
	cout << "\t\tTotal billing amount:  "<<"$" << Total_amount << endl;
				break;
			default:
				cout << "You Press Incorrect Button\n";
				break;

			}
			break;

		case 4:
			cout << "Press 1 for Porsche Engine No And Power" << endl;
			cout << "Press 2 for Porsche Chassis No" << endl;
			cout << "Press 3 for Porsche Model and Manufactured Year" << endl;
			cout << "Press 4 for Porsche Registration No" << endl;
			cout << "Press 5 for Porsche Colour" << endl;
			cout << "Press 6 for Porsche Price" << endl;

			cin >> z;
			switch (z)
			{
			case 1:
				cout << "Porsche Car Engine No is" << endl << "953BT-ON7892" << endl << "Power 2981 CC" << endl << "Thank You\n";
				break;
			case 2:
				cout << "Porsche Car Chassis No is" << endl << "BH6530-42858-OM8649" << endl << "Thank You\n";
				break;
			case 3:
				cout << "Porsche Car Model is" << endl << "Porsche 911\n" << endl << "Manufactured in 2022" << endl << "Thank You\n";
				break;
			case 4:
				cout << "Porsche Rst.No" << endl << "LHR 786" << endl << "Thank You\n";
				break;
			case 5:
				cout << "Porsche Car Colour is" << endl << "Python Green" << endl << "Thank You\n";
				break;
			case 6:
				cout << "Porsche Car Price is" << endl << "$121,300" << endl << "Thank You\n";
				cout << "\n\tNumber of Quantity: ";
				cin >> Quantity;
				Rate = 121300;
				Payable_amount = Quantity * Rate;
				if (Quantity >= 2)
				{
					if (Payable_amount > 121400 && Payable_amount < 242800)
					{
						Discount = Payable_amount * 0.08;
					}
					else if (Payable_amount > 242800 && Payable_amount < 364200)
					{
						Discount = Payable_amount * 0.1;
					}
					else if (Payable_amount > 364200)
					{
						Discount = Payable_amount * 0.12;
					}
				}
				Total_amount = Payable_amount - Discount;
					cout << "\n\n\n\t\t\tPayment detial\n\n";
	cout << "\t\tThe Rate of Your Selected Car is:  $" << Rate << "/Quantity" << endl;
	cout << "\t\tPayable amount:  "<<"$"<< Payable_amount << endl;
	cout << "\t\tDiscount:  "<<"$" << Discount << endl;
	cout << "\t\tTotal billing amount:  "<<"$" << Total_amount << endl;
				break;
			default:
				cout << "You Press Incorrect Button\n";
				break;

			}
			break;

		case 5:
			cout << "Press 1 for Bugatti Engine No And Power" << endl;
			cout << "Press 2 for Bugatti Chassis No" << endl;
			cout << "Press 3 for Bugatti Model and Manufactured Year" << endl;
			cout << "Press 4 for Bugatti Registration No" << endl;
			cout << "Press 5 for Bugatti Colour" << endl;
			cout << "Press 6 for Bugatti Price" << endl;

			cin >> z;
			switch (z)
			{
			case 1:
				cout << "Bugatti Car Engine No is" << endl << "JY978-54218P" << endl << "Power 7993cc" << endl << "Thank You\n";
				break;
			case 2:
				cout << "Bugatti Car Chassis No is" << endl << "NTY753-4964N-L91371" << endl << "Thank You\n";
				break;
			case 3:
				cout << "Bugatti Car Model is" << endl << "Bugatti Chiron\n" << endl << "Manufactured in 2020" << endl << "Thank You\n";
				break;
			case 4:
				cout << "Bugatti Car Rst.No is" << endl << "MLT 72" << endl << "Thank You\n";
				break;
			case 5:
				cout << "Bugatti Car Colour is" << endl << "Gran Turismo" << endl << "Thank You\n";
				break;
			case 6:
				cout << "Bugatti Car Price is" << endl << "$ 3 Million" << endl << "Thank You\n";
				cout << "\n\tNumber of Quantity: ";
				cin >> Quantity;
				Rate = 3000000;
				Payable_amount = Quantity * Rate;
				if (Quantity >= 2)
				{
					if (Payable_amount > 3001000 && Payable_amount < 6002000)
					{
						Discount = Payable_amount * 0.08;
					}
					else if (Payable_amount > 6002000 && Payable_amount < 9003000)
					{
						Discount = Payable_amount * 0.1;
					}
					else if (Payable_amount > 9003000)
					{
						Discount = Payable_amount * 0.12;
					}
				}
				Total_amount = Payable_amount - Discount;
					cout << "\n\n\n\t\t\tPayment detial\n\n";
	cout << "\t\tThe Rate of Your Selected Car is:  $" << Rate << "/Quantity" << endl;
	cout << "\t\tPayable amount:  "<<"$"<< Payable_amount << endl;
	cout << "\t\tDiscount:  "<<"$" << Discount << endl;
	cout << "\t\tTotal billing amount:  "<<"$" << Total_amount << endl;
				break;
			default:
				cout << "You Press Incorrect Button\n";
				break;
			}
			break;

		case 6:
			cout << "Press 1 for Toyota Engine No And Power" << endl;
			cout << "Press 2 for Toyota Chassis No" << endl;
			cout << "Press 3 for Toyota Model and Manufactured Year" << endl;
			cout << "Press 4 for Toyota Registration No" << endl;
			cout << "Press 5 for Toyota Colour" << endl;
			cout << "Press 6 for Toyota Price" << endl;

			cin >> z;
			switch (z)
			{
			case 1:
				cout << "Toyota Car Engine No is" << endl << "JY860-9876YQ" << endl << "Power 1988 cc" << endl << "Thank You\n";
				break;
			case 2:
				cout << "Toyota Car Chassis No is" << endl << "U7548P-09UN7-T6417" << endl << "Thank You\n";
				break;
			case 3:
				cout << "Toyota Car Model No is" << endl << "Toyota 2000 GT\n" << endl << "Manufactured in 2022" << endl << "Thank You\n";
				break;
			case 4:
				cout << "Toyota Car Rst.No is" << endl << "KHT 5" << endl << "Thank You\n";
				break;
			case 5:
				cout << "Toyota Car Colour is" << endl << "Solar Red" << endl << "Thank You\n";
				break;
			case 6:
				cout << "Toyota Car Price is" << endl << "$ 2,535,000" << endl << "Thank You\n";
				cout << "\n\tNumber of Quantity: ";
				cin >> Quantity;
				Rate = 2535000;
				Payable_amount = Quantity * Rate;
				if (Quantity >= 2)
				{
					if (Payable_amount > 2535500 && Payable_amount < 5071000)
					{
						Discount = Payable_amount * 0.08;
					}
					else if (Payable_amount > 5071000 && Payable_amount < 7606500)
					{
						Discount = Payable_amount * 0.1;
					}
					else if (Payable_amount > 7606500)
					{
						Discount = Payable_amount * 0.12;
					}
				}
				Total_amount = Payable_amount - Discount;
					cout << "\n\n\n\t\t\tPayment detial\n\n";
	cout << "\t\tThe Rate of Your Selected Car is:  $" << Rate << "/Quantity" << endl;
	cout << "\t\tPayable amount:  "<<"$"<< Payable_amount << endl;
	cout << "\t\tDiscount:  "<<"$" << Discount << endl;
	cout << "\t\tTotal billing amount:  "<<"$" << Total_amount << endl;
				break;
			default:
				cout << "You Press Incorrect Button\n";
				break;

			}
			break;

		case 7:
			cout << "Press 1 for Lexus Engine No And Power" << endl;
			cout << "Press 2 for Lexus Chassis No" << endl;
			cout << "Press 3 for Lexus Model and Manufactured Year" << endl;
			cout << "Press 4 for Lexus Registration No" << endl;
			cout << "Press 5 for Lexus Colour" << endl;
			cout << "Press 6 for Lexus Price" << endl;

			cin >> z;
			switch (z)
			{
			case 1:
				cout << "Lexus Car Engine No is" << endl << "UF247-N53975" << endl << "Power 4805 cc" << endl << "Thank You\n";
				break;
			case 2:
				cout << "Lexus Car Chassis No is" << endl << "NT5740-MR458-8884W0" << endl << "Thank You\n";
				break;
			case 3:
				cout << "Lexus Car Model is" << endl << "Lexus LFA Nurburgring\n" << endl << "Manufactured in 2022" << endl << "Thank You\n";
				break;
			case 4:
				cout << "Lexus Car Rst.No is" << endl << "HNG 786" << endl << "Thank You\n";
				break;
			case 5:
				cout << "Lexus Car Colour is" << endl << "Orange" << endl << "Thank You\n";
				break;
			case 6:
				cout << "Lexus Car Price is" << endl << "$ 1,625,000" << endl << "Thank You\n";
				cout << "\n\tNumber of Quantity: ";
				cin >> Quantity;
				Rate = 1625000;
				Payable_amount = Quantity * Rate;
				if (Quantity >= 2)
				{
					if (Payable_amount > 1625500 && Payable_amount < 3251000)
					{
						Discount = Payable_amount * 0.08;
					}
					else if (Payable_amount > 3251000 && Payable_amount < 4876500)
					{
						Discount = Payable_amount * 0.1;
					}
					else if (Payable_amount > 4876500)
					{
						Discount = Payable_amount * 0.12;
					}
				}
				Total_amount = Payable_amount - Discount;
					cout << "\n\n\n\t\t\tPayment detial\n\n";
	cout << "\t\tThe Rate of Your Selected Car is:  $" << Rate << "/Quantity" << endl;
	cout << "\t\tPayable amount:  "<<"$"<< Payable_amount << endl;
	cout << "\t\tDiscount:  "<<"$" << Discount << endl;
	cout << "\t\tTotal billing amount:  "<<"$" << Total_amount << endl;
				break;
			default:
				cout << "You Press Incorrect Button\n";
				break;
			}
			break;

		case 8:
			cout << "Press 1 for Rolls Royce Engine No And Power" << endl;
			cout << "Press 2 for Rolls Royce Chassis No" << endl;
			cout << "Press 3 for Rolls Royce Model and Manufactured Year" << endl;
			cout << "Press 4 for Rolls Royce Registration No" << endl;
			cout << "Press 5 for Rolls Royce Colour" << endl;
			cout << "Press 6 for Rolls Royce Price" << endl;

			cin >> z;
			switch (z)
			{
			case 1:
				cout << "Rolls Royce Car Engine No is" << endl << "UK5167-97H975" << endl << "Power 5980 cc" << endl << "Thank You\n";
				break;
			case 2:
				cout << "Rolls Royce Car Chassis No is" << endl << "FTB24-999IP-P525655" << endl << "Thank You\n";
				break;
			case 3:
				cout << "Rolls Royce Car Model is" << endl << "The Boat Tail\n" << endl << "Manufactured in 2022" << endl << "Thank You\n";
				break;
			case 4:
				cout << "Rolls Royce Car Rst.No is" << endl << "FC 512" << endl << "Thank You\n";
				break;
			case 5:
				cout << "Rolls Royce Car Colour is" << endl << "Black And Blue" << endl << "Thank You\n";
				break;
			case 6:
				cout << "Rolls Royce Car Price is" << endl << "$ 2,800,000" << endl << "Thank You\n";
				cout << "\n\tNumber of Quantity: ";
				cin >> Quantity;
				Rate = 2800000;
				Payable_amount = Quantity * Rate;
				if (Quantity >= 2)
				{
					if (Payable_amount > 2801000 && Payable_amount < 5602000)
					{
						Discount = Payable_amount * 0.08;
					}
					else if (Payable_amount > 5602000 && Payable_amount < 8403000)
					{
						Discount = Payable_amount * 0.1;
					}
					else if (Payable_amount > 8403000)
					{
						Discount = Payable_amount * 0.12;
					}
				}
				Total_amount = Payable_amount - Discount;
					cout << "\n\n\n\t\t\tPayment detial\n\n";
	cout << "\t\tThe Rate of Your Selected Car is:  $" << Rate << "/Quantity" << endl;
	cout << "\t\tPayable amount:  "<<"$"<< Payable_amount << endl;
	cout << "\t\tDiscount:  "<<"$" << Discount << endl;
	cout << "\t\tTotal billing amount:  "<<"$" << Total_amount << endl;
				break;
			default:
				cout << "You Press Incorrect Button\n";
				break;
			}
			break;
		}
		
	}

	return 0;
}