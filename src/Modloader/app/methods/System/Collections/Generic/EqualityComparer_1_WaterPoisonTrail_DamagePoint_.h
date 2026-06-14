#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_WaterPoisonTrail_DamagePoint_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/WaterPoisonTrail_DamagePoint.h>
#include <Modloader/app/structs/WaterPoisonTrail_DamagePoint__Array.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_WaterPoisonTrail_DamagePoint_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_WaterPoisonTrail_DamagePoint_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02B5C000, app::EqualityComparer_1_WaterPoisonTrail_DamagePoint_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02B5C960,
        int32_t,
        IndexOf,
        app::EqualityComparer_1_WaterPoisonTrail_DamagePoint_* this_ptr,
        app::WaterPoisonTrail_DamagePoint__Array* array,
        app::WaterPoisonTrail_DamagePoint value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B5CA40,
        int32_t,
        LastIndexOf,
        app::EqualityComparer_1_WaterPoisonTrail_DamagePoint_* this_ptr,
        app::WaterPoisonTrail_DamagePoint__Array* array,
        app::WaterPoisonTrail_DamagePoint value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B5CB20,
        int32_t,
        IEqualityComparer_GetHashCode,
        app::EqualityComparer_1_WaterPoisonTrail_DamagePoint_* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02B5CC20,
        bool,
        IEqualityComparer_Equals,
        app::EqualityComparer_1_WaterPoisonTrail_DamagePoint_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::EqualityComparer_1_WaterPoisonTrail_DamagePoint_* this_ptr)
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_WaterPoisonTrail_DamagePoint_
