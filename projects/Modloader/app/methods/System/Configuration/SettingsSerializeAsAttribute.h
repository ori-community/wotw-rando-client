#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Configuration::SettingsSerializeAsAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SettingsSerializeAsAttribute * this_ptr, app::SettingsSerializeAs__Enum serialize_as))
    IL2CPP_REGISTER_METHOD(0x01FFE260, app::SettingsSerializeAs__Enum, get_SerializeAs, (app::SettingsSerializeAsAttribute * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475BA60, SettingsSerializeAsAttribute_get_SerializeAs__MethodInfo)
} // namespace app::classes::System::Configuration::SettingsSerializeAsAttribute
