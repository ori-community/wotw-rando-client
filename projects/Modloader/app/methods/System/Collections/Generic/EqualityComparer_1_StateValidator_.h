#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_StateValidator_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StateValidator.h>
#include <Modloader/app/structs/StateValidator__Array.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_StateValidator_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_StateValidator_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02D99510, app::EqualityComparer_1_StateValidator_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02B49B00,
        int32_t,
        IndexOf,
        app::EqualityComparer_1_StateValidator_* this_ptr,
        app::StateValidator__Array* array,
        app::StateValidator value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B49BF0,
        int32_t,
        LastIndexOf,
        app::EqualityComparer_1_StateValidator_* this_ptr,
        app::StateValidator__Array* array,
        app::StateValidator value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x02B49CE0, int32_t, IEqualityComparer_GetHashCode, app::EqualityComparer_1_StateValidator_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x02B49DE0, bool, IEqualityComparer_Equals, app::EqualityComparer_1_StateValidator_* this_ptr, app::Object* x, app::Object* y)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::EqualityComparer_1_StateValidator_* this_ptr)
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_StateValidator_
