#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_UnityEngine_ParticleCollisionEvent_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ParticleCollisionEvent.h>
#include <Modloader/app/structs/ParticleCollisionEvent__Array.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_UnityEngine_ParticleCollisionEvent_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_UnityEngine_ParticleCollisionEvent_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02B50760, app::EqualityComparer_1_UnityEngine_ParticleCollisionEvent_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02B4CF00,
        int32_t,
        IndexOf,
        app::EqualityComparer_1_UnityEngine_ParticleCollisionEvent_* this_ptr,
        app::ParticleCollisionEvent__Array* array,
        app::ParticleCollisionEvent value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B4D010,
        int32_t,
        LastIndexOf,
        app::EqualityComparer_1_UnityEngine_ParticleCollisionEvent_* this_ptr,
        app::ParticleCollisionEvent__Array* array,
        app::ParticleCollisionEvent value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B4D120,
        int32_t,
        IEqualityComparer_GetHashCode,
        app::EqualityComparer_1_UnityEngine_ParticleCollisionEvent_* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02B4D230,
        bool,
        IEqualityComparer_Equals,
        app::EqualityComparer_1_UnityEngine_ParticleCollisionEvent_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::EqualityComparer_1_UnityEngine_ParticleCollisionEvent_* this_ptr)
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_UnityEngine_ParticleCollisionEvent_
