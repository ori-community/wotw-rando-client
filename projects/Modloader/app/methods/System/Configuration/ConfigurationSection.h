#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationElement.h>
#include <Modloader/app/structs/ConfigurationSaveMode__Enum.h>
#include <Modloader/app/structs/ConfigurationSection.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlReader.h>

namespace app::classes::System::Configuration::ConfigurationSection {
    IL2CPP_REGISTER_METHOD(0x031BBDE0, void, DeserializeSection, app::ConfigurationSection* this_ptr, app::XmlReader* reader)
    IL2CPP_REGISTER_METHOD(0x031BBE10, bool, IsModified, app::ConfigurationSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BBE40, void, ResetModified, app::ConfigurationSection* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x031BBE70,
        app::String*,
        SerializeSection,
        app::ConfigurationSection* this_ptr,
        app::ConfigurationElement* parent_element,
        app::String* name,
        app::ConfigurationSaveMode__Enum save_mode
    )
} // namespace app::classes::System::Configuration::ConfigurationSection
