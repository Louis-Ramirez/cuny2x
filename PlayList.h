/** Name:Louis Ramirez
    Project 2 PlayList
    File name: PlayList.h
    CSCI 23500
    Date 9/25/18 Fall 2018
    Description:
*/


#include <iostream>
#include <vector>
#include<string>
#include"Song.h"
#include"Set.h"
#ifndef PlayList_H
#define PlayList_H

class PlayList
{

public:

  PlayList();
  PlayList(const Song& a_song);
  int getNumberOfSongs() const;
  bool isEmpty() const;
  bool addSong(const Song& new_song);
  bool removeSong(const Song& a_song);
  void clearPlayList();
  void displayPlayList() const;


private:

  Set<Song> playlist_;


};

//#include"PlayList.cpp"
#endif //PlayList_H_
