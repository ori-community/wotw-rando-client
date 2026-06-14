#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BypassElement.h>
#include <Modloader/app/structs/BypassElementCollection.h>
#include <Modloader/app/structs/ConfigurationElement.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Configuration::BypassElementCollection {
    IL2CPP_REGISTER_METHOD(0x020185F0, void, ctor, app::BypassElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02018620, app::BypassElement*, get_Item_1, app::BypassElementCollection* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02018650, void, set_Item_1, app::BypassElementCollection* this_ptr, int32_t index, app::BypassElement* value)
    IL2CPP_REGISTER_METHOD(0x02018680, app::BypassElement*, get_Item_2, app::BypassElementCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x020186B0, void, set_Item_2, app::BypassElementCollection* this_ptr, app::String* name, app::BypassElement* value)
    IL2CPP_REGISTER_METHOD(0x020186E0, bool, get_ThrowOnDuplicate, app::BypassElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02018710, void, Add, app::BypassElementCollection* this_ptr, app::BypassElement* element)
    IL2CPP_REGISTER_METHOD(0x02018740, void, Clear, app::BypassElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02018770, app::ConfigurationElement*, CreateNewElement, app::BypassElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020187A0, app::Object*, GetElementKey, app::BypassElementCollection* this_ptr, app::ConfigurationElement* element)
    IL2CPP_REGISTER_METHOD(0x020187D0, int32_t, IndexOf, app::BypassElementCollection* this_ptr, app::BypassElement* element)
    IL2CPP_REGISTER_METHOD(0x02018800, void, Remove_1, app::BypassElementCollection* this_ptr, app::BypassElement* element)
    IL2CPP_REGISTER_METHOD(0x02018830, void, Remove_2, app::BypassElementCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02018860, void, RemoveAt, app::BypassElementCollection* this_ptr, int32_t index)
} // namespace app::classes::System::Net::Configuration::BypassElementCollection
