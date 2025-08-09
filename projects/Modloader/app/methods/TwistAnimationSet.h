#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#include <Modloader/app/structs/TwistAnimationSet.h>

namespace app::classes::TwistAnimationSet {
    IL2CPP_REGISTER_METHOD(0x013DCCE0, app::TextureAnimationWithTransitions*, GetAnimation, app::TwistAnimationSet* this_ptr, float a)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TwistAnimationSet* this_ptr)
} // namespace app::classes::TwistAnimationSet
