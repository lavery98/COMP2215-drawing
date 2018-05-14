#include "drawing.h"
#include "lcd.h"

void main(void) {
  /* 8MHz clock, no prescaling (DS, p. 48) */
  CLKPR = (1 << CLKPCE);
  CLKPR = 0;

  init_lcd();

  stroke_rectangle(0, 0, 100, 100, BLUE);

  fill_circle(50, 50, 60, RED);
  stroke_circle(50, 50, 60, GREEN);

  stroke_line(0, 0, 200, 200, GREEN);

  stroke_line(100, 100, 100, 200, RED);

  stroke_line(200, 100, 0, 0, WHITE);

  fill_rounded_rectangle(100, 100, 100, 100, 20, BLUE);

  uint16_t xPoints[] = {25, 25, 50, 50, 125, 125, 50, 50, 125, 125, 25};
  uint16_t yPoints[] = {25, 175, 175, 100, 100, 75, 75, 50, 50, 25, 25};
  fill_polygon(xPoints, yPoints, 11, BLUE);

  for(;;) {}
}
