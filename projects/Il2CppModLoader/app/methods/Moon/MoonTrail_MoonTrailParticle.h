#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::MoonTrail_MoonTrailParticle {
    IL2CPP_REGISTER_METHOD(0x001F9BA0, bool, get_IsAlive, (app::MoonTrail_MoonTrailParticle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F9BB0, float, get_NormalizedLifetime, (app::MoonTrail_MoonTrailParticle__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F9BD0, void, ctor, (app::MoonTrail_MoonTrailParticle__Boxed * this_ptr, app::Vector3 position, app::Vector3 normal, app::Color color, float lifetime, float thickness))
} // namespace app::classes::Moon::MoonTrail_MoonTrailParticle
