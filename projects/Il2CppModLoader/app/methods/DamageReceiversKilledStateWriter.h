#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DamageReceiversKilledStateWriter {
    IL2CPP_REGISTER_METHOD(0x00DC8E30, void, OnEnable, (app::DamageReceiversKilledStateWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC9080, void, OnDisable, (app::DamageReceiversKilledStateWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC9090, void, UnsubscribeToDamageReceivers, (app::DamageReceiversKilledStateWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC9300, void, OnLegacyDamageReceiverKilled, (app::DamageReceiversKilledStateWriter * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHODINFO(0x04757F38, DamageReceiversKilledStateWriter_OnLegacyDamageReceiverKilled__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00DC94D0, void, PerformStateChange, (app::DamageReceiversKilledStateWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC9510, app::IDesiredUberState*, GetRequirementsForTimeline, (app::DamageReceiversKilledStateWriter * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DamageReceiversKilledStateWriter * this_ptr))
} // namespace app::classes::DamageReceiversKilledStateWriter
