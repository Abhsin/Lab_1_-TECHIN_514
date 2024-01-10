#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

#define OLED_RESET 0 
#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 

// Create the display object
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Initialize the display
void setup() {
  // Initialize the serial port
  Serial.begin(115200);

  Wire.begin();
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0); 
  display.println(F("Hello World!")); 
  display.println(F("Hello World!"));
  display.display();
}

// Main loop
void loop() {
  // Do nothing
}
