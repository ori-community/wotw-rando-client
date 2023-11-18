#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HttpCachePolicyElement.h>
#include <Modloader/app/structs/ConfigurationElement.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/HttpRequestCacheLevel__Enum.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/XmlReader.h>

namespace app::classes::System::Net::Configuration::HttpCachePolicyElement {
    IL2CPP_REGISTER_METHOD(0x02019500, void, ctor, (app::HttpCachePolicyElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02019530, app::TimeSpan, get_MaximumAge, (app::HttpCachePolicyElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02019560, void, set_MaximumAge, (app::HttpCachePolicyElement * this_ptr, app::TimeSpan value))
    IL2CPP_REGISTER_METHOD(0x02019590, app::TimeSpan, get_MaximumStale, (app::HttpCachePolicyElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020195C0, void, set_MaximumStale, (app::HttpCachePolicyElement * this_ptr, app::TimeSpan value))
    IL2CPP_REGISTER_METHOD(0x020195F0, app::TimeSpan, get_MinimumFresh, (app::HttpCachePolicyElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02019620, void, set_MinimumFresh, (app::HttpCachePolicyElement * this_ptr, app::TimeSpan value))
    IL2CPP_REGISTER_METHOD(0x02019650, app::HttpRequestCacheLevel__Enum, get_PolicyLevel, (app::HttpCachePolicyElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02019680, void, set_PolicyLevel, (app::HttpCachePolicyElement * this_ptr, app::HttpRequestCacheLevel__Enum value))
    IL2CPP_REGISTER_METHOD(0x020196B0, app::ConfigurationPropertyCollection*, get_Properties, (app::HttpCachePolicyElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020196E0, void, DeserializeElement, (app::HttpCachePolicyElement * this_ptr, app::XmlReader* reader, bool serialize_collection_key))
    IL2CPP_REGISTER_METHOD(0x02019710, void, Reset, (app::HttpCachePolicyElement * this_ptr, app::ConfigurationElement* parent_element))
} // namespace app::classes::System::Net::Configuration::HttpCachePolicyElement
