#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/IPlayerEditorConnectionNative.h>
#include <Modloader/app/structs/PlayerConnection.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UnityAction_1_System_Int32_.h>
#include <Modloader/app/structs/UnityAction_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_.h>

namespace app::classes::UnityEngine::Networking::PlayerConnection::PlayerConnection {
    IL2CPP_REGISTER_METHOD(0x0253D780, void, ctor, app::PlayerConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0253DA50, app::PlayerConnection*, get_instance, )
    IL2CPP_REGISTER_METHOD(0x0253DC00, bool, get_isConnected, app::PlayerConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0253DCA0, app::PlayerConnection*, CreateInstance, )
    IL2CPP_REGISTER_METHOD(0x0253DDA0, void, OnEnable, app::PlayerConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0253DE50, app::IPlayerEditorConnectionNative*, GetConnectionNativeApi, app::PlayerConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0253DFA0,
        void,
        Register,
        app::PlayerConnection* this_ptr,
        app::Guid message_id,
        app::UnityAction_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_* callback
    )
    IL2CPP_REGISTER_METHOD(
        0x0253E340,
        void,
        Unregister,
        app::PlayerConnection* this_ptr,
        app::Guid message_id,
        app::UnityAction_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_* callback
    )
    IL2CPP_REGISTER_METHOD(0x0253E600, void, RegisterConnection, app::PlayerConnection* this_ptr, app::UnityAction_1_System_Int32_* callback)
    IL2CPP_REGISTER_METHOD(0x0253E840, void, RegisterDisconnection, app::PlayerConnection* this_ptr, app::UnityAction_1_System_Int32_* callback)
    IL2CPP_REGISTER_METHOD(0x0253E910, void, Send, app::PlayerConnection* this_ptr, app::Guid message_id, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x0253EAE0, bool, TrySend, app::PlayerConnection* this_ptr, app::Guid message_id, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x0253ECB0, bool, BlockUntilRecvMsg, app::PlayerConnection* this_ptr, app::Guid message_id, int32_t timeout)
    IL2CPP_REGISTER_METHOD(0x0253F0C0, void, DisconnectAll, app::PlayerConnection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0253F160, void, MessageCallbackInternal, void* data, uint64_t size, uint64_t guid, app::String* message_id)
    IL2CPP_REGISTER_METHOD(0x0253F2E0, void, ConnectedCallbackInternal, int32_t player_id)
    IL2CPP_REGISTER_METHOD(0x0253F440, void, DisconnectedCallback, int32_t player_id)
} // namespace app::classes::UnityEngine::Networking::PlayerConnection::PlayerConnection
