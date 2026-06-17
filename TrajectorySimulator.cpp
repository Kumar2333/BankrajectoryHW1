#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double speed, angleDegree, x;
    double g = 9.81;
    double pi = 3.14159;

    cout << "Enter initial speed (m/s): ";
    cin >> speed;

    if (speed < 0)
    {
        cout << "Invalid input. Speed cannot be negative." << endl;
        return 0;
    }

    cout << "Enter launch angle (degrees): ";
    cin >> angleDegree;

    cout << "Enter horizontal distance x: ";
    cin >> x;

    double angleRadian = angleDegree * pi / 180;

    double vx = speed * cos(angleRadian);
    double vy = speed * sin(angleRadian);

    double timeOfFlight = (2 * vy) / g;
    double maxHeight = pow(vy, 2) / (2 * g);
    double range = pow(speed, 2) * sin(2 * angleRadian) / g;

    double y = x * tan(angleRadian) - (g * pow(x, 2)) / (2 * pow(speed, 2) * pow(cos(angleRadian), 2));

    cout << endl;
    cout << "Time of flight: " << timeOfFlight << " seconds" << endl;
    cout << "Maximum height: " << maxHeight << " meters" << endl;
    cout << "Horizontal range: " << range << " meters" << endl;
    cout << "Y position at x = " << x << " is " << y << " meters" << endl;

    return 0;
}
