#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ScenesManager_HandleSceneLoadedEvent_d_216.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ScenesManager__HandleSceneLoadedEvent_d__216 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::ScenesManager_HandleSceneLoadedEvent_d_216 * this_ptr, int32_t __1__state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, (app::ScenesManager_HandleSceneLoadedEvent_d_216 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01052860, bool, MoveNext, (app::ScenesManager_HandleSceneLoadedEvent_d_216 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_object__get_Current, (app::ScenesManager_HandleSceneLoadedEvent_d_216 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01052900, void, IEnumerator_Reset, (app::ScenesManager_HandleSceneLoadedEvent_d_216 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E188, ScenesManager_HandleSceneLoadedEvent_d_216_System_Collections_IEnumerator_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, (app::ScenesManager_HandleSceneLoadedEvent_d_216 * this_ptr))
} // namespace app::classes::ScenesManager__HandleSceneLoadedEvent_d__216
