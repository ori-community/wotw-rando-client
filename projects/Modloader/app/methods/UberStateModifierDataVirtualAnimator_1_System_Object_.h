#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimatorPlayState__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IEventReciever.h>
#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlaybackStatus.h>
#include <Modloader/app/structs/SetupControllerStateHolder.h>
#include <Modloader/app/structs/SetupStateModifier.h>
#include <Modloader/app/structs/SetupStateModifierData.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UberStateModifierDataVirtualAnimator_1_System_Object_.h>

namespace app::classes::UberStateModifierDataVirtualAnimator_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::AnimatorPlayState__Enum, get_PlayState, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::PlaybackStatus*, get_PlaybackStatus, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01700280, int32_t, get_Hash, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022631B0, app::String*, get_Name, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::NewSetupStateController*, get_StateController, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A5A010, app::SetupControllerStateHolder*, get_StateHolder, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::SetupStateModifier*, get_Modifier, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02263300, app::SetupStateModifierData*, get_ModifierData, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_StateGuid, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02263790, app::Type*, get_ModifierType, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02263840, app::IEventReciever*, get_EventReciever, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02263890, void, set_EventReciever, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr, app::IEventReciever* value))
    IL2CPP_REGISTER_METHOD(0x02263230, void, Reset, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x02263330, void, ctor_1, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr, app::NewSetupStateController* state_controller, app::SetupStateModifier* modifier, int32_t state_guid))
    IL2CPP_REGISTER_METHOD(0x022634C0, void, ctor_2, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02263600, void, Init, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr, app::NewSetupStateController* state_controller, app::SetupStateModifier* modifier, int32_t state_guid))
    IL2CPP_REGISTER_METHOD(0x02263610, app::Object*, GetModifierData, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02263650, void, StartPlayback, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x022636A0, void, StopPlayback, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022636F0, void, PausePlayback, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02263740, void, ResumePlayback, (app::UberStateModifierDataVirtualAnimator_1_System_Object_ * this_ptr))
} // namespace app::classes::UberStateModifierDataVirtualAnimator_1_System_Object_
