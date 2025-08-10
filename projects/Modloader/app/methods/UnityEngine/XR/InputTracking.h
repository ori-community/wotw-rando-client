#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InputTracking_TrackingStateEventType__Enum.h>
#include <Modloader/app/structs/XRNode__Enum.h>

namespace app::classes::UnityEngine::XR::InputTracking {
    IL2CPP_REGISTER_METHOD(
        0x03177590,
        void,
        InvokeTrackingEvent,
        app::InputTracking_TrackingStateEventType__Enum event_type,
        app::XRNode__Enum node_type,
        int64_t unique_i_d,
        bool tracked
    )
    IL2CPP_REGISTER_METHOD(0x03177810, void, cctor, )
} // namespace app::classes::UnityEngine::XR::InputTracking
