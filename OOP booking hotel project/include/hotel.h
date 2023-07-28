#ifndef HOTEL_H
#define HOTEL_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <unordered_map>
#include "InputOutputFunctions.h"
using std::string; 
 
 class Hotel:public InputOutputFunctions<Hotel>{
private:
    string hotel_name;
    string hotel_addres;
    string City;
    int single_rooms;
    int double_rooms;
    int triple_rooms;
    int price_per_single_room;
    int price_per_double_room;
    int price_per_triple_room;
    int hotel_number;
    string hotel_email_address;
public:
    void sethName(string name);
    string gethName() const;
    void sethAddres(string addres);
    string gethAddres() const;
    void sethCity(string city);
    string gethCity();
    void sethEmail(string hMail);
    string gethEmail();
    void sethSingleRoom(int singleRoom);
    int gethSingleRoom() const;
    void sethDoubleRoom(int doubleRoom);
    int gethDoubleRoom() const;
    void sethTripleRoom(int tripleRoom);
    int gethTripleRoom() const;
    void sethPriceSingleRoom(int price_single_room);
    int gethPriceSingleRoom();
    void sethPriceDoubleRoom(int price_double_room);
    int gethPriceDoubleRoom();
    void sethPriceTripleRoom(int price_triple_room);
    int gethPriceTripleRoom();
    void sethNumber(int number);
    int gethNumber() const ;
    void Print() override;
    void ReadFromFile(const char* FILENAME , std::vector<Hotel> &hotel) override;
    void Read() override;
    void ReadFromFile_map(const char *FILENAME , std::unordered_map<string , Hotel> & map ) override;
    string searchHotel();
};

#endif