#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents {
    IL2CPP_REGISTER_METHOD(0x0253F770, void, ctor, (app::PlayerEditorConnectionEvents * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0253FA50, void, InvokeMessageIdSubscribers, (app::PlayerEditorConnectionEvents * this_ptr, app::Guid message_id, app::Byte__Array* data, int32_t player_id))
    IL2CPP_REGISTER_METHOD(0x0253FF60, app::UnityEvent_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_*, AddAndCreate, (app::PlayerEditorConnectionEvents * this_ptr, app::Guid message_id))
    IL2CPP_REGISTER_METHOD(0x025404F0, void, UnregisterManagedCallback, (app::PlayerEditorConnectionEvents * this_ptr, app::Guid message_id, app::UnityAction_1_UnityEngine_Networking_PlayerConnection_MessageEventArgs_* callback))
} // namespace app::classes::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents
