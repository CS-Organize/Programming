#include <iostream>

class Data
{
private:
    std::string mName;
    int mData;

public:
    Data()
    : mName("Data")
    , mData(0)
    {
        std::cout << mName << " Constructor" << std::endl;
    }
    Data(std::string name, int data)
    : mName(name)
    , mData(data)
    {
        std::cout << mName << " Constructor" << std::endl;
    }
    Data(const Data& rhs)
    : mName(rhs.mName)
    , mData(rhs.mData)
    {
        std::cout << mName << " Copy Constructor" << std::endl;
    }
    void operator=(const Data& rhs)
    {
        std::cout << mName << " Copy Assignment" << std::endl;
        mData = rhs.mData;
    }
    ~Data()
    {
        std::cout << mName << " Destructor" << std::endl;
    }
    operator int() const
    {
        return mData;
    }
};
