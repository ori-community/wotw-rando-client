#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CCFont_Char.h>

namespace app::classes::CCFont_Char {
    IL2CPP_REGISTER_METHOD(0x0315B0B0, float, AdvanceWithKerning, app::CCFont_Char* this_ptr, char16_t next_char)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CCFont_Char* this_ptr)
} // namespace app::classes::CCFont_Char
