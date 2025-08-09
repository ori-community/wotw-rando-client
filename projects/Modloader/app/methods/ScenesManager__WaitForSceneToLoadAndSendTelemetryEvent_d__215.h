#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215.h>

namespace app::classes::ScenesManager__WaitForSceneToLoadAndSendTelemetryEvent_d__215 {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215* this_ptr, int32_t __1__state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IDisposable_Dispose, app::ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01052CA0, bool, MoveNext, app::ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FB930,
        app::Object*,
        IEnumerator_object__get_Current,
        app::ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x01052D30, void, IEnumerator_Reset, app::ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, IEnumerator_get_Current, app::ScenesManager_WaitForSceneToLoadAndSendTelemetryEvent_d_215* this_ptr)
} // namespace app::classes::ScenesManager__WaitForSceneToLoadAndSendTelemetryEvent_d__215
