#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::UI::BitmapFontChar {
    IL2CPP_REGISTER_METHOD(0x00D23F10, float, GetKerning, (app::BitmapFontChar_1 * this_ptr, uint16_t next_char))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BitmapFontChar_1 * this_ptr))
} // namespace app::classes::Moon::UI::BitmapFontChar
