#include "opennurbs.h"

int ON_MapWindowsCodePage932ToUnicode(
  ON__UINT32 code_page_932_character_value,
  ON__UINT32* unicode_code_point
)
{
    // Dummy function to bypass compiler errors on Linux
    if (unicode_code_point) {
        *unicode_code_point = 0;
    }
    return 0;
}
