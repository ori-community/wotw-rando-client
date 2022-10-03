#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UpgradablePropertyLevel {
    IL2CPP_REGISTER_METHOD(0x013AE020, bool, HasProperty, (app::UpgradablePropertyLevel * this_ptr, app::UpgradablePropertyType__Enum property_type))
    IL2CPP_REGISTER_METHOD(0x013AE1C0, app::UpgradableProperty*, GetProperty, (app::UpgradablePropertyLevel * this_ptr, app::UpgradablePropertyType__Enum property_type))
    IL2CPP_REGISTER_METHOD(0x013AE350, void, ctor, (app::UpgradablePropertyLevel * this_ptr))
} // namespace app::classes::UpgradablePropertyLevel
