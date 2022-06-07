#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Configuration::SettingValueElement {
    IL2CPP_REGISTER_METHOD(0x02962710, void, ctor, (app::SettingValueElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478C550, SettingValueElement__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962740, app::ConfigurationPropertyCollection *, get_Properties, (app::SettingValueElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E760, SettingValueElement_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962770, app::XmlNode *, get_ValueXml, (app::SettingValueElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478B8F8, SettingValueElement_get_ValueXml__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029627A0, void, set_ValueXml, (app::SettingValueElement * this_ptr, app::XmlNode * value))
    IL2CPP_REGISTER_METHODINFO(0x047522C0, SettingValueElement_set_ValueXml__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029627D0, void, DeserializeElement, (app::SettingValueElement * this_ptr, app::XmlReader * reader, bool serialize_collection_key))
    IL2CPP_REGISTER_METHODINFO(0x0477E258, SettingValueElement_DeserializeElement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962800, bool, IsModified, (app::SettingValueElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04719270, SettingValueElement_IsModified__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962830, void, Reset, (app::SettingValueElement * this_ptr, app::ConfigurationElement * parent_element))
    IL2CPP_REGISTER_METHODINFO(0x0476F1A8, SettingValueElement_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962860, void, ResetModified, (app::SettingValueElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04724B48, SettingValueElement_ResetModified__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962890, bool, SerializeToXmlElement, (app::SettingValueElement * this_ptr, app::XmlWriter * writer, app::String * element_name))
    IL2CPP_REGISTER_METHODINFO(0x04742810, SettingValueElement_SerializeToXmlElement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029628C0, void, Unmerge, (app::SettingValueElement * this_ptr, app::ConfigurationElement * source_element, app::ConfigurationElement * parent_element, app::ConfigurationSaveMode__Enum save_mode))
    IL2CPP_REGISTER_METHODINFO(0x04738BA8, SettingValueElement_Unmerge__MethodInfo)
}
