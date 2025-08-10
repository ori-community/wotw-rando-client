#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/HttpWebRequestElement.h>

namespace app::classes::System::Net::Configuration::HttpWebRequestElement {
    IL2CPP_REGISTER_METHOD(0x02019980, void, ctor, app::HttpWebRequestElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020199B0, int32_t, get_MaximumErrorResponseLength, app::HttpWebRequestElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020199E0, void, set_MaximumErrorResponseLength, app::HttpWebRequestElement* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02019A10, int32_t, get_MaximumResponseHeadersLength, app::HttpWebRequestElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02019A40, void, set_MaximumResponseHeadersLength, app::HttpWebRequestElement* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02019A70, int32_t, get_MaximumUnauthorizedUploadLength, app::HttpWebRequestElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02019AA0, void, set_MaximumUnauthorizedUploadLength, app::HttpWebRequestElement* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02019AD0, app::ConfigurationPropertyCollection*, get_Properties, app::HttpWebRequestElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02019B00, bool, get_UseUnsafeHeaderParsing, app::HttpWebRequestElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02019B30, void, set_UseUnsafeHeaderParsing, app::HttpWebRequestElement* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02019B60, void, PostDeserialize, app::HttpWebRequestElement* this_ptr)
} // namespace app::classes::System::Net::Configuration::HttpWebRequestElement
