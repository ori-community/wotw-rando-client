#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Int64Enum__Enum.h>
#include <Modloader/app/structs/Int64Enum__Enum__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_System_Int64Enum_.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_Int64Enum_ {
    IL2CPP_REGISTER_METHOD(
        0x02435D10,
        bool,
        Equals_1,
        app::ObjectEqualityComparer_1_System_Int64Enum_* this_ptr,
        app::Int64Enum__Enum x,
        app::Int64Enum__Enum y
    )
    IL2CPP_REGISTER_METHOD(0x02435DC0, int32_t, GetHashCode_1, app::ObjectEqualityComparer_1_System_Int64Enum_* this_ptr, app::Int64Enum__Enum obj)
    IL2CPP_REGISTER_METHOD(
        0x02435E20,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_System_Int64Enum_* this_ptr,
        app::Int64Enum__Enum__Array* array,
        app::Int64Enum__Enum value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02435F70,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_System_Int64Enum_* this_ptr,
        app::Int64Enum__Enum__Array* array,
        app::Int64Enum__Enum value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_System_Int64Enum_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_System_Int64Enum_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_System_Int64Enum_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_Int64Enum_
