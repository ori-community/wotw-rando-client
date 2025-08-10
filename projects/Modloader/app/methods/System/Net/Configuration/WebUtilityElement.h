#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/UnicodeDecodingConformance__Enum.h>
#include <Modloader/app/structs/UnicodeEncodingConformance__Enum.h>
#include <Modloader/app/structs/WebUtilityElement.h>

namespace app::classes::System::Net::Configuration::WebUtilityElement {
    IL2CPP_REGISTER_METHOD(0x01E99AA0, void, ctor, app::WebUtilityElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E99AD0, app::ConfigurationPropertyCollection*, get_Properties, app::WebUtilityElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E99B00, app::UnicodeDecodingConformance__Enum, get_UnicodeDecodingConformance, app::WebUtilityElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E99B30, void, set_UnicodeDecodingConformance, app::WebUtilityElement* this_ptr, app::UnicodeDecodingConformance__Enum value)
    IL2CPP_REGISTER_METHOD(0x01E99B60, app::UnicodeEncodingConformance__Enum, get_UnicodeEncodingConformance, app::WebUtilityElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E99B90, void, set_UnicodeEncodingConformance, app::WebUtilityElement* this_ptr, app::UnicodeEncodingConformance__Enum value)
} // namespace app::classes::System::Net::Configuration::WebUtilityElement
