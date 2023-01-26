#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_Object_.h>
#include <Modloader/app/structs/IEnumerable_1_LightPriority_Layer_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Int32Enum_.h>

namespace app::classes::EnumUtil {
    IL2CPP_REGISTER_METHOD(0x0156C140, app::IEnumerable_1_System_Object_*, GetValues_1, ())
    IL2CPP_REGISTER_METHOD(0x0156C050, app::IEnumerable_1_LightPriority_Layer_*, GetValues_2, ())
    IL2CPP_REGISTER_METHOD(0x0156C050, app::IEnumerable_1_System_Int32Enum_*, GetValues_3, ())
} // namespace app::classes::EnumUtil
