#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Globalization::TimeSpanParse_TimeSpanToken {
    IL2CPP_REGISTER_METHOD(0x001D4560, void, ctor, (app::TimeSpanParse_TimeSpanToken__Boxed * this_ptr, int32_t number))
    IL2CPP_REGISTER_METHOD(0x001D4580, bool, IsInvalidNumber, (app::TimeSpanParse_TimeSpanToken__Boxed * this_ptr, int32_t max_value, int32_t max_precision))
}
