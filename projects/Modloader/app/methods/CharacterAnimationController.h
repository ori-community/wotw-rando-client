#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CharacterAnimationController {
    IL2CPP_REGISTER_METHOD(0x01046C20, void, Start, (app::CharacterAnimationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01046D90, void, OnDestroy, (app::CharacterAnimationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_IsSuspended, (app::CharacterAnimationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DFE810, void, set_IsSuspended, (app::CharacterAnimationController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01046F10, void, OnAnimationEnd, (app::CharacterAnimationController * this_ptr, app::TextureAnimation* animation))
    IL2CPP_REGISTER_METHODINFO(0x0470A528, CharacterAnimationController_OnAnimationEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01046FF0, void, FixedUpdate, (app::CharacterAnimationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01047200, void, ResetState, (app::CharacterAnimationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010472E0, void, ChangeState, (app::CharacterAnimationController * this_ptr, app::CharacterAnimationStateBase* state))
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::CharacterAnimationController * this_ptr))
} // namespace app::classes::CharacterAnimationController
