#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CCFont_Char {
    IL2CPP_REGISTER_METHOD(0x0315B0B0, float, AdvanceWithKerning, (app::CCFont_Char * this_ptr, uint16_t next_char))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CCFont_Char * this_ptr))
}
