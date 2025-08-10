#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseInvokableCall.h>
#include <Modloader/app/structs/MessageEventArgs.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UnityAction_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_.h>
#include <Modloader/app/structs/UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_.h>

namespace app::classes::UnityEngine::Events::UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_ {
    IL2CPP_REGISTER_METHOD(
        0x02AC8AE0,
        void,
        AddListener,
        app::UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_* this_ptr,
        app::UnityAction_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_* call
    )
    IL2CPP_REGISTER_METHOD(
        0x02AC9710,
        void,
        Invoke,
        app::UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_* this_ptr,
        app::MessageEventArgs* arg0
    )
    IL2CPP_REGISTER_METHOD(
        0x02AC8B20,
        void,
        RemoveListener,
        app::UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_* this_ptr,
        app::UnityAction_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_* call
    )
    IL2CPP_REGISTER_METHOD(0x01F2C230, void, ctor, app::UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02AC95D0,
        app::MethodInfo_1*,
        FindMethod_Impl,
        app::UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_* this_ptr,
        app::String* name,
        app::Object* target_obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02AC8CD0,
        app::BaseInvokableCall*,
        GetDelegate,
        app::UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_* this_ptr,
        app::Object* target,
        app::MethodInfo_1* the_function
    )
} // namespace app::classes::UnityEngine::Events::UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_
