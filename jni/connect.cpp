//
// Created by bkuzn on 01.05.2026.
//
#include "connect.h"
//TODO: тут указать только айпи и порт 
static const char* SERVER_HOST = "80.242.59.112";
//TODO: порт сервера 
static const unsigned short SERVER_PORT = 1448;
//TODO: если есть пароль на сервере укажите его
static const char* SERVER_PASSWORD = "";

extern "C" {
//TODO: получение айпи сервера 
const char* GetServerHost(void)
{
    return SERVER_HOST;
}
//TODO: получение порта сервера 
unsigned short GetServerPort(void)
{
    return SERVER_PORT;
}
//TODO: получение пароля сервера 
const char* GetServerPassword(void)
{
    return SERVER_PASSWORD;
}

}