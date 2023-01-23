#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StartLoopEndEffect.h>
#include <Modloader/app/structs/StartLoopEndEffect_State__Enum.h>

namespace app::classes::StartLoopEndEffect {
    IL2CPP_REGISTER_METHOD(0x009B19A0, void, OnEnable, (app::StartLoopEndEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B19C0, void, OnDisable, (app::StartLoopEndEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B19D0, void, EndEffect, (app::StartLoopEndEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B19F0, void, CancelEffect, (app::StartLoopEndEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009B1A10, void, OnStartTimelineEnded, (app::StartLoopEndEffect * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04759D18, StartLoopEndEffect_OnStartTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009B1A40, void, OnEndTimelineEnded, (app::StartLoopEndEffect * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470EA40, StartLoopEndEffect_OnEndTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009B1B30, void, OnCancelTimelineEnded, (app::StartLoopEndEffect * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474FEC8, StartLoopEndEffect_OnCancelTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009B1C20, void, ChangeState, (app::StartLoopEndEffect * this_ptr, app::StartLoopEndEffect_State__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::StartLoopEndEffect * this_ptr))
} // namespace app::classes::StartLoopEndEffect
