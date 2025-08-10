#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicPropertyCollection.h>
#include <Modloader/app/structs/IDynamicProperty.h>
#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Runtime::Remoting::Contexts::DynamicPropertyCollection {
    IL2CPP_REGISTER_METHOD(0x02305550, bool, get_HasProperties, app::DynamicPropertyCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02305580, bool, RegisterDynamicProperty, app::DynamicPropertyCollection* this_ptr, app::IDynamicProperty* prop)
    IL2CPP_REGISTER_METHOD(0x02305930, bool, UnregisterDynamicProperty, app::DynamicPropertyCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(
        0x02305B00,
        void,
        NotifyMessage,
        app::DynamicPropertyCollection* this_ptr,
        bool start,
        app::IMessage* msg,
        bool client_site,
        bool async
    )
    IL2CPP_REGISTER_METHOD(0x02306000, int32_t, FindProperty, app::DynamicPropertyCollection* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x023061F0, void, ctor, app::DynamicPropertyCollection* this_ptr)
} // namespace app::classes::System::Runtime::Remoting::Contexts::DynamicPropertyCollection
