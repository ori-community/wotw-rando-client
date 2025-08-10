#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericEqualityComparer_1_System_Int32_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x01B64A20, bool, Equals_1, app::GenericEqualityComparer_1_System_Int32_* this_ptr, int32_t x, int32_t y)
    IL2CPP_REGISTER_METHOD(0x02435570, int32_t, GetHashCode_1, app::GenericEqualityComparer_1_System_Int32_* this_ptr, int32_t obj)
    IL2CPP_REGISTER_METHOD(
        0x02AB13C0,
        int32_t,
        IndexOf,
        app::GenericEqualityComparer_1_System_Int32_* this_ptr,
        app::Int32__Array* array,
        int32_t value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02AB1420,
        int32_t,
        LastIndexOf,
        app::GenericEqualityComparer_1_System_Int32_* this_ptr,
        app::Int32__Array* array,
        int32_t value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x02AB0EE0, bool, Equals_2, app::GenericEqualityComparer_1_System_Int32_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::GenericEqualityComparer_1_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225BDA0, void, ctor, app::GenericEqualityComparer_1_System_Int32_* this_ptr)
} // namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_System_Int32_
