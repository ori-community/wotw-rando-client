#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyDamageReciever.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::LegacyDamageReciever {
    IL2CPP_REGISTER_METHOD(0x00A17920, void, OnValidate, (app::LegacyDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A17930, void, OnEnable, (app::LegacyDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A179C0, void, OnDisable, (app::LegacyDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A17A50, float, get_NormalizedHealth, (app::LegacyDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A17920, void, OnPoolSpawned, (app::LegacyDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::LegacyDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A17A60, void, Awake, (app::LegacyDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A17B70, void, OnRecieveDamage, (app::LegacyDamageReciever * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00A18090, bool, get_NoHealthLeft, (app::LegacyDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A180A0, void, Serialize, (app::LegacyDamageReciever * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00A18140, void, UpdateActive, (app::LegacyDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTimedRespawn, (app::LegacyDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A18190, void, RegisterRespawnDelegate, (app::LegacyDamageReciever * this_ptr, app::Action* on_respawn))
    IL2CPP_REGISTER_METHOD(0x00A183E0, void, SetHealth, (app::LegacyDamageReciever * this_ptr, float health))
    IL2CPP_REGISTER_METHOD(0x008663E0, void, SetMaxHealth, (app::LegacyDamageReciever * this_ptr, float max_health))
    IL2CPP_REGISTER_METHOD(0x00A183F0, app::String*, get_StressTestName, (app::LegacyDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A18470, void, StartStressTest, (app::LegacyDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A187F0, void, StressTestUpdate, (app::LegacyDamageReciever * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, (app::LegacyDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00736620, app::StressTestStatus__Enum, get_StressTestStatus, (app::LegacyDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006E35E0, void, set_StressTestStatus, (app::LegacyDamageReciever * this_ptr, app::StressTestStatus__Enum value))
    IL2CPP_REGISTER_METHOD(0x00A18870, bool, get_CanExecuteStressTest, (app::LegacyDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, (app::LegacyDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A18A20, void, ctor, (app::LegacyDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::LegacyDamageReciever * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::LegacyDamageReciever * this_ptr))
} // namespace app::classes::LegacyDamageReciever
