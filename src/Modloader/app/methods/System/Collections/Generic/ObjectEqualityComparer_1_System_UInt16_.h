#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_System_UInt16_.h>
#include <Modloader/app/structs/UInt16__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_UInt16_ {
    IL2CPP_REGISTER_METHOD(0x02436970, bool, Equals_1, app::ObjectEqualityComparer_1_System_UInt16_* this_ptr, uint16_t x, uint16_t y)
    IL2CPP_REGISTER_METHOD(0x024369C0, int32_t, GetHashCode_1, app::ObjectEqualityComparer_1_System_UInt16_* this_ptr, uint16_t obj)
    IL2CPP_REGISTER_METHOD(
        0x024369D0,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_System_UInt16_* this_ptr,
        app::UInt16__Array* array,
        uint16_t value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02436AB0,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_System_UInt16_* this_ptr,
        app::UInt16__Array* array,
        uint16_t value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_System_UInt16_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_System_UInt16_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_System_UInt16_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_UInt16_
