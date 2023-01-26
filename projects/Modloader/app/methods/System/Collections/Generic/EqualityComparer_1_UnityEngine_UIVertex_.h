#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_UnityEngine_UIVertex_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UIVertex.h>
#include <Modloader/app/structs/UIVertex__Array.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_UnityEngine_UIVertex_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_UnityEngine_UIVertex_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02B56F20, app::EqualityComparer_1_UnityEngine_UIVertex_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02B57880, int32_t, IndexOf, (app::EqualityComparer_1_UnityEngine_UIVertex_ * this_ptr, app::UIVertex__Array* array, app::UIVertex value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B579E0, int32_t, LastIndexOf, (app::EqualityComparer_1_UnityEngine_UIVertex_ * this_ptr, app::UIVertex__Array* array, app::UIVertex value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B57B40, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_UnityEngine_UIVertex_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02B57C80, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_UnityEngine_UIVertex_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_UnityEngine_UIVertex_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_UnityEngine_UIVertex_
