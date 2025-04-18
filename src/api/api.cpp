#include "api.h"

void register_api(httplib::Server &svr) {
  svr.Get("/hello", [](const httplib::Request & /*req*/, httplib::Response &res) {
    res.set_content("Hello World!", "text/plain");
  });
}