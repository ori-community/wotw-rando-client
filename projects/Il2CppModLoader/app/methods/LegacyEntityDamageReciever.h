#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LegacyEntityDamageReciever {
    IL2CPP_REGISTER_METHOD(0x00A210B0, void, OnValidate, (app::LegacyEntityDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A211A0, void, Awake, (app::LegacyEntityDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A21440, app::GameObject *, get_DisableTarget, (app::LegacyEntityDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A214C0, void, OnPoolSpawned, (app::LegacyEntityDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A21820, void, OnTriggerEnter, (app::LegacyEntityDamageReciever * this_ptr, app::Collider * collider))
    IL2CPP_REGISTER_METHOD(0x00A21AE0, app::SoundHost *, get_SoundHost, (app::LegacyEntityDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A21BC0, void, OnRecieveDamage, (app::LegacyEntityDamageReciever * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x00A224F0, void, PlaySound, (app::LegacyEntityDamageReciever * this_ptr, app::Event_1 * sound))
    IL2CPP_REGISTER_METHOD(0x00A227E0, void, HandleFireShard, (app::LegacyEntityDamageReciever * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x00A230F0, void, CleanBurningEffectHooks, (app::LegacyEntityDamageReciever * this_ptr, app::LimitedLifetime * effect))
    IL2CPP_REGISTER_METHODINFO(0x0475FAD0, LegacyEntityDamageReciever_CleanBurningEffectHooks__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00A232C0, void, StopBurningEffects, (app::LegacyEntityDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A23570, void, HandleDamageBoostShard, (app::LegacyEntityDamageReciever * this_ptr, app::Damage * * damage))
    IL2CPP_REGISTER_METHOD(0x00A23690, void, HandleIceShard, (app::LegacyEntityDamageReciever * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHOD(0x00A237E0, bool, CanDetonateProjectiles, (app::LegacyEntityDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A23880, void, StressTestUpdate, (app::LegacyEntityDamageReciever * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00A239C0, void, OnRespawn, (app::LegacyEntityDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A239D0, void, ctor, (app::LegacyEntityDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A23DD0, void, cctor, ())
}
