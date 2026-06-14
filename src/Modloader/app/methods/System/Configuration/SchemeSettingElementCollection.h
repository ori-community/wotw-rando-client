#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationElement.h>
#include <Modloader/app/structs/ConfigurationElementCollectionType__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SchemeSettingElement.h>
#include <Modloader/app/structs/SchemeSettingElementCollection.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::SchemeSettingElementCollection {
    IL2CPP_REGISTER_METHOD(0x029620B0, void, ctor, app::SchemeSettingElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029620E0, app::ConfigurationElementCollectionType__Enum, get_CollectionType, app::SchemeSettingElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02962110, app::SchemeSettingElement*, get_Item_1, app::SchemeSettingElementCollection* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02962140, app::SchemeSettingElement*, get_Item_2, app::SchemeSettingElementCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02962170, app::ConfigurationElement*, CreateNewElement, app::SchemeSettingElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029621A0, app::Object*, GetElementKey, app::SchemeSettingElementCollection* this_ptr, app::ConfigurationElement* element)
    IL2CPP_REGISTER_METHOD(0x029621D0, int32_t, IndexOf, app::SchemeSettingElementCollection* this_ptr, app::SchemeSettingElement* element)
} // namespace app::classes::System::Configuration::SchemeSettingElementCollection
