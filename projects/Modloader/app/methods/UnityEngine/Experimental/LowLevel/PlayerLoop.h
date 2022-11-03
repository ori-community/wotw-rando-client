#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Experimental::LowLevel::PlayerLoop {
    IL2CPP_REGISTER_METHOD(0x02431FB0, app::PlayerLoopSystem, GetDefaultPlayerLoop, ())
    IL2CPP_REGISTER_METHOD(0x02432040, void, SetPlayerLoop, (app::PlayerLoopSystem loop))
    IL2CPP_REGISTER_METHOD(0x02432330, int32_t, PlayerLoopSystemToInternal, (app::PlayerLoopSystem sys, app::List_1_UnityEngine_Experimental_LowLevel_PlayerLoopSystemInternal_** internal_sys))
    IL2CPP_REGISTER_METHOD(0x024325C0, app::PlayerLoopSystem, InternalToPlayerLoopSystem, (app::PlayerLoopSystemInternal__Array * internal_sys, int32_t* offset))
    IL2CPP_REGISTER_METHOD(0x02432A20, app::PlayerLoopSystemInternal__Array*, GetDefaultPlayerLoopInternal, ())
    IL2CPP_REGISTER_METHOD(0x02432A70, void, SetPlayerLoopInternal, (app::PlayerLoopSystemInternal__Array * loop))
} // namespace app::classes::UnityEngine::Experimental::LowLevel::PlayerLoop
