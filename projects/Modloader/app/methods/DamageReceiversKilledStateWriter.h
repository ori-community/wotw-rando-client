#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageReceiversKilledStateWriter.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/IDesiredUberState.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::DamageReceiversKilledStateWriter {
    IL2CPP_REGISTER_METHOD(0x00DC8E30, void, OnEnable, (app::DamageReceiversKilledStateWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC9080, void, OnDisable, (app::DamageReceiversKilledStateWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC9090, void, UnsubscribeToDamageReceivers, (app::DamageReceiversKilledStateWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC9300, void, OnLegacyDamageReceiverKilled, (app::DamageReceiversKilledStateWriter * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00DC94D0, void, PerformStateChange, (app::DamageReceiversKilledStateWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC9510, app::IDesiredUberState*, GetRequirementsForTimeline, (app::DamageReceiversKilledStateWriter * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DamageReceiversKilledStateWriter * this_ptr))
} // namespace app::classes::DamageReceiversKilledStateWriter
