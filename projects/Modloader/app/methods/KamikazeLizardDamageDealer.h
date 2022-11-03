#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::KamikazeLizardDamageDealer {
    IL2CPP_REGISTER_METHOD(0x00E5B6C0, void, OnEnable, (app::KamikazeLizardDamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E5B860, void, OnDisable, (app::KamikazeLizardDamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E5BA00, void, CheckForExplosion, (app::KamikazeLizardDamageDealer * this_ptr, app::DamageDealer* dealer, app::DamageResult result))
    IL2CPP_REGISTER_METHODINFO(0x04707C50, KamikazeLizardDamageDealer_CheckForExplosion__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E5BA60, void, ctor, (app::KamikazeLizardDamageDealer * this_ptr))
} // namespace app::classes::KamikazeLizardDamageDealer
