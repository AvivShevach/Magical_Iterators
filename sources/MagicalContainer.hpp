#include <vector>
#include <iostream>
using namespace std;
namespace ariel{};
class MagicalContainer
{
   private:
        vector<int> elements;
        vector<int> sortedCollection;

 public:
    void addElement(int){};
    int size(){return 1;};
    void removeElement(int){};
    vector<int> getCollection() const;

    vector<int>::const_iterator begin() const{return sortedCollection.begin();};
    vector<int>::const_iterator end() const{return sortedCollection.end();};
    class AscendingIterator;
    class SideCrossIterator;
    class PrimeIterator;

};
   class MagicalContainer::AscendingIterator
   {
      MagicalContainer &container;
      vector<int> sortedCollection;
      int index;
    public:
       AscendingIterator(MagicalContainer& cont): container(cont), index(0){};
       AscendingIterator(const AscendingIterator& other);

      bool operator==(const AscendingIterator& otherIter) const {return true;}
      bool operator>(const AscendingIterator& otherIter) const {return true;}
      bool operator<(const AscendingIterator& otherIter) const {return true;}
      bool operator!=(const AscendingIterator& otherIter) const {return false;}
      AscendingIterator& operator++();

      vector<int>::const_iterator begin() const{return sortedCollection.begin();};
      vector<int>::const_iterator end() const{return sortedCollection.end();};

   };

class MagicalContainer::SideCrossIterator {
    private:
        MagicalContainer& container;
        vector<int> sortedCollection;

        
        int indStart;
        int indEnd;

    public:
        SideCrossIterator(MagicalContainer& cont): container(cont), indStart(0), indEnd(cont.size()){};;
        SideCrossIterator(const SideCrossIterator& other);
        SideCrossIterator& operator=(const SideCrossIterator& other);
        bool operator==(const SideCrossIterator& otherIter) const {return true;}
        bool operator>(const SideCrossIterator& otherIter) const {return true;}
        bool operator<(const SideCrossIterator& otherIter) const {return true;}
        bool operator!=(const SideCrossIterator& otherIter) const {return false;}
        SideCrossIterator& operator++();
        vector<int>::const_iterator begin() const{return sortedCollection.begin();};
        vector<int>::const_iterator end() const{return sortedCollection.end();};

    };
class MagicalContainer::PrimeIterator
 {
    private:
        MagicalContainer& container;
        vector<int> sortedCollection;
        int index;

        bool isPrime(int num);

    public:
        PrimeIterator(MagicalContainer& cont): container(cont), index(0){};
        PrimeIterator(const PrimeIterator& other);
        PrimeIterator& operator=(const PrimeIterator& other);
        bool operator==(const PrimeIterator& otherIter) const {return true;}
        bool operator>(const PrimeIterator& otherIter) const {return true;}
        bool operator<(const PrimeIterator& otherIter) const {return true;}
        bool operator!=(const PrimeIterator& otherIter) const {return false;}
        int& operator*() {return (int&)index;};
        PrimeIterator& operator++(){return *this;};
        vector<int>::const_iterator begin() const{return sortedCollection.begin();};
        vector<int>::const_iterator end() const{return sortedCollection.end();};
    };

