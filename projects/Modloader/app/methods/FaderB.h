#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FaderB.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/FaderAnimatorEntity_FaderType__Enum.h>
#include <Modloader/app/structs/FaderB_State__Enum.h>
#include <Modloader/app/structs/UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum.h>

namespace app::classes::FaderB {
    IL2CPP_REGISTER_METHOD(0x00738690, float, get_EditorDebugValue, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00990EC0, void, set_EditorDebugValue, (app::FaderB * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00623240, float, get_Opacity, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00990ED0, void, Awake, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00990FF0, void, OnEnable, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00991100, void, ChangeState, (app::FaderB * this_ptr, app::FaderB_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x006E35E0, void, SetTimelineCallerType, (app::FaderB * this_ptr, app::FaderAnimatorEntity_FaderType__Enum typ))
    IL2CPP_REGISTER_METHOD(0x00991170, void, UpdateState, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009914C0, void, Start, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00991500, void, OnFadeInFinished, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009915F0, void, OnFadeOutFinished, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00991620, void, FixedUpdate, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009916D0, void, HandlePanicReset, (app::FaderB * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x009919E0, void, SetOpacity, (app::FaderB * this_ptr, float opacity))
    IL2CPP_REGISTER_METHOD(0x00991C90, float, OpacityCurveAdjustment, (app::FaderB * this_ptr, float opacity))
    IL2CPP_REGISTER_METHOD(0x00991D50, void, DoBlackScreenCleanup, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00991F50, void, ScheduleGC, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00991FC0, void, ExecuteGCIfNeeded, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009921F0, app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum, GetTriggerType, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009922B0, bool, get_IsSuspended, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009922C0, void, set_IsSuspended, (app::FaderB * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x009922D0, void, Fade, (app::FaderB * this_ptr, float fade_in_duration, float fade_stay_duration, float fade_out_duration, app::Action* fade_in_complete, app::Action* fade_out_complete, bool skip_camera_move_to_target))
    IL2CPP_REGISTER_METHOD(0x009924E0, void, FadeIn_1, (app::FaderB * this_ptr, float duration, app::Action* fade_in_complete))
    IL2CPP_REGISTER_METHOD(0x00992600, void, FadeOut_1, (app::FaderB * this_ptr, float duration, app::Action* fade_out_complete))
    IL2CPP_REGISTER_METHOD(0x00992720, void, DoFade, (app::FaderB * this_ptr, app::FaderB_State__Enum state, float fade_in_duration, float fade_stay_duration, float fade_out_duration))
    IL2CPP_REGISTER_METHOD(0x009927B0, void, FadeIn_2, (app::FaderB * this_ptr, float duration))
    IL2CPP_REGISTER_METHOD(0x00992820, void, FadeIn_3, (app::FaderB * this_ptr, float duration, float stay_duration))
    IL2CPP_REGISTER_METHOD(0x00992890, void, FadeOut_2, (app::FaderB * this_ptr, float duration))
    IL2CPP_REGISTER_METHOD(0x00992900, void, TimelineSample, (app::FaderB * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x009929F0, bool, IsFadingIn, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00992A00, bool, IsFadingOut, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00992A10, bool, IsFadingInOrStay, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00992A30, bool, IsFadingOutOrStay, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00992A50, bool, IsTimelineFading, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00992A60, bool, IsTimelineFadingAndActive, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00992A80, bool, IsActive, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00992A90, bool, IsVisible, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005065E0, void, BlockFader, (app::FaderB * this_ptr, bool block))
    IL2CPP_REGISTER_METHOD(0x00992AA0, void, DoCleanUpIsPossible, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00992AB0, void, OnGUI, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009935C0, void, ctor, (app::FaderB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::FaderB
