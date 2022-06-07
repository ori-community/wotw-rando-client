#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::EqualityComparer_1_System_Int64Enum_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_System_Int64Enum_ *, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02E61EB0, app::EqualityComparer_1_System_Int64Enum_ *, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02E61BD0, int32_t, IndexOf, (app::EqualityComparer_1_System_Int64Enum_ * this_ptr, app::Int64Enum__Enum__Array * array, app::Int64Enum__Enum value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02E61C80, int32_t, LastIndexOf, (app::EqualityComparer_1_System_Int64Enum_ * this_ptr, app::Int64Enum__Enum__Array * array, app::Int64Enum__Enum value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B48190, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_System_Int64Enum_ * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x02E61D30, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_System_Int64Enum_ * this_ptr, app::Object * x, app::Object * y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_System_Int64Enum_ * this_ptr))
}
