// Creator: chiefwolf
// Date: 8/4/2017

#ifndef W_STREAM_H
#define W_STREAM_H

#include<cstdlib>

class wStream
{
  private:
    std::queue<<string>, std::deque<string> > m_base();

  public:

    // This function will push the given strings one word at a time seperated by
    // a space.
    void push(const string&  input);

    string pop() {return m_base.pop();}

    int size() {return m_base.size();}

    wStream& operator<<(const string& input);
};

#endif
