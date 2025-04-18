#include <httplib.h>

int main(int argc, char const *argv[])
{
      httplib::Server svr;
      
      svr.Get("/hi", [](const httplib::Request & /*req*/, httplib::Response &res) {
            res.set_content("Hello World!", "text/plain");
      });
      return svr.listen("localhost", 8080);
}
