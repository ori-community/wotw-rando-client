#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CharacterAnimationStateBase.h>
#include <Modloader/app/structs/TextureAnimation.h>

namespace app::classes::CharacterAnimationStateBase {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::CharacterAnimationStateBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::CharacterAnimationStateBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEnd, (app::CharacterAnimationStateBase * this_ptr, app::TextureAnimation* animation))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CharacterAnimationStateBase * this_ptr))
} // namespace app::classes::CharacterAnimationStateBase
