/*
 *  La Fortuna drawing library by Ashley Lavery
 *
 *  This library requires the lcd library to work correctly. This is included in the zip
 *  To use this library simply include this header and use the methods below to draw different shapes.
 *
 */

#include <stdint.h>
#include <stdlib.h>

/*
 *  Draws a pixel at the given coordinates
 *
 *  Params: x   - x coordinate
 *          y   - y coordinate
 *          col - colour to draw pixel
 */
void draw_pixel(uint16_t x, uint16_t y, uint16_t col);

/*
 *  Draws a line between the given coordinates
 *
 *  Params: x1  - 1st x coordinate
 *          y1  - 1st y coordinate
 *          x2  - 2nd x coordinate
 *          y2  - 2nd y coordinate
 *          col - colour of the line
 */
void stroke_line(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t col);

/*
 *  Draws the outline of a rectangle given the coordinates of the top left corner and the height and width
 *
 *  Params: x   - top left x coordinate
 *          y   - top left y coordinate
 *          w   - width
 *          h   - height
 *          col - colour of outline
 */
void stroke_rectangle(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t col);

/*
 *  Draws the outline of a rounded rectangle given the coordinates of the top left corner and the height, width
 *  and radius
 *
 *  Params: x   - top left x coordinate
 *          y   - top left y coordinate
 *          w   - width
 *          h   - height
 *          r   - radius of rounded corners
 *          col - colour of outline
 */
void stroke_rounded_rectangle(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t r, uint16_t col);

/*
 *  Draws a filled rounded rectangle given the coordinates of the top left corner and the height, width
 *  and radius
 *
 *  Params: x   - top left x coordinate
 *          y   - top left y coordinate
 *          w   - width
 *          h   - height
 *          r   - radius of rounded corners
 *          col - colour to fill
 */
void fill_rounded_rectangle(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t r, uint16_t col);

/*
 *  Draws the outline of a circle given the coordinates of the center and the radius
 *
 *  Params: x0  - center x coordinate
 *          y0  - center y coordinate
 *          r   - radius
 *          col - colour of outline
 */
void stroke_circle(uint16_t x0, uint16_t y0, uint16_t r, uint16_t col);

/*
 *  Draws a filled circle given the coordinates of the center and the radius
 *
 *  Params: x0  - center x coordinate
 *          y0  - center y coordinate
 *          r   - radius
 *          col - colour of circle
 */
void fill_circle(uint16_t x0, uint16_t y0, uint16_t r, uint16_t col);

/*
 *  Draws the outline of a polygon using the given x and y points in the given colour
 *
 *  Params: xPoints - array of the x points for the polygon
 *          yPoints - array of the y points for the polygon
 *          size    - size of the x and y point arrays
 *          col     - colour of outline
 */
void stroke_polygon(uint16_t *xPoints, uint16_t *yPoints, uint16_t size, uint16_t col);

/*
 *  Draws a filled polygon using the given x and y points in the given colour
 *
 *  Params: xPoints - array of the x points for the polygon
 *          yPoints - array of the y points for the polygon
 *          size    - size of the x and y point arrays
 *          col     - colour of polygon
 */
void fill_polygon(uint16_t *xPoints, uint16_t *yPoints, uint16_t size, uint16_t col);
