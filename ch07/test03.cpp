#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <functional>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iostream>
#include <sstream>
using namespace std;

#define REP(i, n) for(int i = 0; i < (int)(n); ++ i)
#define FOR(i, b, e) for(auto i = b; i < e; ++ i)
#define all(x) (x).begin(), (x).end()

enum TTTS_state {
    TTTS_BLANK,
    TTTS_O,
    TTTS_X,
};

int board0, board1, board2, board3, board4, board5, board6, board7, board8 = TTTS_BLANK;

int set_state(int board, int state) {
    switch (board) {
        case TTTS_BLANK:
            board = state;
            cout << "board: " << board << endl;
            cout << "state: " << state << endl;
            break;
        default:
            cout << "You are setting a wrong board..." << endl;
            break;
    }
}

void set_board_and_state(int board, int state) {
    switch (board) {
        case 0:
            if (board0 == TTTS_BLANK) {
                board0 = state;
            }
            else {
                cout << "You are setting a wrong board..." << endl;
            }
            break;
        case 1:
            if (board1 == TTTS_BLANK) {
                board1 = state;
            }
            else {
                cout << "You are setting a wrong board..." << endl;
            }
            break;
        case 2:
            if (board2 == TTTS_BLANK) {
                board2 = state;
            }
            else {
                cout << "You are setting a wrong board..." << endl;
            }
            break;
        case 3:
            if (board3 == TTTS_BLANK) {
                board3 = state;
            }
            else {
                cout << "You are setting a wrong board..." << endl;
            }
            break;
        case 4:
            if (board4 == TTTS_BLANK) {
                board4 = state;
            }
            else {
                cout << "You are setting a wrong board..." << endl;
            }
            break;
        case 5:
            if (board5 == TTTS_BLANK) {
                board5 = state;
            }
            else {
                cout << "You are setting a wrong board..." << endl;
            }
            break;
        case 6:
            if (board6 == TTTS_BLANK) {
                board6 = state;
            }
            else {
                cout << "You are setting a wrong board..." << endl;
            }
            break;
        case 7:
            if (board7 == TTTS_BLANK) {
                board7 = state;
            }
            else {
                cout << "You are setting a wrong board..." << endl;
            }
            break;
        default:
            if (board8 == TTTS_BLANK) {
                board8 = state;
            }
            else {
                cout << "You are setting a wrong board..." << endl;
            }
            break;
    }
}

bool check_game_state() {
    if (((board0 == TTTS_O) && (board1 == TTTS_O) && (board2 == TTTS_O)) ||
            ((board3 == TTTS_O) && (board4 == TTTS_O) && (board5 == TTTS_O)) ||
            ((board6 == TTTS_O) && (board7 == TTTS_O) && (board8 == TTTS_O)) ||
            ((board0 == TTTS_O) && (board3 == TTTS_O) && (board6 == TTTS_O)) ||
            ((board1 == TTTS_O) && (board4 == TTTS_O) && (board7 == TTTS_O)) ||
            ((board2 == TTTS_O) && (board5 == TTTS_O) && (board8 == TTTS_O)) ||
            ((board0 == TTTS_O) && (board4 == TTTS_O) && (board8 == TTTS_O)) ||
            ((board2 == TTTS_O) && (board4 == TTTS_O) && (board6 == TTTS_O))) {
        cout << "O wins..." << endl;
        return true;
    }
    else if (((board0 == TTTS_X) && (board1 == TTTS_X) && (board2 == TTTS_X)) ||
            ((board3 == TTTS_X) && (board4 == TTTS_X) && (board5 == TTTS_X)) ||
            ((board6 == TTTS_X) && (board7 == TTTS_X) && (board8 == TTTS_X)) ||
            ((board0 == TTTS_X) && (board3 == TTTS_X) && (board6 == TTTS_X)) ||
            ((board1 == TTTS_X) && (board4 == TTTS_X) && (board7 == TTTS_X)) ||
            ((board2 == TTTS_X) && (board5 == TTTS_X) && (board8 == TTTS_X)) ||
            ((board0 == TTTS_X) && (board4 == TTTS_X) && (board8 == TTTS_X)) ||
            ((board2 == TTTS_X) && (board4 == TTTS_X) && (board6 == TTTS_X))) {
        cout << "X wins..." << endl;
        return true;
    }
    else {
        return false;
    }
}

string to_show(int board) {
    switch (board) {
        case TTTS_BLANK:
            return "B";
            break;
        case TTTS_O:
            return "O";
            break;
        default:
            return "X";
            break;
    }
}

void show_board() {
    cout << to_show(board0) << to_show(board1) << to_show(board2) << endl;
    cout << to_show(board3) << to_show(board4) << to_show(board5) << endl;
    cout << to_show(board6) << to_show(board7) << to_show(board8) << endl;
}

int main() {
    bool end_game = false;

    while (end_game == false) {
        int board;

        cout << "Get O" << endl;
        cin >> board;
        set_board_and_state(board, TTTS_O);
        show_board();
        if (check_game_state()) {
            break;
        }
        cout << "Get X" << endl;
        cin >> board;
        set_board_and_state(board, TTTS_X);
        show_board();
        end_game = check_game_state();
    }
}

