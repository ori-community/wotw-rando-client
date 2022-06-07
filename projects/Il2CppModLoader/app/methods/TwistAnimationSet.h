#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TwistAnimationSet {
    IL2CPP_REGISTER_METHOD(0x013DCCE0, app::TextureAnimationWithTransitions *, GetAnimation, (app::TwistAnimationSet * this_ptr, float a))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TwistAnimationSet * this_ptr))
}
