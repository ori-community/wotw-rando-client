#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_Moon_Vitals_DamageProcessHelper_DamageBucket_.h>
#include <Modloader/app/structs/Comparison_1_Moon_Vitals_DamageProcessHelper_DamageBucket_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_Moon_Vitals_DamageProcessHelper_DamageBucket_*, get_Default, )
    IL2CPP_REGISTER_METHOD(
        0x0281C830,
        app::Comparer_1_Moon_Vitals_DamageProcessHelper_DamageBucket_*,
        Create,
        app::Comparison_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x0281CA30, app::Comparer_1_Moon_Vitals_DamageProcessHelper_DamageBucket_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x0280C360,
        int32_t,
        IComparer_Compare,
        app::Comparer_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_Moon_Vitals_DamageProcessHelper_DamageBucket_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_Moon_Vitals_DamageProcessHelper_DamageBucket_
