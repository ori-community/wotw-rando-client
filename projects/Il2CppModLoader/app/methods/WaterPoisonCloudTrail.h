#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WaterPoisonCloudTrail {
    IL2CPP_REGISTER_METHOD(0x008DD710, void, SetDestroyOnCleared, (app::WaterPoisonCloudTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D6890, void, PauseSpawning, (app::WaterPoisonCloudTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C1CB0, void, ResumeSpawning, (app::WaterPoisonCloudTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008DD7C0, void, Clear, (app::WaterPoisonCloudTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008DD8C0, void, Awake, (app::WaterPoisonCloudTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008DD9A0, void, FixedUpdate, (app::WaterPoisonCloudTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008DDE60, void, LateUpdate, (app::WaterPoisonCloudTrail * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008DDED0, void, SpawnAt, (app::WaterPoisonCloudTrail * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x008DE000, void, ctor, (app::WaterPoisonCloudTrail * this_ptr))
}
