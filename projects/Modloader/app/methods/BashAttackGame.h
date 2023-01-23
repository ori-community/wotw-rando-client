#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BashAttackGame.h>
#include <Modloader/app/structs/Action_1_Single_.h>
#include <Modloader/app/structs/BashAttackGame_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::BashAttackGame {
    IL2CPP_REGISTER_METHOD(0x00F8D5E0, void, add_BashGameComplete, (app::BashAttackGame * this_ptr, app::Action_1_Single_* value))
    IL2CPP_REGISTER_METHOD(0x00F8D6D0, void, remove_BashGameComplete, (app::BashAttackGame * this_ptr, app::Action_1_Single_* value))
    IL2CPP_REGISTER_METHOD(0x0094FCE0, void, set_UsingJumpToBash, (app::BashAttackGame * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_UsingJumpToBash, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_IsSuspended, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_IsSuspended, (app::BashAttackGame * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F8D7C0, void, OnPoolSpawned, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8D880, void, ChangeState, (app::BashAttackGame * this_ptr, app::BashAttackGame_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00F8D9B0, void, EnterStateAppearing, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8DBD0, void, ExitStateAppearing, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8DD90, void, EnterStatePlaying, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F4BDE0, void, ExitStatePlaying, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8DE30, void, EnterStateDisappearing, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8E0D0, void, ExitStateDisappearing, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8E290, void, OnAppearingTimelineEnded, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475BEC8, BashAttackGame_OnAppearingTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F8E2A0, void, OnDisappearingTimelineEnded, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04765850, BashAttackGame_OnDisappearingTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F8E3F0, void, UpdateMode, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8E4F0, void, UpdateDPadAngle, (bool smooth, float* angle_in_out, float* kbd_speed_in_out, float* kbd_angle_in_out, bool* kbd_clockwise_in_out))
    IL2CPP_REGISTER_METHOD(0x00F8E810, void, FixedUpdate, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8EF40, void, SendDirection, (app::BashAttackGame * this_ptr, app::Vector2 direction))
    IL2CPP_REGISTER_METHOD(0x00F8EF70, void, UpdateState, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateDisappearingState, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8EFF0, void, UpdatePlayingState, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateAppearingState, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC9AD0, void, Awake, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8F310, void, OnEnable, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8F370, void, GameFinished, (app::BashAttackGame * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F8F5F0, void, ctor, (app::BashAttackGame * this_ptr))
} // namespace app::classes::BashAttackGame
