/** Name:Louis Ramirez
    Project 2 PlayList
    File name: Set.cpp
    CSCI 23500
  Date: 9/25/18 Fall 2018
    Description: This file implements the header file and defines all the member functions so that they can be inherited into other files 
*/


#include <iostream>
#include <string>
#include "Set.h"
#include "Song.h"

    template class Set<Song>;// explicit def**
   /** Gets the current number of entries in this set.
    @return The integer number of entries currently in the set. */
    template<class ItemType>
    int Set<ItemType>::getCurrentSize() const
    {
      return item_count_;
    }

   /** Checks whether this set is empty.
    @return True if the set is empty, or false if not. */
    template<class ItemType>
    bool Set<ItemType>::isEmpty() const
    {
     return (item_count_ == 0);
    }

   /** Adds a new entry to this set.
    @post  If successful, newEntry is stored in the set and
       the count of items in the set has increased by 1.
    @param newEntry  The object to be added as a new entry.
    @return  True if addition was successful, or false if not. */
    template<class ItemType>
    bool Set<ItemType>::add(const ItemType& newEntry)
    {

    bool has_room_to_add=(item_count_<max_items_);

      if (has_room_to_add)
      {
        for(int i=0; i<item_count_;i++)
        {
          if(items_[i]==newEntry)
            {
              return false;
            }
        }
      }
      if(has_room_to_add)
      {
        items_[item_count_]=newEntry;
        item_count_++;
      }
      return has_room_to_add;

    }

   /** Removes a given entry from this set,if possible.
    @post  If successful, anEntry has been removed from the set
       and the count of items in the set has decreased by 1.
    @param anEntry  The entry to be removed.
    @return  True if removal was successful, or false if not. */
    template<class ItemType>
    bool Set<ItemType>::remove(const ItemType& anEntry)
    {
      int located_index= getIndexOf(anEntry);
      bool can_remove_item=!isEmpty()&& (located_index > -1);
      if (can_remove_item)
      {
        item_count_--;
        items_[located_index]=items_[item_count_];
      }

      return can_remove_item;
    }

   /** Removes all entries from this set.
    @post  set contains no items, and the count of items is 0. */
    template<class ItemType>
    void Set<ItemType>::clear()
    {
      item_count_=0;
    }

   /** Tests whether this set contains a given entry.
    @param anEntry  The entry to locate.
    @return  True if set contains anEntry, or false otherwise. */
    template<class ItemType>
    bool Set<ItemType>::contains(const ItemType& anEntry) const
   {
      return getIndexOf(anEntry);
   }

   /** Fills a vector with all entries that are in this set.
    @return  A vector containing all the entries in the set. */

    template<class ItemType>
    std::vector<ItemType> Set<ItemType>::toVector() const
   {

      std::vector<ItemType> bag_contents;
      for (int i = 0; i < item_count_; i++)
       bag_contents.push_back(items_[i]);

      return bag_contents;

   }

   // post: Either returns the index of target in the array items_
   // or -1 if the array does not contain the target

  template<class ItemType>
  int Set<ItemType>::getIndexOf(const ItemType & target) const
  {
    bool found = false;
    int result = -1;
    int search_index = 0;

    // If the set is empty, item_count_ is zero, so loop is skipped
    while (!found && (search_index < item_count_))
    {
       if (items_[search_index] == target)
       {
          found = true;
          result = search_index;
       }
       else
       {
          search_index++;
       }  // end if
    }  // end while

    return result;
  }
