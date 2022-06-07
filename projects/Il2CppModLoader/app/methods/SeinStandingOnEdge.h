#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinStandingOnEdge {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinStandingOnEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::CharacterPlatformMovement *, get_PlatformMovement, (app::SeinStandingOnEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement *, get_LeftRightMovement, (app::SeinStandingOnEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0720, app::CharacterSpriteMirror *, get_SpriteMirror, (app::SeinStandingOnEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A35F10, bool, get_ShouldStandingOnEdgeFacingBackwardsAnimationPlay, (app::SeinStandingOnEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009922B0, bool, get_ShouldStandingOnEdgeFacingForwardsAnimationPlay, (app::SeinStandingOnEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7CDE0, bool, get_IsStatePerforming, (app::SeinStandingOnEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7CDE0, bool, get_StandingOnEdge, (app::SeinStandingOnEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7CE00, void, OnSetReferenceToSein, (app::SeinStandingOnEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D0850, void, Start, (app::SeinStandingOnEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7CEE0, void, UpdateCharacterState, (app::SeinStandingOnEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7D4D0, void, ProcessEffects, (app::SeinStandingOnEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A35F10, bool, ShouldStandingOnEdgeFacingBackwardsAnimationKeepPlaying, (app::SeinStandingOnEdge * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04734D08, SeinStandingOnEdge_ShouldStandingOnEdgeFacingBackwardsAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009922B0, bool, ShouldStandingOnEdgeFacingForwardsAnimationKeepPlaying, (app::SeinStandingOnEdge * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04786BE0, SeinStandingOnEdge_ShouldStandingOnEdgeFacingForwardsAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00A7DBC0, bool, StandingOnEdgeRayHit, (app::SeinStandingOnEdge * this_ptr, float offset, int32_t * req_id))
    IL2CPP_REGISTER_METHOD(0x00A7DF70, void, ctor, (app::SeinStandingOnEdge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7DF90, void, cctor, ())
}
