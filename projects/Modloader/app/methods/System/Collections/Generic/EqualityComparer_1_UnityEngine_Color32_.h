#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EqualityComparer_1_UnityEngine_Color32_.h>
#include <Modloader/app/structs/Color32__Array.h>
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_UnityEngine_Color32_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_UnityEngine_Color32_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02B49FC0, app::EqualityComparer_1_UnityEngine_Color32_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02B4A920, int32_t, IndexOf, (app::EqualityComparer_1_UnityEngine_Color32_ * this_ptr, app::Color32__Array* array, app::Color32 value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B4A9D0, int32_t, LastIndexOf, (app::EqualityComparer_1_UnityEngine_Color32_ * this_ptr, app::Color32__Array* array, app::Color32 value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B4AA80, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_UnityEngine_Color32_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02B4AB70, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_UnityEngine_Color32_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_UnityEngine_Color32_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_UnityEngine_Color32_
