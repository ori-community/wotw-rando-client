#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Reflection::MonoPropertyInfo {
    IL2CPP_REGISTER_METHOD(0x02694530, void, get_property_info, (app::MonoProperty * prop, app::MonoPropertyInfo* info, app::PInfo__Enum req_info))
    IL2CPP_REGISTER_METHOD(0x02694620, app::Type__Array*, GetTypeModifiers, (app::MonoProperty * prop, bool optional))
    IL2CPP_REGISTER_METHOD(0x0173D7D0, app::Object*, get_default_value, (app::MonoProperty * prop))
} // namespace app::classes::System::Reflection::MonoPropertyInfo
