#!/bin/bash
[ ! -e "/root/src/scripts/json" ] && git clone https://github.com/nlohmann/json scripts/json
[ ! -e "/root/src/scripts/cppunit" ] && git clone https://github.com/Cppunit/cppunit scripts/cppunit