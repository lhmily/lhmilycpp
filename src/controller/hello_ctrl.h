#ifndef __HELLO_CTRL_H__
#define __HELLO_CTRL_H__
#include <httplib.h>

class HelloCtrl
{
public:
      HelloCtrl() {}
      ~HelloCtrl() {}
      void Hello(const httplib::Request &req, httplib::Response &res);
};
#endif