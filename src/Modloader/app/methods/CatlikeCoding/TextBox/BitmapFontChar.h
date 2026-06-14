#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BitmapFontChar.h>

namespace app::classes::CatlikeCoding::TextBox::BitmapFontChar {
    IL2CPP_REGISTER_METHOD(0x0102E680, float, GetKerning, app::BitmapFontChar* this_ptr, char16_t next_char)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BitmapFontChar* this_ptr)
} // namespace app::classes::CatlikeCoding::TextBox::BitmapFontChar
