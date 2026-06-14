#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_UnityEngin_Networki_PlayerConnecti_PlayerEditorConnectionEven_MessageTypeSubscribe_.h>
#include <Modloader/app/structs/PlayerEditorConnectionEvents_MessageTypeSubscribers.h>

namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_ {
    IL2CPP_REGISTER_METHOD(
        0x025E8100,
        void,
        ctor,
        app::List_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_* this_ptr,
        app::PlayerEditorConnectionEvents_MessageTypeSubscribers* item
    )
    IL2CPP_REGISTER_METHOD(
        0x025F12F0,
        bool,
        Remove,
        app::List_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_* this_ptr,
        app::PlayerEditorConnectionEvents_MessageTypeSubscribers* item
    )
} // namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribers_
