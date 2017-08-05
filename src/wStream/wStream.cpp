// Creator: chiefwolf
// Date: 8/4/2017

#include "wStream.h"

//-----------------------------------------------------------------------------
void wStream::push(const string& input)
{
  int i = 0;
  string data;

  data.clear(); // Just to make sure it is empty before used

  while(i < input.size())
  {
    if(input[i] != " ")
    {
      data += input[i];
    }
    else
    {
      m_base.push(data);
      data.clear();
    }

    i++;
  }

  return;
}

//-----------------------------------------------------------------------------
wStream& wStream::operator<<(const string& input)
{
  this->push(input);

  return *this;
}
