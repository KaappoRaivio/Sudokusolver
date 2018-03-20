#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Cell {
    public:
        Cell(int num): number(num) {

        }

        int getNumber(void) {
            return number;
        }
    private:
        int number = 0;
};

class Grid {
    public:
        Grid(void) {
            for (int x = 0; x < 9; x++) {
                vector<Cell> temp_vector;
                for (int y = 0; y < 9; y++) {
                    temp_vector.push_back(Cell(1));

                }
                grid.push_back(temp_vector);
            }
        }
        void print(void) {
            for (int x = 0; x < 9; x++) {
                string temp = "";
                for (int y = 0; y < 9; y++) {
                    string current = to_string(grid[x][y].getNumber());
                    temp += current;
                    temp += " ";
                }
                cout << temp << endl;
            }
        }
    private:
        vector< vector<Cell> > grid;

};

int main() {
    Grid a;

    a.print();

    return 0;
}
