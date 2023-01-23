#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_UnityEngine_EventSystems_RaycastResult_.h>
#include <Modloader/app/structs/RaycastResult.h>
#include <Modloader/app/structs/RaycastResult__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_EventSystems_RaycastResult_ {
    IL2CPP_REGISTER_METHOD(0x02438520, bool, Equals_1, (app::ObjectEqualityComparer_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::RaycastResult x, app::RaycastResult y))
    IL2CPP_REGISTER_METHOD(0x01CD0900, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::RaycastResult obj))
    IL2CPP_REGISTER_METHOD(0x02438600, int32_t, IndexOf, (app::ObjectEqualityComparer_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::RaycastResult__Array* array, app::RaycastResult value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x024387C0, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::RaycastResult__Array* array, app::RaycastResult value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_EventSystems_RaycastResult_
