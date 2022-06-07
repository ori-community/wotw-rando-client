#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Configuration::ConfigurationElement {
    IL2CPP_REGISTER_METHOD(0x031BB900, app::ConfigurationPropertyCollection *, get_Properties, (app::ConfigurationElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047993A0, ConfigurationElement_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BB930, void, DeserializeElement, (app::ConfigurationElement * this_ptr, app::XmlReader * reader, bool serialize_collection_key))
    IL2CPP_REGISTER_METHODINFO(0x0475AA48, ConfigurationElement_DeserializeElement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BB960, void, InitializeDefault, (app::ConfigurationElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477CCA0, ConfigurationElement_InitializeDefault__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BB990, bool, IsModified, (app::ConfigurationElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04718A10, ConfigurationElement_IsModified__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BB9C0, void, PostDeserialize, (app::ConfigurationElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04711D98, ConfigurationElement_PostDeserialize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BB9F0, void, Reset, (app::ConfigurationElement * this_ptr, app::ConfigurationElement * parent_element))
    IL2CPP_REGISTER_METHODINFO(0x0471DC18, ConfigurationElement_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBA20, void, ResetModified, (app::ConfigurationElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477F360, ConfigurationElement_ResetModified__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBA50, bool, SerializeToXmlElement, (app::ConfigurationElement * this_ptr, app::XmlWriter * writer, app::String * element_name))
    IL2CPP_REGISTER_METHODINFO(0x0475AF90, ConfigurationElement_SerializeToXmlElement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BBA80, void, Unmerge, (app::ConfigurationElement * this_ptr, app::ConfigurationElement * source_element, app::ConfigurationElement * parent_element, app::ConfigurationSaveMode__Enum save_mode))
    IL2CPP_REGISTER_METHODINFO(0x0474D8F0, ConfigurationElement_Unmerge__MethodInfo)
}
