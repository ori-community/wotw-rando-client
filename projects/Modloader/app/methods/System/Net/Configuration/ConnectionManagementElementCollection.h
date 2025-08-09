#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationElement.h>
#include <Modloader/app/structs/ConnectionManagementElement.h>
#include <Modloader/app/structs/ConnectionManagementElementCollection.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Configuration::ConnectionManagementElementCollection {
    IL2CPP_REGISTER_METHOD(0x020189E0, void, ctor, app::ConnectionManagementElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02018A10, app::ConnectionManagementElement*, get_Item_1, app::ConnectionManagementElementCollection* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x02018A40,
        void,
        set_Item_1,
        app::ConnectionManagementElementCollection* this_ptr,
        int32_t index,
        app::ConnectionManagementElement* value
    )
    IL2CPP_REGISTER_METHOD(0x02018A70, app::ConnectionManagementElement*, get_Item_2, app::ConnectionManagementElementCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(
        0x02018AA0,
        void,
        set_Item_2,
        app::ConnectionManagementElementCollection* this_ptr,
        app::String* name,
        app::ConnectionManagementElement* value
    )
    IL2CPP_REGISTER_METHOD(0x02018AD0, void, Add, app::ConnectionManagementElementCollection* this_ptr, app::ConnectionManagementElement* element)
    IL2CPP_REGISTER_METHOD(0x02018B00, void, Clear, app::ConnectionManagementElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02018B30, app::ConfigurationElement*, CreateNewElement, app::ConnectionManagementElementCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02018B60, app::Object*, GetElementKey, app::ConnectionManagementElementCollection* this_ptr, app::ConfigurationElement* element)
    IL2CPP_REGISTER_METHOD(0x02018B90, int32_t, IndexOf, app::ConnectionManagementElementCollection* this_ptr, app::ConnectionManagementElement* element)
    IL2CPP_REGISTER_METHOD(0x02018BC0, void, Remove_1, app::ConnectionManagementElementCollection* this_ptr, app::ConnectionManagementElement* element)
    IL2CPP_REGISTER_METHOD(0x02018BF0, void, Remove_2, app::ConnectionManagementElementCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x02018C20, void, RemoveAt, app::ConnectionManagementElementCollection* this_ptr, int32_t index)
} // namespace app::classes::System::Net::Configuration::ConnectionManagementElementCollection
