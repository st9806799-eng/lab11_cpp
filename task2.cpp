#include <iostream>

using namespace std;

struct Date {
    int hours = 0;
    int minutes = 0;
};

int main() {
    Date start, end;

    cin >> start.hours >> start.minutes;
    cin >> end.hours >> end.minutes;

    if (start.hours < 0  start.hours >= 24  start.minutes < 0  start.minutes >= 60 
        end.hours < 0  end.hours >= 24  end.minutes < 0 || end.minutes >= 60) {
        cout << "Invalid input values!" << endl;
        return 1;
    }

    int startTotal = start.hours * 60 + start.minutes;
    int endTotal = end.hours * 60 + end.minutes;

    int diffMinutes = endTotal - startTotal;
    if (diffMinutes < 0) {
        diffMinutes += 24 * 60;
    }

    Date duration;
    duration.hours = diffMinutes / 60;
    duration.minutes = diffMinutes % 60;

    cout << duration.hours << ":" << duration.minutes << endl;

    return 0;
}
