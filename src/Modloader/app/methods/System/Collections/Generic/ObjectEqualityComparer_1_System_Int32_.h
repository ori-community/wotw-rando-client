#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_System_Int32_.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02435520, bool, Equals_1, app::ObjectEqualityComparer_1_System_Int32_* this_ptr, int32_t x, int32_t y)
    IL2CPP_REGISTER_METHOD(0x02435570, int32_t, GetHashCode_1, app::ObjectEqualityComparer_1_System_Int32_* this_ptr, int32_t obj)
    IL2CPP_REGISTER_METHOD(
        0x02435580,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_System_Int32_* this_ptr,
        app::Int32__Array* array,
        int32_t value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02435660,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_System_Int32_* this_ptr,
        app::Int32__Array* array,
        int32_t value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_System_Int32_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_System_Int32_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_Int32_
