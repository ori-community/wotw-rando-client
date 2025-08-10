#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationElement.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/ConfigurationSaveMode__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Configuration::ConfigurationElement {
    IL2CPP_REGISTER_METHOD(0x031BB900, app::ConfigurationPropertyCollection*, get_Properties, app::ConfigurationElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BB930, void, DeserializeElement, app::ConfigurationElement* this_ptr, app::XmlReader* reader, bool serialize_collection_key)
    IL2CPP_REGISTER_METHOD(0x031BB960, void, InitializeDefault, app::ConfigurationElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BB990, bool, IsModified, app::ConfigurationElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BB9C0, void, PostDeserialize, app::ConfigurationElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BB9F0, void, Reset, app::ConfigurationElement* this_ptr, app::ConfigurationElement* parent_element)
    IL2CPP_REGISTER_METHOD(0x031BBA20, void, ResetModified, app::ConfigurationElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031BBA50, bool, SerializeToXmlElement, app::ConfigurationElement* this_ptr, app::XmlWriter* writer, app::String* element_name)
    IL2CPP_REGISTER_METHOD(
        0x031BBA80,
        void,
        Unmerge,
        app::ConfigurationElement* this_ptr,
        app::ConfigurationElement* source_element,
        app::ConfigurationElement* parent_element,
        app::ConfigurationSaveMode__Enum save_mode
    )
} // namespace app::classes::System::Configuration::ConfigurationElement
