#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_UnityEngine_RaycastHit_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/RaycastHit__Array.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_UnityEngine_RaycastHit_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_UnityEngine_RaycastHit_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02B51A20, app::EqualityComparer_1_UnityEngine_RaycastHit_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02B52380, int32_t, IndexOf, (app::EqualityComparer_1_UnityEngine_RaycastHit_ * this_ptr, app::RaycastHit__Array* array, app::RaycastHit value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B524B0, int32_t, LastIndexOf, (app::EqualityComparer_1_UnityEngine_RaycastHit_ * this_ptr, app::RaycastHit__Array* array, app::RaycastHit value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B525D0, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_UnityEngine_RaycastHit_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02B526F0, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_UnityEngine_RaycastHit_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_UnityEngine_RaycastHit_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_UnityEngine_RaycastHit_
