#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationElement.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/ConfigurationSaveMode__Enum.h>
#include <Modloader/app/structs/IgnoreSection.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlReader.h>

namespace app::classes::System::Configuration::IgnoreSection {
    IL2CPP_REGISTER_METHOD(0x031BBEA0, void, ctor, app::IgnoreSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BBED0, app::ConfigurationPropertyCollection*, get_Properties, app::IgnoreSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BBF00, void, DeserializeSection, app::IgnoreSection* this_ptr, app::XmlReader* xml_reader)
    IL2CPP_REGISTER_METHOD(0x031BBF30, bool, IsModified, app::IgnoreSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BBF60, void, Reset, app::IgnoreSection* this_ptr, app::ConfigurationElement* parent_section)
    IL2CPP_REGISTER_METHOD(0x031BBF90, void, ResetModified, app::IgnoreSection* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x031BBFC0,
        app::String*,
        SerializeSection,
        app::IgnoreSection* this_ptr,
        app::ConfigurationElement* parent_section,
        app::String* name,
        app::ConfigurationSaveMode__Enum save_mode
    )
} // namespace app::classes::System::Configuration::IgnoreSection
