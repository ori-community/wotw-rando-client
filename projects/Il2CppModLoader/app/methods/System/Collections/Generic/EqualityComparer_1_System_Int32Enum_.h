#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_System_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_System_Int32Enum_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02E60910, app::EqualityComparer_1_System_Int32Enum_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02E60630, int32_t, IndexOf, (app::EqualityComparer_1_System_Int32Enum_ * this_ptr, app::Int32Enum__Enum__Array* array, app::Int32Enum__Enum value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02E606E0, int32_t, LastIndexOf, (app::EqualityComparer_1_System_Int32Enum_ * this_ptr, app::Int32Enum__Enum__Array* array, app::Int32Enum__Enum value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B4AA80, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_System_Int32Enum_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02E60790, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_System_Int32Enum_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_System_Int32Enum_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_System_Int32Enum_
