#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Configuration::SettingElementCollection {
    IL2CPP_REGISTER_METHOD(0x02962560, void, ctor, (app::SettingElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04785788, SettingElementCollection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962590, app::ConfigurationElementCollectionType__Enum, get_CollectionType, (app::SettingElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755B40, SettingElementCollection_get_CollectionType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029625C0, app::String*, get_ElementName, (app::SettingElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047140E8, SettingElementCollection_get_ElementName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029625F0, void, Add, (app::SettingElementCollection * this_ptr, app::SettingElement* element))
    IL2CPP_REGISTER_METHODINFO(0x047149E8, SettingElementCollection_Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962620, void, Clear, (app::SettingElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04721DD8, SettingElementCollection_Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962650, app::ConfigurationElement*, CreateNewElement, (app::SettingElementCollection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477E278, SettingElementCollection_CreateNewElement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962680, app::SettingElement*, Get, (app::SettingElementCollection * this_ptr, app::String* element_key))
    IL2CPP_REGISTER_METHODINFO(0x04749728, SettingElementCollection_Get__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029626B0, app::Object*, GetElementKey, (app::SettingElementCollection * this_ptr, app::ConfigurationElement* element))
    IL2CPP_REGISTER_METHODINFO(0x047549A0, SettingElementCollection_GetElementKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029626E0, void, Remove, (app::SettingElementCollection * this_ptr, app::SettingElement* element))
    IL2CPP_REGISTER_METHODINFO(0x04791550, SettingElementCollection_Remove__MethodInfo)
} // namespace app::classes::System::Configuration::SettingElementCollection
