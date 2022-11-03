#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Configuration::SettingsProviderCollection {
    IL2CPP_REGISTER_METHOD(0x01FFE110, void, ctor, (app::SettingsProviderCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470E830, SettingsProviderCollection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFE140, app::SettingsProvider*, get_Item, (app::SettingsProviderCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHODINFO(0x04746BD8, SettingsProviderCollection_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFE170, void, Add, (app::SettingsProviderCollection * this_ptr, app::ProviderBase* provider))
    IL2CPP_REGISTER_METHODINFO(0x0472FE40, SettingsProviderCollection_Add__MethodInfo)
} // namespace app::classes::System::Configuration::SettingsProviderCollection
