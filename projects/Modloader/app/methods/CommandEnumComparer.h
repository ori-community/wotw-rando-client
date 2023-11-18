#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CommandEnumComparer__Boxed.h>
#include <Modloader/app/structs/Input_Command__Enum.h>

namespace app::classes::CommandEnumComparer {
    IL2CPP_REGISTER_METHOD(0x00124C50, bool, Equals, (app::CommandEnumComparer__Boxed * this_ptr, app::Input_Command__Enum x, app::Input_Command__Enum y))
    IL2CPP_REGISTER_METHOD(0x00124C60, int32_t, GetHashCode, (app::CommandEnumComparer__Boxed * this_ptr, app::Input_Command__Enum obj))
} // namespace app::classes::CommandEnumComparer
