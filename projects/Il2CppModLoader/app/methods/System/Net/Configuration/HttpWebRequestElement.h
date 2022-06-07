#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Configuration::HttpWebRequestElement {
    IL2CPP_REGISTER_METHOD(0x02019980, void, ctor, (app::HttpWebRequestElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473D638, HttpWebRequestElement__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020199B0, int32_t, get_MaximumErrorResponseLength, (app::HttpWebRequestElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04732DA0, HttpWebRequestElement_get_MaximumErrorResponseLength__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020199E0, void, set_MaximumErrorResponseLength, (app::HttpWebRequestElement * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04751008, HttpWebRequestElement_set_MaximumErrorResponseLength__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019A10, int32_t, get_MaximumResponseHeadersLength, (app::HttpWebRequestElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04705E98, HttpWebRequestElement_get_MaximumResponseHeadersLength__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019A40, void, set_MaximumResponseHeadersLength, (app::HttpWebRequestElement * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04766508, HttpWebRequestElement_set_MaximumResponseHeadersLength__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019A70, int32_t, get_MaximumUnauthorizedUploadLength, (app::HttpWebRequestElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742F60, HttpWebRequestElement_get_MaximumUnauthorizedUploadLength__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019AA0, void, set_MaximumUnauthorizedUploadLength, (app::HttpWebRequestElement * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04799908, HttpWebRequestElement_set_MaximumUnauthorizedUploadLength__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019AD0, app::ConfigurationPropertyCollection *, get_Properties, (app::HttpWebRequestElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470DE30, HttpWebRequestElement_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019B00, bool, get_UseUnsafeHeaderParsing, (app::HttpWebRequestElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04710CE0, HttpWebRequestElement_get_UseUnsafeHeaderParsing__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019B30, void, set_UseUnsafeHeaderParsing, (app::HttpWebRequestElement * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x0475C008, HttpWebRequestElement_set_UseUnsafeHeaderParsing__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02019B60, void, PostDeserialize, (app::HttpWebRequestElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470AA08, HttpWebRequestElement_PostDeserialize__MethodInfo)
}
