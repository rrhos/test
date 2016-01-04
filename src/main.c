#include <pebble.h>
#include "launcher.h"

int main() {
  show_launcher();
  app_event_loop();
  return 0;
}