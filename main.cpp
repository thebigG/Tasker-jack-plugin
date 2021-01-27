#include <jack/jack.h>

#include <iostream>

using namespace std;

jack_client_t* client;
int main() {
  const char** ports;
  const char* client_name;
  const char* server_name = NULL;
  jack_options_t options = JackNullOption;
  jack_status_t status;
  //  paTestData data;
  client = jack_client_open(client_name, options, &status, server_name);
  cout << "Hello World!" << endl;
  return 0;
}
