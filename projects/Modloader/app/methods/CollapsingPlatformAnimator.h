#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/CollapsingPlatformAnimator.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/ParticleSystem.h>

namespace app::classes::CollapsingPlatformAnimator {
    IL2CPP_REGISTER_METHOD(0x0040B220, app::GameObject*, get_Platform, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0040B270, app::GameObject*, get_AnimatedVisuals, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E6CE30, app::ParticleSystem*, get_Particles, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CAF70, void, Awake, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CB380, void, ActivatePlatformCallback, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012CB3A0, void, SetCollapsed, (app::CollapsingPlatformAnimator * this_ptr, bool is_collapsed))
    IL2CPP_REGISTER_METHOD(0x012CB5E0, void, ctor, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, (app::CollapsingPlatformAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, (app::CollapsingPlatformAnimator * this_ptr))
} // namespace app::classes::CollapsingPlatformAnimator
