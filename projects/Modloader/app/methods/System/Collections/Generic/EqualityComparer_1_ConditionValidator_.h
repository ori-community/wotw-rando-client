#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_ConditionValidator_.h>
#include <Modloader/app/structs/ConditionValidator.h>
#include <Modloader/app/structs/ConditionValidator__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_ConditionValidator_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_ConditionValidator_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02CC5020, app::EqualityComparer_1_ConditionValidator_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02B48D60, int32_t, IndexOf, (app::EqualityComparer_1_ConditionValidator_ * this_ptr, app::ConditionValidator__Array* array, app::ConditionValidator value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B48E30, int32_t, LastIndexOf, (app::EqualityComparer_1_ConditionValidator_ * this_ptr, app::ConditionValidator__Array* array, app::ConditionValidator value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B48F00, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_ConditionValidator_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02B49000, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_ConditionValidator_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_ConditionValidator_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_ConditionValidator_
