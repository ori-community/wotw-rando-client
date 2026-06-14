#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/Ku.h>
#include <Modloader/app/structs/KuController.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SyncAnimations.h>

namespace app::classes::SyncAnimations {
    IL2CPP_REGISTER_METHOD(0x005136D0, app::KuController*, get_KuController, app::SyncAnimations* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00513770, app::Ku*, get_Ku, app::SyncAnimations* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00513800, void, OnEnable, app::SyncAnimations* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043DF80, void, OnDisable, app::SyncAnimations* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00513B00,
        void,
        OnMatchAnimationTrigered,
        app::SyncAnimations* this_ptr,
        app::MoonAnimation* synced_animation,
        app::ActiveAnimationHandle source_active_animation,
        int32_t priority,
        app::Func_1_Boolean_* source_continue_condition
    )
    IL2CPP_REGISTER_METHOD(
        0x00513DD0,
        void,
        OnMatchAnimationStopped,
        app::SyncAnimations* this_ptr,
        app::MoonAnimation* animation,
        app::ActiveAnimationHandle source_active_animation
    )
    IL2CPP_REGISTER_METHOD(0x00513FB0, void, LateUpdate, app::SyncAnimations* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SyncAnimations* this_ptr)
} // namespace app::classes::SyncAnimations
