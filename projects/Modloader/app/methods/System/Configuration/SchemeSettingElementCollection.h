#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Configuration::SchemeSettingElementCollection {
    IL2CPP_REGISTER_METHOD(0x029620B0, void, ctor, (app::SchemeSettingElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04732828, SchemeSettingElementCollection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029620E0, app::ConfigurationElementCollectionType__Enum, get_CollectionType, (app::SchemeSettingElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475ABC0, SchemeSettingElementCollection_get_CollectionType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962110, app::SchemeSettingElement*, get_Item_1, (app::SchemeSettingElementCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04710F78, SchemeSettingElementCollection_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962140, app::SchemeSettingElement*, get_Item_2, (app::SchemeSettingElementCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHODINFO(0x04747A48, SchemeSettingElementCollection_get_Item_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962170, app::ConfigurationElement*, CreateNewElement, (app::SchemeSettingElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476EA10, SchemeSettingElementCollection_CreateNewElement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029621A0, app::Object*, GetElementKey, (app::SchemeSettingElementCollection * this_ptr, app::ConfigurationElement* element))
    IL2CPP_REGISTER_METHODINFO(0x04774710, SchemeSettingElementCollection_GetElementKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029621D0, int32_t, IndexOf, (app::SchemeSettingElementCollection * this_ptr, app::SchemeSettingElement* element))
    IL2CPP_REGISTER_METHODINFO(0x0472D960, SchemeSettingElementCollection_IndexOf__MethodInfo)
} // namespace app::classes::System::Configuration::SchemeSettingElementCollection
