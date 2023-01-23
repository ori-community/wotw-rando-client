#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KwolokTongueStatue_TongueState.h>
#include <Modloader/app/structs/KwolokTongueStatue.h>
#include <Modloader/app/structs/KwolokTongueStatue_KwolowTongueStatueState__Enum.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/DesiredUberStateByte.h>

namespace app::classes::KwolokTongueStatue_TongueState {
    IL2CPP_REGISTER_METHOD(0x00EFB0C0, void, ctor, (app::KwolokTongueStatue_TongueState * this_ptr, app::KwolokTongueStatue* owner, app::KwolokTongueStatue_KwolowTongueStatueState__Enum desired_state, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x00EFB0D0, bool, get_IsPerforming, (app::KwolokTongueStatue_TongueState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFB0F0, app::DesiredUberStateByte*, get_DesiredState, (app::KwolokTongueStatue_TongueState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFB150, app::DesiredUberStateByte*, CreateDesiredState, (app::KwolokTongueStatue_TongueState * this_ptr, uint8_t desired_value))
    IL2CPP_REGISTER_METHOD(0x00EFB3A0, void, AsureStateCorrectness, (app::KwolokTongueStatue_TongueState * this_ptr, app::DesiredUberStateByte* desired_state, uint8_t desired_value))
    IL2CPP_REGISTER_METHOD(0x00EFB3C0, void, Perform, (app::KwolokTongueStatue_TongueState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFB590, void, Interrupt, (app::KwolokTongueStatue_TongueState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EFB5B0, void, OnTimelineStop, (app::KwolokTongueStatue_TongueState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04778368, KwolokTongueStatue_TongueState_OnTimelineStop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00EFB830, void, WriteState, (app::KwolokTongueStatue_TongueState * this_ptr))
} // namespace app::classes::KwolokTongueStatue_TongueState
