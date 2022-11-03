#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DamageBasedSoundProvider {
    IL2CPP_REGISTER_METHOD(0x00DC22A0, bool, Match, (app::DamageBasedSoundProvider * this_ptr, app::Damage* damage, app::SoundDamageType__Enum sound_damage_type))
    IL2CPP_REGISTER_METHOD(0x00DC2710, app::SoundDescriptor*, GetSoundForDamage, (app::DamageBasedSoundProvider * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00DC28F0, app::Object*, GetGenericResource, (app::DamageBasedSoundProvider * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x00DC2AE0, int32_t, GetGenericResourceId, (app::DamageBasedSoundProvider * this_ptr, app::Object* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DamageBasedSoundProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC2CD0, void, cctor, ())
} // namespace app::classes::DamageBasedSoundProvider
