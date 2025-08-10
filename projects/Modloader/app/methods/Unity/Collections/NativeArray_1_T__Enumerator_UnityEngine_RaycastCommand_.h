#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NativeArray_1_T_Enumerator_UnityEngine_RaycastCommand___Boxed.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_RaycastCommand_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RaycastCommand.h>

namespace app::classes::Unity::Collections::NativeArray_1_T__Enumerator_UnityEngine_RaycastCommand_ {
    IL2CPP_REGISTER_METHOD(
        0x001DF020,
        void,
        ctor,
        app::NativeArray_1_T_Enumerator_UnityEngine_RaycastCommand___Boxed* this_ptr,
        app::NativeArray_1_UnityEngine_RaycastCommand_* array
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::NativeArray_1_T_Enumerator_UnityEngine_RaycastCommand___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DF030, bool, MoveNext, app::NativeArray_1_T_Enumerator_UnityEngine_RaycastCommand___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DF040, void, Reset, app::NativeArray_1_T_Enumerator_UnityEngine_RaycastCommand___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DF4D0, app::RaycastCommand, get_Current, app::NativeArray_1_T_Enumerator_UnityEngine_RaycastCommand___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x001DF500, app::Object*, IEnumerator_get_Current, app::NativeArray_1_T_Enumerator_UnityEngine_RaycastCommand___Boxed* this_ptr)
} // namespace app::classes::Unity::Collections::NativeArray_1_T__Enumerator_UnityEngine_RaycastCommand_
