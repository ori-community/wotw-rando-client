#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::KamikazeLizardExplosion {
    IL2CPP_REGISTER_METHOD(0x00E5BBA0, void, Set, (app::KamikazeLizardExplosion * this_ptr, float damage_amound, app::DamageWeight__Enum weight))
    IL2CPP_REGISTER_METHOD(0x00E5BCC0, void, ctor, (app::KamikazeLizardExplosion * this_ptr))
} // namespace app::classes::KamikazeLizardExplosion
