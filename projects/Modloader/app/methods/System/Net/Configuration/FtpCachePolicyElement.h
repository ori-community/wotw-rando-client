#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FtpCachePolicyElement.h>
#include <Modloader/app/structs/ConfigurationElement.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/RequestCacheLevel__Enum.h>
#include <Modloader/app/structs/XmlReader.h>

namespace app::classes::System::Net::Configuration::FtpCachePolicyElement {
    IL2CPP_REGISTER_METHOD(0x020193E0, void, ctor, (app::FtpCachePolicyElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02019410, app::RequestCacheLevel__Enum, get_PolicyLevel, (app::FtpCachePolicyElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02019440, void, set_PolicyLevel, (app::FtpCachePolicyElement * this_ptr, app::RequestCacheLevel__Enum value))
    IL2CPP_REGISTER_METHOD(0x02019470, app::ConfigurationPropertyCollection*, get_Properties, (app::FtpCachePolicyElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020194A0, void, DeserializeElement, (app::FtpCachePolicyElement * this_ptr, app::XmlReader* reader, bool serialize_collection_key))
    IL2CPP_REGISTER_METHOD(0x020194D0, void, Reset, (app::FtpCachePolicyElement * this_ptr, app::ConfigurationElement* parent_element))
} // namespace app::classes::System::Net::Configuration::FtpCachePolicyElement
