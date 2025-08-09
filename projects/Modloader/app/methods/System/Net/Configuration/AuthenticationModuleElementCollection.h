#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AuthenticationModuleElement.h>
#include <Modloader/app/structs/AuthenticationModuleElementCollection.h>
#include <Modloader/app/structs/ConfigurationElement.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Configuration::AuthenticationModuleElementCollection {
    IL2CPP_REGISTER_METHOD(0x020181A0, void, ctor, app::AuthenticationModuleElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020181D0, app::AuthenticationModuleElement*, get_Item_1, app::AuthenticationModuleElementCollection* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02018200,
        void,
        set_Item_1,
        app::AuthenticationModuleElementCollection* this_ptr,
        int32_t index,
        app::AuthenticationModuleElement* value
    )
    IL2CPP_REGISTER_METHOD(0x02018230, app::AuthenticationModuleElement*, get_Item_2, app::AuthenticationModuleElementCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(
        0x02018260,
        void,
        set_Item_2,
        app::AuthenticationModuleElementCollection* this_ptr,
        app::String* name,
        app::AuthenticationModuleElement* value
    )
    IL2CPP_REGISTER_METHOD(0x02018290, void, Add, app::AuthenticationModuleElementCollection* this_ptr, app::AuthenticationModuleElement* element)
    IL2CPP_REGISTER_METHOD(0x020182C0, void, Clear, app::AuthenticationModuleElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020182F0, app::ConfigurationElement*, CreateNewElement, app::AuthenticationModuleElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02018320, app::Object*, GetElementKey, app::AuthenticationModuleElementCollection* this_ptr, app::ConfigurationElement* element)
    IL2CPP_REGISTER_METHOD(0x02018350, int32_t, IndexOf, app::AuthenticationModuleElementCollection* this_ptr, app::AuthenticationModuleElement* element)
    IL2CPP_REGISTER_METHOD(0x02018380, void, Remove_1, app::AuthenticationModuleElementCollection* this_ptr, app::AuthenticationModuleElement* element)
    IL2CPP_REGISTER_METHOD(0x020183B0, void, Remove_2, app::AuthenticationModuleElementCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x020183E0, void, RemoveAt, app::AuthenticationModuleElementCollection* this_ptr, int32_t index)
} // namespace app::classes::System::Net::Configuration::AuthenticationModuleElementCollection
