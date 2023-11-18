#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericEqualityComparer_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_UnityEngine_Color_ {
    IL2CPP_REGISTER_METHOD(0x02AB28A0, bool, Equals_1, (app::GenericEqualityComparer_1_UnityEngine_Color_ * this_ptr, app::Color x, app::Color y))
    IL2CPP_REGISTER_METHOD(0x02438320, int32_t, GetHashCode_1, (app::GenericEqualityComparer_1_UnityEngine_Color_ * this_ptr, app::Color obj))
    IL2CPP_REGISTER_METHOD(0x02AB28C0, int32_t, IndexOf, (app::GenericEqualityComparer_1_UnityEngine_Color_ * this_ptr, app::Color__Array* array, app::Color value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02AB2940, int32_t, LastIndexOf, (app::GenericEqualityComparer_1_UnityEngine_Color_ * this_ptr, app::Color__Array* array, app::Color value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02AB0EE0, bool, Equals_2, (app::GenericEqualityComparer_1_UnityEngine_Color_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::GenericEqualityComparer_1_UnityEngine_Color_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225BDA0, void, ctor, (app::GenericEqualityComparer_1_UnityEngine_Color_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_UnityEngine_Color_
