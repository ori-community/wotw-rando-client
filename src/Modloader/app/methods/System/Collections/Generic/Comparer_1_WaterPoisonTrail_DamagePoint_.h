#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_WaterPoisonTrail_DamagePoint_.h>
#include <Modloader/app/structs/Comparison_1_WaterPoisonTrail_DamagePoint_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_WaterPoisonTrail_DamagePoint_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_WaterPoisonTrail_DamagePoint_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x028DB6E0, app::Comparer_1_WaterPoisonTrail_DamagePoint_*, Create, app::Comparison_1_WaterPoisonTrail_DamagePoint_* comparison)
    IL2CPP_REGISTER_METHOD(0x028DB8E0, app::Comparer_1_WaterPoisonTrail_DamagePoint_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(0x02819350, int32_t, IComparer_Compare, app::Comparer_1_WaterPoisonTrail_DamagePoint_* this_ptr, app::Object* x, app::Object* y)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_WaterPoisonTrail_DamagePoint_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_WaterPoisonTrail_DamagePoint_
