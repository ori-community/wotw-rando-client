#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BitmapFontChar_1.h>
#include <Modloader/app/structs/BitmapFont_1.h>

namespace app::classes::Moon::UI::BitmapFont {
    IL2CPP_REGISTER_METHOD(0x00D23B60, app::BitmapFontChar_1*, get_Item, (app::BitmapFont_1 * this_ptr, char16_t c))
    IL2CPP_REGISTER_METHOD(0x00D23DC0, bool, get_IsValid, (app::BitmapFont_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D23DE0, void, UpdateAllTextBoxes, (app::BitmapFont_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::BitmapFont_1 * this_ptr))
} // namespace app::classes::Moon::UI::BitmapFont
