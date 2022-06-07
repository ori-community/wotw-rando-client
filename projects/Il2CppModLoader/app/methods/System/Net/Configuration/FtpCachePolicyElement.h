#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Configuration::FtpCachePolicyElement {
    IL2CPP_REGISTER_METHOD(0x020193E0, void, ctor, (app::FtpCachePolicyElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742AB0, FtpCachePolicyElement__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019410, app::RequestCacheLevel__Enum, get_PolicyLevel, (app::FtpCachePolicyElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475D0D8, FtpCachePolicyElement_get_PolicyLevel__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019440, void, set_PolicyLevel, (app::FtpCachePolicyElement * this_ptr, app::RequestCacheLevel__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x04757418, FtpCachePolicyElement_set_PolicyLevel__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019470, app::ConfigurationPropertyCollection *, get_Properties, (app::FtpCachePolicyElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476AD08, FtpCachePolicyElement_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020194A0, void, DeserializeElement, (app::FtpCachePolicyElement * this_ptr, app::XmlReader * reader, bool serialize_collection_key))
    IL2CPP_REGISTER_METHODINFO(0x04704D50, FtpCachePolicyElement_DeserializeElement__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020194D0, void, Reset, (app::FtpCachePolicyElement * this_ptr, app::ConfigurationElement * parent_element))
    IL2CPP_REGISTER_METHODINFO(0x04704440, FtpCachePolicyElement_Reset__MethodInfo)
}
