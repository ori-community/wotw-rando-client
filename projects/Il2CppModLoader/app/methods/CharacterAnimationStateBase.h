#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CharacterAnimationStateBase {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::CharacterAnimationStateBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::CharacterAnimationStateBase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEnd, (app::CharacterAnimationStateBase * this_ptr, app::TextureAnimation * animation))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CharacterAnimationStateBase * this_ptr))
}
