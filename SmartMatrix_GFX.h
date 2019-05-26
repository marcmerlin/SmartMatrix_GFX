/*--------------------------------------------------------------------
  Arduino library based on Adafruit_Neomatrix but modified to work with SmartMatrix
  by Marc MERLIN <marc_soft@merlins.org>

  Original notice and license from Adafruit_Neomatrix:
  NeoMatrix is free software: you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as
  published by the Free Software Foundation, either version 3 of
  the License, or (at your option) any later version.

  NeoMatrix is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with NeoMatrix.  If not, see
  <http://www.gnu.org/licenses/>.
  --------------------------------------------------------------------*/

#ifndef _SMARTMATRIX_GFX_H_
#define _SMARTMATRIX_GFX_H_
#include "Framebuffer_GFX.h"
#include "FastLED.h"

class SmartMatrix_GFX : public Framebuffer_GFX {

 public:
  SmartMatrix_GFX(CRGB *, uint8_t w, uint8_t h, void (* showptr)());
};

#endif // _SMARTMATRIX_GFX_H_
// vim:sts=2:sw=2
