#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimatorPlayState__Enum.h>
#include <Modloader/app/structs/DesiredUberStateVirtualAnimator.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IEventReciever.h>
#include <Modloader/app/structs/List_1_IDesiredUberState_.h>
#include <Modloader/app/structs/PlaybackStatus.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::DesiredUberStateVirtualAnimator {
    IL2CPP_REGISTER_METHOD(0x00F9DBA0, int32_t, get_Hash, app::DesiredUberStateVirtualAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA4360, app::String*, get_Name, app::DesiredUberStateVirtualAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::List_1_IDesiredUberState_*, get_DesiredStates, app::DesiredUberStateVirtualAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_UseCustomTimeRange, app::DesiredUberStateVirtualAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_UseCustomTimeRange, app::DesiredUberStateVirtualAnimator* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(
        0x01BA43E0,
        void,
        ctor,
        app::DesiredUberStateVirtualAnimator* this_ptr,
        app::List_1_IDesiredUberState_* desired_states,
        bool use_custom_time_range
    )
    IL2CPP_REGISTER_METHOD(0x01BA4600, void, StartPlayback, app::DesiredUberStateVirtualAnimator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01BA4650, void, StopPlayback, app::DesiredUberStateVirtualAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA46A0, void, PausePlayback, app::DesiredUberStateVirtualAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA46F0, void, ResumePlayback, app::DesiredUberStateVirtualAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, app::DesiredUberStateVirtualAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420230, app::AnimatorPlayState__Enum, get_PlayState, app::DesiredUberStateVirtualAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::PlaybackStatus*, get_PlaybackStatus, app::DesiredUberStateVirtualAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA4740, app::IEventReciever*, get_EventReciever, app::DesiredUberStateVirtualAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA4790, void, set_EventReciever, app::DesiredUberStateVirtualAnimator* this_ptr, app::IEventReciever* value)
} // namespace app::classes::DesiredUberStateVirtualAnimator
