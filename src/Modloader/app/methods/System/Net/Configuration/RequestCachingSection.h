#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/FtpCachePolicyElement.h>
#include <Modloader/app/structs/HttpCachePolicyElement.h>
#include <Modloader/app/structs/RequestCacheLevel__Enum.h>
#include <Modloader/app/structs/RequestCachingSection.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/XmlReader.h>

namespace app::classes::System::Net::Configuration::RequestCachingSection {
    IL2CPP_REGISTER_METHOD(0x01E98330, void, ctor, app::RequestCachingSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98360, app::FtpCachePolicyElement*, get_DefaultFtpCachePolicy, app::RequestCachingSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98390, app::HttpCachePolicyElement*, get_DefaultHttpCachePolicy, app::RequestCachingSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E983C0, app::RequestCacheLevel__Enum, get_DefaultPolicyLevel, app::RequestCachingSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E983F0, void, set_DefaultPolicyLevel, app::RequestCachingSection* this_ptr, app::RequestCacheLevel__Enum value)
    IL2CPP_REGISTER_METHOD(0x01E98420, bool, get_DisableAllCaching, app::RequestCachingSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98450, void, set_DisableAllCaching, app::RequestCachingSection* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01E98480, bool, get_IsPrivateCache, app::RequestCachingSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E984B0, void, set_IsPrivateCache, app::RequestCachingSection* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01E984E0, app::ConfigurationPropertyCollection*, get_Properties, app::RequestCachingSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98510, app::TimeSpan, get_UnspecifiedMaximumAge, app::RequestCachingSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98540, void, set_UnspecifiedMaximumAge, app::RequestCachingSection* this_ptr, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x01E98570, void, DeserializeElement, app::RequestCachingSection* this_ptr, app::XmlReader* reader, bool serialize_collection_key)
    IL2CPP_REGISTER_METHOD(0x01E985A0, void, PostDeserialize, app::RequestCachingSection* this_ptr)
} // namespace app::classes::System::Net::Configuration::RequestCachingSection
