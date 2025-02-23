#include <iostream>
#include <string>
#include "SpaceRoute.cpp"

using namespace std;

int main() {
    string mars = "Mars";
    string jupiter = "Jupiter";
    string saturn = "Saturn";
    string earth = "Earth";
    string venus = "Venus";
    string mercury = "Mercury";


    SpaceRoute<string> voyagerRoute = SpaceRoute<string>();
    //voyagerRoute.print();
    voyagerRoute.addWaypointAtBeginning(mars);
    voyagerRoute.print();
    voyagerRoute.addWaypointAtBeginning(jupiter);
    voyagerRoute.print();
    voyagerRoute.addWaypointAtBeginning(venus);
    voyagerRoute.print();
    voyagerRoute.addWaypointAtEnd(earth);
    voyagerRoute.print();
    voyagerRoute.addWaypointAtIndex(1,mercury);
    voyagerRoute.print();
    voyagerRoute.addWaypointAtIndex(3,mercury);
    voyagerRoute.print();
    cout << "Hello" <<endl;

    // voyagerRoute.addWaypointAtEnd(mars);
    // voyagerRoute.addWaypointAtEnd(jupiter);
    // voyagerRoute.addWaypointAtEnd(saturn);
    // voyagerRoute.addWaypointAtBeginning(earth);
    // voyagerRoute.addWaypointAtIndex(2, venus);
    //
    // cout << "Voyager Route (Forward):\n";
    // voyagerRoute.traverseForward();
    //
    // cout << "\nVoyager Route (Backward):\n";
    // voyagerRoute.traverseBackward();
    //
    // cout << "\nPrinting Route: \n";
    // voyagerRoute.print();
    //
    // voyagerRoute.removeWaypointAtIndex(2);
    // cout << "\nAfter Removing Venus: \n";
    // voyagerRoute.print();

    return 0;
}