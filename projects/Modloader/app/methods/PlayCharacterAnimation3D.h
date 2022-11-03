#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PlayCharacterAnimation3D {
    IL2CPP_REGISTER_METHOD(0x01177180, bool, ConsumeTerminationEvent, (app::PlayCharacterAnimation3D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011771A0, bool, ConsumeConditionEvent, (app::PlayCharacterAnimation3D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011771C0, void, Start, (app::PlayCharacterAnimation3D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01177630, void, OnDestroy, (app::PlayCharacterAnimation3D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01177AD0, void, Perform, (app::PlayCharacterAnimation3D * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011783B0, void, OnStartPlaying, (app::PlayCharacterAnimation3D * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476AB98, PlayCharacterAnimation3D_OnStartPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011784B0, bool, ContinuePlayingLoopCondition, (app::PlayCharacterAnimation3D * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04700AA8, PlayCharacterAnimation3D_ContinuePlayingLoopCondition__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011785C0, void, OnStopPlaying, (app::PlayCharacterAnimation3D * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047936E0, PlayCharacterAnimation3D_OnStopPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00706210, bool, ShouldPlayAnimation, (app::PlayCharacterAnimation3D * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04771B70, PlayCharacterAnimation3D_ShouldPlayAnimation__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011789A0, void, Stop, (app::PlayCharacterAnimation3D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01178A80, bool, get_IsPerforming, (app::PlayCharacterAnimation3D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01178BB0, bool, get_IsBlocking, (app::PlayCharacterAnimation3D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01178CC0, void, LateUpdate, (app::PlayCharacterAnimation3D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01178F00, void, OnAnimationEvent, (app::PlayCharacterAnimation3D * this_ptr, app::String* received_event_id))
    IL2CPP_REGISTER_METHODINFO(0x047277A0, PlayCharacterAnimation3D_OnAnimationEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01178F60, void, EnterIdle, (app::PlayCharacterAnimation3D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01178F70, void, OnStringAnimationEvent, (app::PlayCharacterAnimation3D * this_ptr, app::String* event_id))
    IL2CPP_REGISTER_METHODINFO(0x04798848, PlayCharacterAnimation3D_OnStringAnimationEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011790B0, void, ctor, (app::PlayCharacterAnimation3D * this_ptr))
} // namespace app::classes::PlayCharacterAnimation3D
