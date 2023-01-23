#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_UnityEngine_EventSystems_RaycastResult___Boxed.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/RaycastResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_UnityEngine_EventSystems_RaycastResult_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_UnityEngine_EventSystems_RaycastResult___Boxed * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_UnityEngine_EventSystems_RaycastResult___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_UnityEngine_EventSystems_RaycastResult___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001751C0, app::RaycastResult, get_Current, (app::Array_InternalEnumerator_1_UnityEngine_EventSystems_RaycastResult___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04776E78, Array_InternalEnumerator_1_UnityEngine_EventSystems_RaycastResult__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_UnityEngine_EventSystems_RaycastResult___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00175210, app::Object*, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_UnityEngine_EventSystems_RaycastResult___Boxed * this_ptr))
} // namespace app::classes::System::Array_InternalEnumerator_1_UnityEngine_EventSystems_RaycastResult_
