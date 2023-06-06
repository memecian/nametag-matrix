#define Letter char[4]

/*  LETTER pseudotype
    This is stupid. Please don't use this anywhere else.
    -----------------------------------------------------
      0   1   2   3
    +---+---+---+---+
  0 |   |   |   |   | Consider each letter as a 4x8 box.
    +---+---+---+---+ 
  1 |   |   |   | # | A letter has discreet strokes, pixels, whatever. 
    +---+---+---+---+
  2 |   |   |   | # | Pack them up into a char array, like this:
    +---+---+---+---+ 
  3 |   |   |   | # |   Letter d_lower = {
    +---+---+---+---+       0b00000110,
  4 |   | # | # | # |       0b00001001,
    +---+---+---+---+       0b00001001,
  5 | # |   |   | # |       0b01111110
    +---+---+---+---+   }
  6 | # |   |   | # | ... and you're good.
    +---+---+---+---+
  7 |   | # | # |   |
    +---+---+---+---+
*/

Letter d_lower = {
    0b00000110,
    0b00001001,
    0b00001001,
    0b01111110
}