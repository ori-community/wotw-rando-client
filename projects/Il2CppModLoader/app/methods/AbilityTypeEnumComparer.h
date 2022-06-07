#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AbilityTypeEnumComparer {
    IL2CPP_REGISTER_METHOD(0x00110230, bool, Equals, (app::AbilityTypeEnumComparer__Boxed * this_ptr, app::AbilityType__Enum x, app::AbilityType__Enum y))
    IL2CPP_REGISTER_METHOD(0x00110240, int32_t, GetHashCode, (app::AbilityTypeEnumComparer__Boxed * this_ptr, app::AbilityType__Enum obj))
}
