#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/JumpShootShark.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::JumpShootShark {
    IL2CPP_REGISTER_METHOD(0x00E4CB20, bool, ShouldIgnoreDamage, app::JumpShootShark* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00E4CB80, void, Awake, app::JumpShootShark* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4CC50, void, OnDestroy, app::JumpShootShark* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4CD20, void, HideGraphics, app::JumpShootShark* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4CD90, void, ShowGraphics, app::JumpShootShark* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4CE00, void, Start, app::JumpShootShark* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4E030, void, UpdateJumpingState, app::JumpShootShark* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4E340, void, ExitJumpingState, app::JumpShootShark* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4E350, void, ShootProjectileAtPlayer, app::JumpShootShark* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldEmerge, app::JumpShootShark* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4E6B0, void, SetEmergeLocation, app::JumpShootShark* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00E4EA90, void, ctor, app::JumpShootShark* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4EBE0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x00E4ED30, void, _Start_b__21_0, app::JumpShootShark* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4CD90, void, _Start_b__21_1, app::JumpShootShark* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4EDC0, void, _Start_b__21_2, app::JumpShootShark* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4EF90, void, _Start_b__21_3, app::JumpShootShark* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4F0B0, void, _Start_b__21_4, app::JumpShootShark* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4F1B0, bool, _Start_b__21_5, app::JumpShootShark* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4F200, bool, _Start_b__21_6, app::JumpShootShark* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E4F250, bool, _Start_b__21_7, app::JumpShootShark* this_ptr)
} // namespace app::classes::JumpShootShark
