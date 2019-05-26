/*-------------------------------------------------------------------------
  Arduino library based on Adafruit_Neomatrix but modified to work with SmartMatrix
  by Marc MERLIN <marc_soft@merlins.org>

  You should have received a copy of the GNU Lesser General Public
  License along with NeoMatrix.  If not, see
  <http://www.gnu.org/licenses/>.
  -------------------------------------------------------------------------*/

#include <Adafruit_GFX.h>
#include <SmartMatrix_GFX.h>

SmartMatrix_GFX::SmartMatrix_GFX(CRGB *leds, uint8_t w, uint8_t h, void (* showptr)()): 
  Framebuffer_GFX(leds, w, h, showptr) { 
}


// vim:sts=2:sw=2
