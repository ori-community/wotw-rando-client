#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_UnityEngine_UI_Navigation_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_UnityEngine_UI_Navigation_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02B549A0, app::EqualityComparer_1_UnityEngine_UI_Navigation_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02B4CF00, int32_t, IndexOf, (app::EqualityComparer_1_UnityEngine_UI_Navigation_ * this_ptr, app::Navigation__Array* array, app::Navigation value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B4D010, int32_t, LastIndexOf, (app::EqualityComparer_1_UnityEngine_UI_Navigation_ * this_ptr, app::Navigation__Array* array, app::Navigation value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B4D120, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_UnityEngine_UI_Navigation_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02B4D230, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_UnityEngine_UI_Navigation_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_UnityEngine_UI_Navigation_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_UnityEngine_UI_Navigation_
