#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Configuration::IgnoreSection {
    IL2CPP_REGISTER_METHOD(0x031BBEA0, void, ctor, (app::IgnoreSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04783E10, IgnoreSection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBED0, app::ConfigurationPropertyCollection*, get_Properties, (app::IgnoreSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471FE40, IgnoreSection_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBF00, void, DeserializeSection, (app::IgnoreSection * this_ptr, app::XmlReader* xml_reader))
    IL2CPP_REGISTER_METHODINFO(0x0470C040, IgnoreSection_DeserializeSection__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBF30, bool, IsModified, (app::IgnoreSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047296A0, IgnoreSection_IsModified__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBF60, void, Reset, (app::IgnoreSection * this_ptr, app::ConfigurationElement* parent_section))
    IL2CPP_REGISTER_METHODINFO(0x047411C0, IgnoreSection_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBF90, void, ResetModified, (app::IgnoreSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04788C70, IgnoreSection_ResetModified__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBFC0, app::String*, SerializeSection, (app::IgnoreSection * this_ptr, app::ConfigurationElement* parent_section, app::String* name, app::ConfigurationSaveMode__Enum save_mode))
    IL2CPP_REGISTER_METHODINFO(0x04769D50, IgnoreSection_SerializeSection__MethodInfo)
} // namespace app::classes::System::Configuration::IgnoreSection
