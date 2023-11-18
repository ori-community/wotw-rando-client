#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SettingValueElement.h>
#include <Modloader/app/structs/ConfigurationElement.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/ConfigurationSaveMode__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlReader.h>
#include <Modloader/app/structs/XmlWriter.h>

namespace app::classes::System::Configuration::SettingValueElement {
    IL2CPP_REGISTER_METHOD(0x02962710, void, ctor, (app::SettingValueElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02962740, app::ConfigurationPropertyCollection*, get_Properties, (app::SettingValueElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02962770, app::XmlNode*, get_ValueXml, (app::SettingValueElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029627A0, void, set_ValueXml, (app::SettingValueElement * this_ptr, app::XmlNode* value))
    IL2CPP_REGISTER_METHOD(0x029627D0, void, DeserializeElement, (app::SettingValueElement * this_ptr, app::XmlReader* reader, bool serialize_collection_key))
    IL2CPP_REGISTER_METHOD(0x02962800, bool, IsModified, (app::SettingValueElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02962830, void, Reset, (app::SettingValueElement * this_ptr, app::ConfigurationElement* parent_element))
    IL2CPP_REGISTER_METHOD(0x02962860, void, ResetModified, (app::SettingValueElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02962890, bool, SerializeToXmlElement, (app::SettingValueElement * this_ptr, app::XmlWriter* writer, app::String* element_name))
    IL2CPP_REGISTER_METHOD(0x029628C0, void, Unmerge, (app::SettingValueElement * this_ptr, app::ConfigurationElement* source_element, app::ConfigurationElement* parent_element, app::ConfigurationSaveMode__Enum save_mode))
} // namespace app::classes::System::Configuration::SettingValueElement
