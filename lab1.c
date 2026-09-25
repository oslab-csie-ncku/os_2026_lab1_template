#include "lab1.h"

void receive(message_t *message_ptr, mailbox_t *mailbox_ptr) {
  /*  TODO:
      1. Use flag to determine the communication method
      2. According to the communication method, receive the message
  */
}

void send(message_t message, mailbox_t *mailbox_ptr) {
  /*  TODO:
      1. Use flag to determine the communication method
      2. According to the communication method, send the message
  */
}

int main(int argc, char *argv[]) {

  if (argc < 3) {
    printf("Usage: %s sender <mechanism> input_file \n", argv[0]);
    printf("       %s receiver <mechanism> \n", argv[0]);
    return EXIT_FAILURE;
  }

  /* TODO:
    Your implementation here
  */

  return 0;
}
