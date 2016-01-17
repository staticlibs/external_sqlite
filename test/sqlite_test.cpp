/*
 * Copyright 2015, alex at staticlibs.net
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* 
 * File:   sqlite_test.cpp
 * Author: alex
 *
 * Created on February 10, 2015, 10:08 AM
 */


#include <iostream>

#include "sqlite3.h"

#include "staticlib/config/assert.hpp"


void test_sqlite() {
    sqlite3 *db;
    auto rc = sqlite3_open("test.db", &db);
    slassert(!rc);
    sqlite3_close(db);
}

int main() {
    try {
        test_sqlite();
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
        return 1;
    }
    return 0;
}
