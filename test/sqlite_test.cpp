/* 
 * File:   sqlite_test.cpp
 * Author: alex
 *
 * Created on February 10, 2015, 10:08 AM
 */


#include <cassert>

#include "sqlite3.h"

int main() {
    sqlite3 *db;
    auto rc = sqlite3_open("test.db", &db);
    assert(!rc);
    sqlite3_close(db);
    
    return 0;
}

