#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Globalization::TimeSpanParse_TimeSpanTokenizer {
    IL2CPP_REGISTER_METHOD(0x001D4590, void, Init_1, (app::TimeSpanParse_TimeSpanTokenizer__Boxed * this_ptr, app::String * input))
    IL2CPP_REGISTER_METHOD(0x001D45A0, void, Init_2, (app::TimeSpanParse_TimeSpanTokenizer__Boxed * this_ptr, app::String * input, int32_t start_position))
    IL2CPP_REGISTER_METHOD(0x001D45B0, app::TimeSpanParse_TimeSpanToken, GetNextToken, (app::TimeSpanParse_TimeSpanTokenizer__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D45E0, bool, get_EOL, (app::TimeSpanParse_TimeSpanTokenizer__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D4610, uint16_t, get_NextChar, (app::TimeSpanParse_TimeSpanTokenizer__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D4660, uint16_t, get_CurrentChar, (app::TimeSpanParse_TimeSpanTokenizer__Boxed * this_ptr))
}
