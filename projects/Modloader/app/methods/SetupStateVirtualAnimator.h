#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SetupStateVirtualAnimator.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SetupState.h>
#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/IGenericUberState.h>
#include <Modloader/app/structs/AnimatorPlayState__Enum.h>
#include <Modloader/app/structs/PlaybackStatus.h>
#include <Modloader/app/structs/IEventReciever.h>

namespace app::classes::SetupStateVirtualAnimator {
    IL2CPP_REGISTER_METHOD(0x00F9DBA0, int32_t, get_Hash, (app::SetupStateVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004173F0, app::String*, get_Name, (app::SetupStateVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E94060, void, Reset, (app::SetupStateVirtualAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::SetupState*, get_State, (app::SetupStateVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_State, (app::SetupStateVirtualAnimator * this_ptr, app::SetupState* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::NewSetupStateController*, get_StateController, (app::SetupStateVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_StateController, (app::SetupStateVirtualAnimator * this_ptr, app::NewSetupStateController* value))
    IL2CPP_REGISTER_METHOD(0x01E94130, void, ctor_1, (app::SetupStateVirtualAnimator * this_ptr, app::NewSetupStateController* state_controller, app::SetupState* state, app::IGenericUberState* uber_state, float desired_value))
    IL2CPP_REGISTER_METHOD(0x01E942A0, void, ctor_2, (app::SetupStateVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E943E0, void, Init, (app::SetupStateVirtualAnimator * this_ptr, app::NewSetupStateController* state_controller, app::SetupState* state, app::IGenericUberState* uber_state, float desired_value))
    IL2CPP_REGISTER_METHOD(0x01E94400, void, StartPlayback, (app::SetupStateVirtualAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04746D00, SetupStateVirtualAnimator_StartPlayback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E94450, void, StopPlayback, (app::SetupStateVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047401C8, SetupStateVirtualAnimator_StopPlayback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E944A0, void, PausePlayback, (app::SetupStateVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047478D0, SetupStateVirtualAnimator_PausePlayback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E944F0, void, ResumePlayback, (app::SetupStateVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04717300, SetupStateVirtualAnimator_ResumePlayback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529E80, app::AnimatorPlayState__Enum, get_PlayState, (app::SetupStateVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::PlaybackStatus*, get_PlaybackStatus, (app::SetupStateVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::SetupStateVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E94540, app::IEventReciever*, get_EventReciever, (app::SetupStateVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474DF88, SetupStateVirtualAnimator_get_EventReciever__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E94590, void, set_EventReciever, (app::SetupStateVirtualAnimator * this_ptr, app::IEventReciever* value))
    IL2CPP_REGISTER_METHODINFO(0x0470E538, SetupStateVirtualAnimator_set_EventReciever__MethodInfo)
} // namespace app::classes::SetupStateVirtualAnimator
