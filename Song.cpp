/** Name:Louis Ramirez
    Project 2 PlayList
    File name: Song.cpp
    CSCI 23500
    Date: 9/25/2018
    Fall 2018
    Description:
*/
#include"Song.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;

Song::Song()
{
   title_="";
   author_="";
   album_="";
} //= default;
Song::Song(const std::string& title, const std::string& author, const std::string& album)
{
  title_=title;
  author_=author; ////check to see if the parametrized constructor definition functions
  album_=album;
}


//"set" in setTitle here means "give a value" and has nothing
// to do with the Set class. Similarly for setAuthor and setAlbum
void Song::setTitle(std::string title)
{
  title_=title;
}

void Song::setAuthor(std::string author)
{
  author_= author;
}

void Song::setAlbum(std::string album)
{
  album_= album;
}

std::string Song::getTitle() const
{
  return title_;
}
std::string Song::getAuthor() const
{
  return author_;
}
std::string Song::getAlbum() const
{
  return album_;
}
bool operator==(const Song& lhs, const Song& rhs)
{
  if((lhs.getTitle()==rhs.getTitle())&&
  (lhs.getAuthor()==rhs.getAuthor())&&
  (lhs.getAlbum()==rhs.getAlbum()))
  {
   return true;
  }
  else
  return false;

}
//#include"PlayList.h"
