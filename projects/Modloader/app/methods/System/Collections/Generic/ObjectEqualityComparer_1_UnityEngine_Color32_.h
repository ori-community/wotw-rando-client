#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectEqualityComparer_1_UnityEngine_Color32_.h>
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/Color32__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_Color32_ {
    IL2CPP_REGISTER_METHOD(0x02437ED0, bool, Equals_1, (app::ObjectEqualityComparer_1_UnityEngine_Color32_ * this_ptr, app::Color32 x, app::Color32 y))
    IL2CPP_REGISTER_METHOD(0x02437F80, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_UnityEngine_Color32_ * this_ptr, app::Color32 obj))
    IL2CPP_REGISTER_METHOD(0x02437FE0, int32_t, IndexOf, (app::ObjectEqualityComparer_1_UnityEngine_Color32_ * this_ptr, app::Color32__Array* array, app::Color32 value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02438150, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_UnityEngine_Color32_ * this_ptr, app::Color32__Array* array, app::Color32 value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_UnityEngine_Color32_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_UnityEngine_Color32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_UnityEngine_Color32_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_Color32_
