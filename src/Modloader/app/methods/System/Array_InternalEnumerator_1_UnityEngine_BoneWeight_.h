#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_UnityEngine_BoneWeight___Boxed.h>
#include <Modloader/app/structs/BoneWeight.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_UnityEngine_BoneWeight_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, app::Array_InternalEnumerator_1_UnityEngine_BoneWeight___Boxed* this_ptr, app::Array* array)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::Array_InternalEnumerator_1_UnityEngine_BoneWeight___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, app::Array_InternalEnumerator_1_UnityEngine_BoneWeight___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00174AB0, app::BoneWeight, get_Current, app::Array_InternalEnumerator_1_UnityEngine_BoneWeight___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, app::Array_InternalEnumerator_1_UnityEngine_BoneWeight___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00174AE0, app::Object*, IEnumerator_get_Current, app::Array_InternalEnumerator_1_UnityEngine_BoneWeight___Boxed* this_ptr)
} // namespace app::classes::System::Array_InternalEnumerator_1_UnityEngine_BoneWeight_
