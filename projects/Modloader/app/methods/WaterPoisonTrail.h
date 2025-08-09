#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WaterPoisonTrail.h>
#include <Modloader/app/structs/WaterPoisonTrail_DamagePoint.h>

namespace app::classes::WaterPoisonTrail {
    IL2CPP_REGISTER_METHOD(0x008DE010, app::Damage*, GetDamageForPosition, app::WaterPoisonTrail* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(
        0x008DE330,
        bool,
        GetNearestBlob,
        app::WaterPoisonTrail* this_ptr,
        app::Vector3 position,
        app::WaterPoisonTrail_DamagePoint* damage_point
    )
    IL2CPP_REGISTER_METHOD(0x008DE600, void, Awake, app::WaterPoisonTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008DE830, void, OnEnable, app::WaterPoisonTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008DE900, void, OnDisable, app::WaterPoisonTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008DE9C0, void, FixedUpdate, app::WaterPoisonTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008DF0A0, void, Clear, app::WaterPoisonTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00873B70, void, SetDestroyOnCleared, app::WaterPoisonTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008DF2F0, void, PauseSpawning, app::WaterPoisonTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008DF4E0, void, ResumeSpawning, app::WaterPoisonTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008DF7F0, void, AddDamagePoint, app::WaterPoisonTrail* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x008DF9F0, void, DestroyTrail, app::WaterPoisonTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008DFAE0, void, OnDrawGizmos, app::WaterPoisonTrail* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008DFC00, void, ctor, app::WaterPoisonTrail* this_ptr)
} // namespace app::classes::WaterPoisonTrail
