#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayLoopAnimation.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::PlayLoopAnimation {
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsSuspended, (app::PlayLoopAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00585320, void, set_IsSuspended, (app::PlayLoopAnimation * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF2B0, app::SuspendableMask__Enum, get_Mask, (app::PlayLoopAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B6700, void, set_Mask, (app::PlayLoopAnimation * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FD750, app::UpdateType__Enum, get_UpdateType, (app::PlayLoopAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD760, void, set_UpdateType, (app::PlayLoopAnimation * this_ptr, app::UpdateType__Enum value))
    IL2CPP_REGISTER_METHOD(0x031B67B0, void, Awake, (app::PlayLoopAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B6870, void, OnDestroy, (app::PlayLoopAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B6930, void, OnEnable, (app::PlayLoopAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B69A0, void, PlayAnimation, (app::PlayLoopAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B6BF0, void, OnUpdate, (app::PlayLoopAnimation * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x031B6C30, void, ctor, (app::PlayLoopAnimation * this_ptr))
} // namespace app::classes::PlayLoopAnimation
