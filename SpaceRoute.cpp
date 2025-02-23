#include <iostream>
#include <string>
using namespace std;


template <typename T> class Node {
    public:
        T& data;
        Node* next;
        Node* prev;

        Node(T& d) : data(d), next(nullptr), prev(nullptr) {}
        void print() { cout << data << " "; }
};

class CelestialNode {
    private:
        string name;
        double distance_from_earth;
        string mission_log;

    public:
        CelestialNode(const string& n, double d, const string& log);
        const string& getName() const;
        double getDistance() const;
        const string& getMissionLog() const;
        void print() const { cout << name << " (" << distance_from_earth << " AU) - " << mission_log << endl; }
};


template <typename T> class SpaceRoute {
    private:
        Node<T>* head;
        Node<T>* tail;
        int length;

    public:
        SpaceRoute() {
            head = nullptr;
            tail = nullptr;
            length = 0;
        };  // Constructor
        // ~SpaceRoute() {
        //
        // }; // Destructor

        void addWaypointAtBeginning(T& data) {
            Node<T>* newNode = new Node(data);
            //if the route is currently empty
            if (head == nullptr) {
                head = newNode;
                tail = newNode;
            }
            //need to update head
            else {
                head->prev = newNode;
                newNode->next = head;
                head = newNode;
            }
            length++;
        }
        void addWaypointAtEnd(T& data){
            Node<T>* newNode = new Node(data);
            if (head == nullptr) {
                head = newNode;
                tail = newNode;
            }
            else {
                newNode->prev = tail;
                tail->next = newNode;
                tail = newNode;
            }
            length++;
        };
    void addWaypointAtIndex(int index, T& data){
        if (index < 0 || index > length + 1) {
            cout <<"Invalid Index"<< endl;
        }
        //we can just call methods already defined in the case that we want to add at the beginning or the end
        else if (index == 0) {
            addWaypointAtBeginning(data);
        }
        else if (index == length) {
            addWaypointAtEnd(data);
        }
        else {
            Node<T>* newNode = new Node<T>(data);
            Node<T>* curr = head;
            for (int i = 0; i < index-1; i++) {
                curr = curr->next;
            }
            newNode->next = curr->next;
            curr->next->prev = newNode;
            curr->next = newNode;
            newNode->prev = curr;
            length++;
        }
    };
        void removeWaypointAtBeginning();
        void removeWaypointAtEnd();
        void removeWaypointAtIndex(int index);
        void traverseForward();
        void traverseBackward();
        Node<T>* getWaypoint(int index);
        void setWaypoint(int index, T& data);
        void print(){

                Node<T>* current = head;
            cout<<"Printing..."<<endl;
                while (current) {
                    current->print();
                    current = current->next;
                }
                cout << endl;
        }

};

