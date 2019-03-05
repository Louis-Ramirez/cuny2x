/*
Name: Louis Ramirez
File name: Customer.cpp
Date: 9/4/18  Fall 2018
Class: CSCI 23500-01
Project 1


*/
#include<iostream>
#include<string>
#include "Customer.hpp"
Customer::Customer()
{
  name_="";
  defective_device_="";
  wait_time_=0;
}
Customer::Customer( string name, string device, int wait_time)
{
name_=name;
defective_device_=device;
wait_time_=wait_time;

}

//should I create destructor??

string Customer::getName()
{
  return name_;
}

string Customer::getDevice()
{
  return defective_device_;
}

int Customer::getWaitTime()
{
  return wait_time_;
}

void Customer::updateWaitTime(int new_wait_time)
{
   wait_time_=new_wait_time;
}
