/*the program asks to enter two times and sums them from seconds to minutes to an hour*/


#include <iostream>
using namespace std;

class Time {
public:
    int seconds, minutes, hours;
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}
    Time& operator + (const Time& time) const;
    friend ostream& operator << (ostream& os, const Time& dt);
};

Time& Time::operator + (const Time& time) const {
    Time final(0, 0, 0);
    int rest, delta;

    rest = (seconds + time.seconds) % 60;
    delta = (seconds + time.seconds) / 60;
    final.seconds = rest;

    rest = (minutes + time.minutes + delta) % 60;
    delta = (minutes + time.minutes + delta) / 60;
    final.minutes = rest;

    final.hours = (hours + time.hours + delta) % 24;

    return final;
}

ostream& operator << (ostream& cout, const Time& time)
{
    cout << time.hours << ':' << time.minutes << ':' << time.seconds;
    return cout;
}

int main() {
    int h[2], m[2], s[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "\ninput " << i + 1 << " hours"; cin >> h[i];
        cout << "\ninput " << i + 1 << " minutes"; cin >> m[i];
        cout << "\ninput " << i + 1 << " seconds"; cin >> s[i];
    }

    Time date1(h[0], m[0], s[0]), date2(h[1], m[1], s[1]);
    Time date3 = date1 + date2;
    cout << date3;
    getchar();
}