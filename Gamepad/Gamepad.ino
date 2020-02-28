
#include <sbuttons.h>
#include <SimpleTasks.h>

SButtons buttons;
SimpleTasks task;

// Buttons pin's
const uint8_t VIBRO_HIGH = 6;
const uint8_t VIBRO_LOW = 5;

const uint8_t LEFT_STICK_BTN_PIN = 22,
              RIGHT_STICK_BTN_PIN = 23;

const uint8_t UP_PIN = 15,
              DOWN_PIN = 12,
              LEFT_PIN = 13,
              RIGHT_PIN = 14;

const uint8_t KEY1_L_PIN = 4,
              KEY2_L_PIN = 2,
              KEY1_R_PIN = 27,
              KEY2_R_PIN = 17;

const uint8_t TRIANGLE_PIN = 18,
              CIRCLE_PIN = 19,
              SQUARE_PIN = 25,
              FORK_PIN = 26;

const uint8_t CENTRAL_PIN = 36;

// Buttons ID's
uint8_t LEFT_STICK_BTN,
        RIGHT_STICK_BTN;

// Central console
uint8_t TURBO,
        SELECT,
        MODE,
        START,
        AUTO;

// TPad
uint8_t LEFT,
        RIGHT,
        UP,
        DOWN;

// Left console
uint8_t TRIANGLE,
        CIRCLE,
        SQUARE,
        FORK;

// Additional
uint8_t KEY1_L,
        KEY2_L,
        KEY1_R,
        KEY2_R;

void setup() {
  Serial.begin(115200);
  Serial.print("Init buttons... ");
  
  LEFT_STICK_BTN = buttons.addButton(LEFT_STICK_BTN_PIN, LOW, INPUT_PULLUP);
  RIGHT_STICK_BTN = buttons.addButton(RIGHT_STICK_BTN_PIN, LOW, INPUT_PULLUP);
  
  UP = buttons.addButton(UP_PIN, HIGH, INPUT_PULLDOWN);
  DOWN = buttons.addButton(DOWN_PIN, HIGH, INPUT_PULLDOWN);
  LEFT = buttons.addButton(LEFT_PIN, HIGH, INPUT_PULLDOWN);
  RIGHT = buttons.addButton(RIGHT_PIN, HIGH, INPUT_PULLDOWN);

  TRIANGLE = buttons.addButton(TRIANGLE_PIN, HIGH, INPUT_PULLDOWN);
  CIRCLE = buttons.addButton(CIRCLE_PIN, HIGH, INPUT_PULLDOWN);
  SQUARE = buttons.addButton(SQUARE_PIN, HIGH, INPUT_PULLDOWN);
  FORK = buttons.addButton(FORK_PIN, HIGH, INPUT_PULLDOWN);

  KEY1_L = buttons.addButton(KEY1_L_PIN, HIGH, INPUT_PULLDOWN);
  KEY2_L = buttons.addButton(KEY2_L_PIN, HIGH, INPUT_PULLDOWN);
  KEY1_R = buttons.addButton(KEY1_R_PIN, HIGH, INPUT_PULLDOWN);
  KEY2_R = buttons.addButton(KEY2_R_PIN, HIGH, INPUT_PULLDOWN);

  SELECT = buttons.addAnalog(CENTRAL_PIN, 0,  20);
  MODE = buttons.addAnalog(CENTRAL_PIN, 1100 , 1200);
  START = buttons.addAnalog(CENTRAL_PIN, 600,  800);
  TURBO = buttons.addAnalog(CENTRAL_PIN, 200,  300);
  AUTO = buttons.addAnalog(CENTRAL_PIN, 1500,  1700);

  Serial.println("OK");

  Serial.print("Init tasks... ");

  Serial.println("OK");
}

void loop() {
  buttons.update();

  if (buttons.isClicked(LEFT_STICK_BTN)) {
    Serial.println ("LEFT STICK");
  }

  if (buttons.isClicked(RIGHT_STICK_BTN)) {
    Serial.println ("RIGHT STICK");
  }

  if (buttons.isClicked(UP)) {
    Serial.println("UP");
  }

  if (buttons.isClicked(DOWN)) {
    Serial.println ("DOWN");
  }

  if (buttons.isClicked(LEFT)) {
    Serial.println ("LEFT");
  }

  if (buttons.isClicked(RIGHT)) {
    Serial.println ("RIGHT");
  }

  if (buttons.isClicked(TRIANGLE)) {
    Serial.println ("TRIANGLE");
  }

  if (buttons.isClicked(CIRCLE)) {
    Serial.println ("CIRCLE");
  }

  if (buttons.isClicked(SQUARE)) {
    Serial.println ("SQUARE");
  }

  if (buttons.isClicked(FORK)) {
    Serial.println ("FORK");
  }

  if (buttons.isClicked(TURBO)) {
    Serial.println ("TURBO");

  }
  if (buttons.isClicked(SELECT)) {
    Serial.println ("SELECT");

  }
  if (buttons.isClicked(MODE)) {
    Serial.println ("MODE");

  }
  if (buttons.isClicked(START)) {
    Serial.println ("START");

  }
  if (buttons.isClicked(AUTO)) {
    Serial.println ("AUTO");

  }
  if (buttons.isClicked(KEY1_L)) {
    Serial.println ("KEY1_L");

  }
  if (buttons.isClicked(KEY2_L)) {
    Serial.println ("KEY2_L");

  }
  if (buttons.isClicked(KEY1_R)) {
    Serial.println ("KEY1_R");

  }
  if (buttons.isClicked(KEY2_R)) {
    Serial.println ("KEY2_R");

  }

  delay(10);
}
