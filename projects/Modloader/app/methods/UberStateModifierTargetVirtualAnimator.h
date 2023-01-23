#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AnimatorPlayState__Enum.h>
#include <Modloader/app/structs/UberStateModifierTargetVirtualAnimator.h>
#include <Modloader/app/structs/PlaybackStatus.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/SetupStateModifier.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IEventReciever.h>

namespace app::classes::UberStateModifierTargetVirtualAnimator {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::AnimatorPlayState__Enum, get_PlayState, (app::UberStateModifierTargetVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::PlaybackStatus*, get_PlaybackStatus, (app::UberStateModifierTargetVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F9DBA0, int32_t, get_Hash, (app::UberStateModifierTargetVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E964A0, app::String*, get_Name, (app::UberStateModifierTargetVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::NewSetupStateController*, get_SetupStateController, (app::UberStateModifierTargetVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_SetupStateController, (app::UberStateModifierTargetVirtualAnimator * this_ptr, app::NewSetupStateController* value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::SetupStateModifier*, get_Modifier, (app::UberStateModifierTargetVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Modifier, (app::UberStateModifierTargetVirtualAnimator * this_ptr, app::SetupStateModifier* value))
    IL2CPP_REGISTER_METHOD(0x01E96520, app::GameObject*, get_ExternalTarget, (app::UberStateModifierTargetVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E965C0, void, Reset, (app::UberStateModifierTargetVirtualAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01E96680, void, ctor, (app::UberStateModifierTargetVirtualAnimator * this_ptr, app::SetupStateModifier* modifier, app::NewSetupStateController* state_controller))
    IL2CPP_REGISTER_METHOD(0x01E967E0, void, StartPlayback, (app::UberStateModifierTargetVirtualAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04755018, UberStateModifierTargetVirtualAnimator_StartPlayback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E96830, void, StopPlayback, (app::UberStateModifierTargetVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04715690, UberStateModifierTargetVirtualAnimator_StopPlayback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E96880, void, PausePlayback, (app::UberStateModifierTargetVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047271D0, UberStateModifierTargetVirtualAnimator_PausePlayback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E968D0, void, ResumePlayback, (app::UberStateModifierTargetVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04719070, UberStateModifierTargetVirtualAnimator_ResumePlayback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::UberStateModifierTargetVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetTarget, (app::UberStateModifierTargetVirtualAnimator * this_ptr, app::GameObject* target))
    IL2CPP_REGISTER_METHOD(0x01E96920, app::IEventReciever*, get_EventReciever, (app::UberStateModifierTargetVirtualAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047827A8, UberStateModifierTargetVirtualAnimator_get_EventReciever__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E96970, void, set_EventReciever, (app::UberStateModifierTargetVirtualAnimator * this_ptr, app::IEventReciever* value))
    IL2CPP_REGISTER_METHODINFO(0x04766628, UberStateModifierTargetVirtualAnimator_set_EventReciever__MethodInfo)
} // namespace app::classes::UberStateModifierTargetVirtualAnimator
