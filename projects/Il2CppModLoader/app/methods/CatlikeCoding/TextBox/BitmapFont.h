#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CatlikeCoding::TextBox::BitmapFont {
    IL2CPP_REGISTER_METHOD(0x0102E2F0, app::BitmapFontChar *, get_Item, (app::BitmapFont * this_ptr, uint16_t c))
    IL2CPP_REGISTER_METHOD(0x00D23DC0, bool, get_IsValid, (app::BitmapFont * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0102E550, void, UpdateAllTextBoxes, (app::BitmapFont * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::BitmapFont * this_ptr))
}
