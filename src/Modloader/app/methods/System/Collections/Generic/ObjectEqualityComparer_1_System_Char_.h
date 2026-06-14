#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_System_Char_.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_Char_ {
    IL2CPP_REGISTER_METHOD(0x0265AF00, bool, Equals_1, app::ObjectEqualityComparer_1_System_Char_* this_ptr, char16_t x, char16_t y)
    IL2CPP_REGISTER_METHOD(0x0265AF50, int32_t, GetHashCode_1, app::ObjectEqualityComparer_1_System_Char_* this_ptr, char16_t obj)
    IL2CPP_REGISTER_METHOD(
        0x0265AF60,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_System_Char_* this_ptr,
        app::Char__Array* array,
        char16_t value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x0265B040,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_System_Char_* this_ptr,
        app::Char__Array* array,
        char16_t value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_System_Char_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_System_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_System_Char_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_Char_
