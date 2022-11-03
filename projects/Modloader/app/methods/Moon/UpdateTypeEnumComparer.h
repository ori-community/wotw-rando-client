#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::UpdateTypeEnumComparer {
    IL2CPP_REGISTER_METHOD(0x00124C50, bool, Equals, (app::UpdateTypeEnumComparer__Boxed * this_ptr, app::UpdateType__Enum x, app::UpdateType__Enum y))
    IL2CPP_REGISTER_METHOD(0x00124C60, int32_t, GetHashCode, (app::UpdateTypeEnumComparer__Boxed * this_ptr, app::UpdateType__Enum obj))
} // namespace app::classes::Moon::UpdateTypeEnumComparer
