#include <iostream>
#include <string>
using namespace std;
class WeatherReport {
    private:
        int day_of_month;
        int high_temp;
        int low_temp;
        int amount_rain;
        int amount_snow;
    public:
        WeatherReport() 		        // Default constructor
    {
            day_of_month = 0;
            high_temp = 0;
            low_temp = 0;
            amount_rain = 0;
            amount_snow = 0;
        }
        WeatherReport(int day, int high, int low, int rain, int snow)            // Parameterized constructor
       {
            day_of_month = day;
            high_temp = high;
            low_temp = low;
            amount_rain = rain;
            amount_snow = snow;
        }
        void setValues()			        // Function to prompt user for values 
     {
        	cout << "Enter the month: ";
            cin >> day_of_month;
            cout << "Enter the day: ";
            cin >> day_of_month;
            cout << "Enter the high temperature: ";
            cin >> high_temp;
            cout << "Enter the low temperature: ";
            cin >> low_temp;
            cout << "Enter the amount of rain: ";
            cin >> amount_rain;
            cout << "Enter the amount of snow: ";
            cin >> amount_snow;
        }
        void generateMonthlyReport()				// Function to generate monthly report
        {
            int total_high_temp = 0;
            int total_low_temp = 0;
            int total_rain = 0;
            int total_snow = 0;
            cout << "Monthly Report:" << endl;
            cout << "Day\tHigh\tLow\tRain\tSnow" << endl;
            for (int i = 1; i <= day_of_month; i++) {
       cout << i << "\t" << high_temp << "\t" << low_temp << "\t" << amount_rain << "\t" << amount_snow ;
                total_high_temp += high_temp;
                total_low_temp += low_temp;
                total_rain += amount_rain;
                total_snow += amount_snow;
            }

            cout << endl;
            cout << "Average High: " << (total_high_temp / day_of_month) << endl;
            cout << "Average Low: " << (total_low_temp / day_of_month) << endl;
            cout << "Total Rain: " << total_rain << endl;
            cout << "Total Snow: " << total_snow << endl;
        }
};
int main() {
    int choice;
    WeatherReport report;
    while (true) {
        cout << "\n1. Enter data\n2. Generate monthly report\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                report.setValues();
                break;
            case 2:
                report.generateMonthlyReport();
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid choice!\n";
                break;
        }
    }
    return 0;
}

