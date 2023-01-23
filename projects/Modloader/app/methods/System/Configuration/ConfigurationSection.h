#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ConfigurationSection.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ConfigurationElement.h>
#include <Modloader/app/structs/ConfigurationSaveMode__Enum.h>

namespace app::classes::System::Configuration::ConfigurationSection {
    IL2CPP_REGISTER_METHOD(0x031BBDE0, void, DeserializeSection, (app::ConfigurationSection * this_ptr, app::XmlReader* reader))
    IL2CPP_REGISTER_METHODINFO(0x0478C668, ConfigurationSection_DeserializeSection__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBE10, bool, IsModified, (app::ConfigurationSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473A7E0, ConfigurationSection_IsModified__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBE40, void, ResetModified, (app::ConfigurationSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475E8A0, ConfigurationSection_ResetModified__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBE70, app::String*, SerializeSection, (app::ConfigurationSection * this_ptr, app::ConfigurationElement* parent_element, app::String* name, app::ConfigurationSaveMode__Enum save_mode))
    IL2CPP_REGISTER_METHODINFO(0x0470F8F0, ConfigurationSection_SerializeSection__MethodInfo)
} // namespace app::classes::System::Configuration::ConfigurationSection
