#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTime__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_System_DateTime_.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_DateTime_ {
    IL2CPP_REGISTER_METHOD(0x0265B130, bool, Equals_1, app::ObjectEqualityComparer_1_System_DateTime_* this_ptr, app::DateTime x, app::DateTime y)
    IL2CPP_REGISTER_METHOD(0x0265B180, int32_t, GetHashCode_1, app::ObjectEqualityComparer_1_System_DateTime_* this_ptr, app::DateTime obj)
    IL2CPP_REGISTER_METHOD(
        0x0265B1A0,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_System_DateTime_* this_ptr,
        app::DateTime__Array* array,
        app::DateTime value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x0265B280,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_System_DateTime_* this_ptr,
        app::DateTime__Array* array,
        app::DateTime value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_System_DateTime_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_System_DateTime_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_System_DateTime_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_DateTime_
