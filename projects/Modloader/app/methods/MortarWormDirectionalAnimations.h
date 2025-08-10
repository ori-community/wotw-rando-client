#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MortarWormDirectionalAnimations.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MortarWormDirectionalAnimations {
    IL2CPP_REGISTER_METHOD(
        0x01480010,
        app::TextureAnimationWithTransitions*,
        PickWithDirection,
        app::MortarWormDirectionalAnimations* this_ptr,
        app::Vector3 direction
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MortarWormDirectionalAnimations* this_ptr)
} // namespace app::classes::MortarWormDirectionalAnimations
