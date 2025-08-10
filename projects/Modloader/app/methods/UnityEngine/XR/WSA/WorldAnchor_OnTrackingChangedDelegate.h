#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/WorldAnchor.h>
#include <Modloader/app/structs/WorldAnchor_OnTrackingChangedDelegate.h>

namespace app::classes::UnityEngine::XR::WSA::WorldAnchor_OnTrackingChangedDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::WorldAnchor_OnTrackingChangedDelegate* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01C712A0, void, Invoke, app::WorldAnchor_OnTrackingChangedDelegate* this_ptr, app::WorldAnchor* world_anchor, bool located)
    IL2CPP_REGISTER_METHOD(
        0x031C37F0,
        app::IAsyncResult*,
        BeginInvoke,
        app::WorldAnchor_OnTrackingChangedDelegate* this_ptr,
        app::WorldAnchor* world_anchor,
        bool located,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::WorldAnchor_OnTrackingChangedDelegate* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::UnityEngine::XR::WSA::WorldAnchor_OnTrackingChangedDelegate
