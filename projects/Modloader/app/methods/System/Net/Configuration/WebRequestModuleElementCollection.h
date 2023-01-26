#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WebRequestModuleElementCollection.h>
#include <Modloader/app/structs/ConfigurationElement.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/WebRequestModuleElement.h>

namespace app::classes::System::Net::Configuration::WebRequestModuleElementCollection {
    IL2CPP_REGISTER_METHOD(0x01E99740, void, ctor, (app::WebRequestModuleElementCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E99770, app::WebRequestModuleElement*, get_Item_1, (app::WebRequestModuleElementCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01E997A0, void, set_Item_1, (app::WebRequestModuleElementCollection * this_ptr, int32_t index, app::WebRequestModuleElement* value))
    IL2CPP_REGISTER_METHOD(0x01E997D0, app::WebRequestModuleElement*, get_Item_2, (app::WebRequestModuleElementCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01E99800, void, set_Item_2, (app::WebRequestModuleElementCollection * this_ptr, app::String* name, app::WebRequestModuleElement* value))
    IL2CPP_REGISTER_METHOD(0x01E99830, void, Add, (app::WebRequestModuleElementCollection * this_ptr, app::WebRequestModuleElement* element))
    IL2CPP_REGISTER_METHOD(0x01E99860, void, Clear, (app::WebRequestModuleElementCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E99890, app::ConfigurationElement*, CreateNewElement, (app::WebRequestModuleElementCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E998C0, app::Object*, GetElementKey, (app::WebRequestModuleElementCollection * this_ptr, app::ConfigurationElement* element))
    IL2CPP_REGISTER_METHOD(0x01E998F0, int32_t, IndexOf, (app::WebRequestModuleElementCollection * this_ptr, app::WebRequestModuleElement* element))
    IL2CPP_REGISTER_METHOD(0x01E99920, void, Remove_1, (app::WebRequestModuleElementCollection * this_ptr, app::WebRequestModuleElement* element))
    IL2CPP_REGISTER_METHOD(0x01E99950, void, Remove_2, (app::WebRequestModuleElementCollection * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x01E99980, void, RemoveAt, (app::WebRequestModuleElementCollection * this_ptr, int32_t index))
} // namespace app::classes::System::Net::Configuration::WebRequestModuleElementCollection
