#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper_SortedDamageEntry.h>
#include <Modloader/app/structs/Vitals_DamageProcessHelper_SortedDamageEntry__Array.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02D3E130, app::EqualityComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02B49B00,
        int32_t,
        IndexOf,
        app::EqualityComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* this_ptr,
        app::Vitals_DamageProcessHelper_SortedDamageEntry__Array* array,
        app::Vitals_DamageProcessHelper_SortedDamageEntry value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B49BF0,
        int32_t,
        LastIndexOf,
        app::EqualityComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* this_ptr,
        app::Vitals_DamageProcessHelper_SortedDamageEntry__Array* array,
        app::Vitals_DamageProcessHelper_SortedDamageEntry value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B49CE0,
        int32_t,
        IEqualityComparer_GetHashCode,
        app::EqualityComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02B49DE0,
        bool,
        IEqualityComparer_Equals,
        app::EqualityComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::EqualityComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_* this_ptr)
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_
