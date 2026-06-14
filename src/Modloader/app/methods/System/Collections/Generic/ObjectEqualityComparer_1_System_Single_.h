#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_System_Single_.h>
#include <Modloader/app/structs/Single__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x024364E0, bool, Equals_1, app::ObjectEqualityComparer_1_System_Single_* this_ptr, float x, float y)
    IL2CPP_REGISTER_METHOD(0x02436530, int32_t, GetHashCode_1, app::ObjectEqualityComparer_1_System_Single_* this_ptr, float obj)
    IL2CPP_REGISTER_METHOD(
        0x02436550,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_System_Single_* this_ptr,
        app::Single__Array* array,
        float value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02436650,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_System_Single_* this_ptr,
        app::Single__Array* array,
        float value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_System_Single_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_System_Single_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_Single_
