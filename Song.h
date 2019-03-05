/** Name:Louis Ramirez
    Project 2 PlayList
    File name: Song.h
    CSCI 23500
    Fall 2018
    Description:
*/
#include<iostream>
#include<vector>
#include<string>
#ifndef Song_H
#define Song_H

class Song
{
  public:
  Song();
  Song(const std::string& title, const std::string& author = "", const std::string& album = "");
  void setTitle(std::string title);  //"set" in setTitle here means "give a value" and has nothing
                                     // to do with the Set class. Similarly for setAuthor and setAlbum
  void setAuthor(std::string author);
  void setAlbum(std::string album);
  std::string getTitle() const;
  std::string getAuthor() const;
  std::string getAlbum() const;
  friend bool operator==(const Song& lhs, const Song& rhs);


  private:

  std::string title_;
  std::string author_;
  std::string album_;



};
#endif //Song_H_
