#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::PlayerConnectionInternal {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerConnectionInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02967300, void, IPlayerEditorConnectionNative_SendMessage, (app::PlayerConnectionInternal * this_ptr, app::Guid message_id, app::Byte__Array * data, int32_t player_id))
    IL2CPP_REGISTER_METHODINFO(0x04779AE0, PlayerConnectionInternal_UnityEngine_IPlayerEditorConnectionNative_SendMessage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02967470, bool, IPlayerEditorConnectionNative_TrySendMessage, (app::PlayerConnectionInternal * this_ptr, app::Guid message_id, app::Byte__Array * data, int32_t player_id))
    IL2CPP_REGISTER_METHODINFO(0x0478ACC8, PlayerConnectionInternal_UnityEngine_IPlayerEditorConnectionNative_TrySendMessage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029675E0, void, IPlayerEditorConnectionNative_Poll, (app::PlayerConnectionInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02967630, void, IPlayerEditorConnectionNative_RegisterInternal, (app::PlayerConnectionInternal * this_ptr, app::Guid message_id))
    IL2CPP_REGISTER_METHOD(0x02967700, void, IPlayerEditorConnectionNative_UnregisterInternal, (app::PlayerConnectionInternal * this_ptr, app::Guid message_id))
    IL2CPP_REGISTER_METHOD(0x029677D0, void, IPlayerEditorConnectionNative_Initialize, (app::PlayerConnectionInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02967820, bool, IPlayerEditorConnectionNative_IsConnected, (app::PlayerConnectionInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02967870, void, IPlayerEditorConnectionNative_DisconnectAll, (app::PlayerConnectionInternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02967820, bool, IsConnected, ())
    IL2CPP_REGISTER_METHOD(0x029677D0, void, Initialize, ())
    IL2CPP_REGISTER_METHOD(0x029678C0, void, RegisterInternal, (app::String * message_id))
    IL2CPP_REGISTER_METHOD(0x02967910, void, UnregisterInternal, (app::String * message_id))
    IL2CPP_REGISTER_METHOD(0x02967960, void, SendMessage, (app::String * message_id, app::Byte__Array * data, int32_t player_id))
    IL2CPP_REGISTER_METHOD(0x029679D0, bool, TrySendMessage, (app::String * message_id, app::Byte__Array * data, int32_t player_id))
    IL2CPP_REGISTER_METHOD(0x029675E0, void, PollInternal, ())
    IL2CPP_REGISTER_METHOD(0x02967870, void, DisconnectAll, ())
}
