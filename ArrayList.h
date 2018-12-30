#pragma once

namespace MyLib
{
    template <typename T>
    struct ArrayList
    {
    public:
        ArrayList();
        
        /// Append the specified element, |elem| to the end of this list
        void add(T elem);
        /// Return the element at the specified position, |index| in this list
        T get(int index);
        /// Return the number of elements in this list
        int size();
        
    private:
        T* _elements; //< array of elements
        int _capacity; //< length of array
        int _size; //< number of elements added
    };

    /// Construct a new empty list
    template <typename T>
    inline ArrayList<T>::ArrayList()
    {
        _elements = new T[10]();
        _size = 0;
        _capacity = 10;
    }
    
    /// TODO
    template <typename T>
    inline void ArrayList<T>::add( T elem )
    {
        // TODO: Check size
        _elements[_size] = elem;
        _size++;
    }
    
    /// TODO
    template <typename T>
    inline T ArrayList<T>::get( int index )
    {
        // TODO: Check for valid index
        return _elements[index];
    }
    
    template <typename T>
    inline int ArrayList<T>::size()
    {
        return _size;
    }
}


