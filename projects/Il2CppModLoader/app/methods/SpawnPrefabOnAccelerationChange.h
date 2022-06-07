#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SpawnPrefabOnAccelerationChange {
    IL2CPP_REGISTER_METHOD(0x00EF6040, void, Awake, (app::SpawnPrefabOnAccelerationChange * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057AAC0, int32_t, GetPrewarmAmount, (app::SpawnPrefabOnAccelerationChange * this_ptr, app::GameObject * entry))
    IL2CPP_REGISTER_METHOD(0x00EF61B0, void, Start, (app::SpawnPrefabOnAccelerationChange * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EF62A0, void, FixedUpdate, (app::SpawnPrefabOnAccelerationChange * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00608710, app::SuspendableMask__Enum, get_Mask, (app::SpawnPrefabOnAccelerationChange * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00608720, void, set_Mask, (app::SpawnPrefabOnAccelerationChange * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_IsSuspended, (app::SpawnPrefabOnAccelerationChange * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724140, void, set_IsSuspended, (app::SpawnPrefabOnAccelerationChange * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00EF65A0, void, ctor, (app::SpawnPrefabOnAccelerationChange * this_ptr))
}
