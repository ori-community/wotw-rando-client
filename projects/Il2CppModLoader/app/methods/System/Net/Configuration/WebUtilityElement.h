#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Configuration::WebUtilityElement {
    IL2CPP_REGISTER_METHOD(0x01E99AA0, void, ctor, (app::WebUtilityElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047117A8, WebUtilityElement__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99AD0, app::ConfigurationPropertyCollection*, get_Properties, (app::WebUtilityElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04757430, WebUtilityElement_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99B00, app::UnicodeDecodingConformance__Enum, get_UnicodeDecodingConformance, (app::WebUtilityElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04747DE8, WebUtilityElement_get_UnicodeDecodingConformance__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99B30, void, set_UnicodeDecodingConformance, (app::WebUtilityElement * this_ptr, app::UnicodeDecodingConformance__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x047846C0, WebUtilityElement_set_UnicodeDecodingConformance__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99B60, app::UnicodeEncodingConformance__Enum, get_UnicodeEncodingConformance, (app::WebUtilityElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04716260, WebUtilityElement_get_UnicodeEncodingConformance__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99B90, void, set_UnicodeEncodingConformance, (app::WebUtilityElement * this_ptr, app::UnicodeEncodingConformance__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x047443D0, WebUtilityElement_set_UnicodeEncodingConformance__MethodInfo)
} // namespace app::classes::System::Net::Configuration::WebUtilityElement
