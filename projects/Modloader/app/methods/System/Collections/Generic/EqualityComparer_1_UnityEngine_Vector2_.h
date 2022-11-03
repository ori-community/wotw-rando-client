#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_UnityEngine_Vector2_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02B58830, app::EqualityComparer_1_UnityEngine_Vector2_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02B59190, int32_t, IndexOf, (app::EqualityComparer_1_UnityEngine_Vector2_ * this_ptr, app::Vector2__Array* array, app::Vector2 value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B59260, int32_t, LastIndexOf, (app::EqualityComparer_1_UnityEngine_Vector2_ * this_ptr, app::Vector2__Array* array, app::Vector2 value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B59330, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_UnityEngine_Vector2_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02B59430, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_UnityEngine_Vector2_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_UnityEngine_Vector2_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_UnityEngine_Vector2_
