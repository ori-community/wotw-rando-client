#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SendOrPostCallback.h>
#include <Modloader/app/structs/UnitySynchronizationContext_WorkRequest__Boxed.h>

namespace app::classes::UnityEngine::UnitySynchronizationContext_WorkRequest {
    IL2CPP_REGISTER_METHOD(
        0x0013C860,
        void,
        ctor,
        app::UnitySynchronizationContext_WorkRequest__Boxed* this_ptr,
        app::SendOrPostCallback* callback,
        app::Object* state,
        app::ManualResetEvent* wait_handle
    )
    IL2CPP_REGISTER_METHOD(0x00229330, void, Invoke, app::UnitySynchronizationContext_WorkRequest__Boxed* this_ptr)
} // namespace app::classes::UnityEngine::UnitySynchronizationContext_WorkRequest
