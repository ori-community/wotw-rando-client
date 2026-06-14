#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/GenericEqualityComparer_1_System_Char_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_System_Char_ {
    IL2CPP_REGISTER_METHOD(0x02AB12F0, bool, Equals_1, app::GenericEqualityComparer_1_System_Char_* this_ptr, char16_t x, char16_t y)
    IL2CPP_REGISTER_METHOD(0x0265AF50, int32_t, GetHashCode_1, app::GenericEqualityComparer_1_System_Char_* this_ptr, char16_t obj)
    IL2CPP_REGISTER_METHOD(
        0x02AB1300,
        int32_t,
        IndexOf,
        app::GenericEqualityComparer_1_System_Char_* this_ptr,
        app::Char__Array* array,
        char16_t value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02AB1360,
        int32_t,
        LastIndexOf,
        app::GenericEqualityComparer_1_System_Char_* this_ptr,
        app::Char__Array* array,
        char16_t value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x02AB0EE0, bool, Equals_2, app::GenericEqualityComparer_1_System_Char_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::GenericEqualityComparer_1_System_Char_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225BDA0, void, ctor, app::GenericEqualityComparer_1_System_Char_* this_ptr)
} // namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_System_Char_
