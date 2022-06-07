#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::EqualityComparer_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_System_Object_ *, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02E63AD0, app::EqualityComparer_1_System_Object_ *, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02E61BD0, int32_t, IndexOf, (app::EqualityComparer_1_System_Object_ * this_ptr, app::Object__Array * array, app::Object * value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02E61C80, int32_t, LastIndexOf, (app::EqualityComparer_1_System_Object_ * this_ptr, app::Object__Array * array, app::Object * value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02E64430, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_System_Object_ * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x02E64520, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_System_Object_ * this_ptr, app::Object * x, app::Object * y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_System_Object_ * this_ptr))
}
