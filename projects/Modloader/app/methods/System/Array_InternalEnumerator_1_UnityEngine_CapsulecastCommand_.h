#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_UnityEngine_CapsulecastCommand___Boxed.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/CapsulecastCommand.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Array_InternalEnumerator_1_UnityEngine_CapsulecastCommand_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor, (app::Array_InternalEnumerator_1_UnityEngine_CapsulecastCommand___Boxed * this_ptr, app::Array* array))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::Array_InternalEnumerator_1_UnityEngine_CapsulecastCommand___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext, (app::Array_InternalEnumerator_1_UnityEngine_CapsulecastCommand___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00174C70, app::CapsulecastCommand, get_Current, (app::Array_InternalEnumerator_1_UnityEngine_CapsulecastCommand___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04779568, Array_InternalEnumerator_1_UnityEngine_CapsulecastCommand__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset, (app::Array_InternalEnumerator_1_UnityEngine_CapsulecastCommand___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00174CB0, app::Object*, IEnumerator_get_Current, (app::Array_InternalEnumerator_1_UnityEngine_CapsulecastCommand___Boxed * this_ptr))
} // namespace app::classes::System::Array_InternalEnumerator_1_UnityEngine_CapsulecastCommand_
