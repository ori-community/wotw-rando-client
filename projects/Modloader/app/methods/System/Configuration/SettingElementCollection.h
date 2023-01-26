#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SettingElementCollection.h>
#include <Modloader/app/structs/ConfigurationElement.h>
#include <Modloader/app/structs/ConfigurationElementCollectionType__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SettingElement.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::SettingElementCollection {
    IL2CPP_REGISTER_METHOD(0x02962560, void, ctor, (app::SettingElementCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02962590, app::ConfigurationElementCollectionType__Enum, get_CollectionType, (app::SettingElementCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029625C0, app::String*, get_ElementName, (app::SettingElementCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029625F0, void, Add, (app::SettingElementCollection * this_ptr, app::SettingElement* element))
    IL2CPP_REGISTER_METHOD(0x02962620, void, Clear, (app::SettingElementCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02962650, app::ConfigurationElement*, CreateNewElement, (app::SettingElementCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02962680, app::SettingElement*, Get, (app::SettingElementCollection * this_ptr, app::String* element_key))
    IL2CPP_REGISTER_METHOD(0x029626B0, app::Object*, GetElementKey, (app::SettingElementCollection * this_ptr, app::ConfigurationElement* element))
    IL2CPP_REGISTER_METHOD(0x029626E0, void, Remove, (app::SettingElementCollection * this_ptr, app::SettingElement* element))
} // namespace app::classes::System::Configuration::SettingElementCollection
