#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CommandEnumComparer {
    IL2CPP_REGISTER_METHOD(0x00124C50, bool, Equals, (app::CommandEnumComparer__Boxed * this_ptr, app::Input_Command__Enum x, app::Input_Command__Enum y))
    IL2CPP_REGISTER_METHOD(0x00124C60, int32_t, GetHashCode, (app::CommandEnumComparer__Boxed * this_ptr, app::Input_Command__Enum obj))
}
