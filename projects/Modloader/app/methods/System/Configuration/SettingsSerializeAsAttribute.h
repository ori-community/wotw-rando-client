#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SettingsSerializeAsAttribute.h>
#include <Modloader/app/structs/SettingsSerializeAs__Enum.h>

namespace app::classes::System::Configuration::SettingsSerializeAsAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SettingsSerializeAsAttribute * this_ptr, app::SettingsSerializeAs__Enum serialize_as))
    IL2CPP_REGISTER_METHOD(0x01FFE260, app::SettingsSerializeAs__Enum, get_SerializeAs, (app::SettingsSerializeAsAttribute * this_ptr))
} // namespace app::classes::System::Configuration::SettingsSerializeAsAttribute
