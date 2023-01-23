#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SwitchLevelAttribute.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Diagnostics::SwitchLevelAttribute {
    IL2CPP_REGISTER_METHOD(0x02005510, void, ctor, (app::SwitchLevelAttribute * this_ptr, app::Type* switch_level_type))
    IL2CPP_REGISTER_METHOD(0x02005510, void, set_SwitchLevelType, (app::SwitchLevelAttribute * this_ptr, app::Type* value))
    IL2CPP_REGISTER_METHODINFO(0x0472DD18, SwitchLevelAttribute_set_SwitchLevelType__MethodInfo)
} // namespace app::classes::System::Diagnostics::SwitchLevelAttribute
