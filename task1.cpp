#include <iostream>

using namespace std;

struct Date {
    int hours = 0;
    int minutes = 0;
};

int main() {
    Date start;
    int addMinutes;

    cin >> start.hours >> start.minutes >> addMinutes;

    if (start.hours < 0  start.hours >= 24  start.minutes < 0  start.minutes >= 60  addMinutes < 0) {
        cout << "Invalid input values!" << endl;
        return 1;
    }

    int totalMinutes = start.hours * 60 + start.minutes + addMinutes;

    Date result;
    result.hours = (totalMinutes / 60) % 24;
    result.minutes = totalMinutes % 60;

    cout << result.hours << ":" << result.minutes << endl;

    return 0;
}
