#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/AnimationMontage.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/Dictionary_2_System_String_Moon_MoonAnimator_.h>
#include <Modloader/app/structs/IAnimationMontageEventHandler.h>
#include <Modloader/app/structs/IMontageEventProvider.h>
#include <Modloader/app/structs/List_1_Moon_AnimationMontage_Entry_.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::AnimationMontage {
    IL2CPP_REGISTER_METHOD(0x01338060, bool, get_IsMontagePlaying, app::AnimationMontage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01338110, float, get_NormalizedTime, app::AnimationMontage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBCE0, app::List_1_Moon_AnimationMontage_Entry_*, get_Entries, app::AnimationMontage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01338140, app::IAnimationMontageEventHandler*, get_EventHandler, app::AnimationMontage* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01338220,
        void,
        PlayMontage,
        app::AnimationMontage* this_ptr,
        app::MoonAnimator* target,
        app::Action* stop_playing_action,
        app::Dictionary_2_System_String_Moon_MoonAnimator_* sub_montages_by_name
    )
    IL2CPP_REGISTER_METHOD(0x01338C80, void, StopMontage, app::AnimationMontage* this_ptr, bool invoke_stop_playing_action)
    IL2CPP_REGISTER_METHOD(
        0x01338FA0,
        void,
        SetAnimatorParent,
        app::AnimationMontage* this_ptr,
        app::MoonAnimator* parent_animator,
        app::MoonAnimator* current_animator,
        app::String* path
    )
    IL2CPP_REGISTER_METHOD(0x013393C0, void, SetSpeedInRuntime, app::AnimationMontage* this_ptr, float new_speed)
    IL2CPP_REGISTER_METHOD(0x01339580, void, UnparentAnimator, app::AnimationMontage* this_ptr, app::MoonAnimator* current_animator)
    IL2CPP_REGISTER_METHOD(0x01339760, void, EnterPreview, app::AnimationMontage* this_ptr, app::MoonAnimator* target)
    IL2CPP_REGISTER_METHOD(
        0x01339970,
        void,
        SubscribeToEvent,
        app::AnimationMontage* this_ptr,
        app::String* value_name,
        app::Action* enter_event,
        app::Action* stay_event,
        app::Action* exit_event
    )
    IL2CPP_REGISTER_METHOD(
        0x01339B60,
        void,
        UnsubscribeFromEvent,
        app::AnimationMontage* this_ptr,
        app::String* value_name,
        app::Action* enter_event,
        app::Action* stay_event,
        app::Action* exit_event
    )
    IL2CPP_REGISTER_METHOD(0x01339DC0, app::IMontageEventProvider*, GetEventProvider, app::AnimationMontage* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01339DD0, float, GetFloatCurveValue, app::AnimationMontage* this_ptr, app::String* curve_name, float default_value)
    IL2CPP_REGISTER_METHOD(0x0133A030, bool, GetBool, app::AnimationMontage* this_ptr, app::String* curve_name, bool default_value)
    IL2CPP_REGISTER_METHOD(0x0133A080, void, OnFixedUpdate, app::AnimationMontage* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x0133A300, app::IMontageEventProvider*, ResolveEventProvider, app::AnimationMontage* this_ptr, app::String* value_name)
    IL2CPP_REGISTER_METHOD(0x0133A550, void, OnAnimationStartedPlaying, app::AnimationMontage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0133A560, void, OnAnimationStoppedPlaying, app::AnimationMontage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0133A570, bool, ShouldAnimationContinuePlaying, app::AnimationMontage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0133A580, void, SampleEntries, app::AnimationMontage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0133ADD0, app::MoonAnimator*, GetSubMontageAnimator, app::AnimationMontage* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0133AEC0, void, RemoveNullEntries, app::AnimationMontage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0133B020, void, TryAddEntry, app::AnimationMontage* this_ptr, app::BaseAnimator* animator)
    IL2CPP_REGISTER_METHOD(0x0133B280, void, OnEventStart, app::AnimationMontage* this_ptr, app::String* event_id)
    IL2CPP_REGISTER_METHOD(0x0133B3D0, void, OnEventStay, app::AnimationMontage* this_ptr, app::String* event_id)
    IL2CPP_REGISTER_METHOD(0x0133B520, void, OnEventEnd, app::AnimationMontage* this_ptr, app::String* event_id)
    IL2CPP_REGISTER_METHOD(0x0133B670, void, UpdateEntries, app::AnimationMontage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, app::AnimationMontage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0133B890, float, get_Duration, app::AnimationMontage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, app::AnimationMontage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, app::AnimationMontage* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, app::AnimationMontage* this_ptr, float value, bool force_sample)
    IL2CPP_REGISTER_METHOD(0x0133BA10, void, ctor, app::AnimationMontage* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0154A4B0,
        void,
        SubscribeToValue,
        app::AnimationMontage* this_ptr,
        app::String* value_name,
        app::Action_1_Object_* callback,
        app::Object* default_value
    )
    IL2CPP_REGISTER_METHOD(0x0154A9A0, void, UnscubscribeFromValue, app::AnimationMontage* this_ptr, app::String* value_name, app::Action_1_Object_* callback)
} // namespace app::classes::Moon::AnimationMontage
