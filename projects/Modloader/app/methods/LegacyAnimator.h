#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/LegacyAnimator.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::LegacyAnimator {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsInScene, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsInScene, app::LegacyAnimator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x006142D0, bool, get_Stopped, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006142E0, void, set_Stopped, app::LegacyAnimator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00F83F40, bool, get_Reversed, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F83F50, void, set_Reversed, app::LegacyAnimator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0043C0F0, float, get_MaxTime, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043C100, void, set_MaxTime, app::LegacyAnimator* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x008682A0, float, get_MinTime, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008682B0, void, set_MinTime, app::LegacyAnimator* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x015CBDB0, float, get_TimeOfLastCurvePoint, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CBE90, float, get_TimeOfFirstCurvePoint, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091E0B0, float, get_CurrentTime, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00724130, void, set_CurrentTime, app::LegacyAnimator* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x015CBF10, bool, get_AtStart, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CBFD0, bool, get_AtEnd, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CC090, void, add_OnAnimationEndEvent, app::LegacyAnimator* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x015CC180, void, remove_OnAnimationEndEvent, app::LegacyAnimator* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x015CC270, void, Awake, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CC320, void, OnDestroy, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CC3C0, void, UpdateMaxMinTime, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CC4D0, void, SetAnimationCurve, app::LegacyAnimator* this_ptr, app::AnimationCurve* curve)
    IL2CPP_REGISTER_METHOD(0x015CC4E0, void, Start, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CC640, void, OnEnable, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CC6E0, void, OnDisable, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CC4E0, void, Init, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CC780, void, OnPoolSpawned, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CC7E0, void, OnUpdate, app::LegacyAnimator* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x015CC8C0, float, ValueInCurrentFrame, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CC930, void, Sample, app::LegacyAnimator* this_ptr, float time, bool force_sample)
    IL2CPP_REGISTER_METHOD(0x015CC980, void, Restart, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B16F70, void, Continue, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CC990, void, ContinueForward, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CC9A0, void, ContinueBackward, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CC9B0, void, Reverse, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CC9E0, void, RestartReverse, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005100F0, void, Stop, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CCA20, void, StopAndSampleAtStart, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CCA70, void, StopAndSampleAtEnd, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CCAD0, bool, get_IsSuspended, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015CCAE0, void, set_IsSuspended, app::LegacyAnimator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FF7D0, app::SuspendableMask__Enum, get_Mask, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0111BFC0, void, set_Mask, app::LegacyAnimator* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, app::LegacyAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005790B0, void, ctor, app::LegacyAnimator* this_ptr)
} // namespace app::classes::LegacyAnimator
