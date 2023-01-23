#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WorldAnchor.h>

namespace app::classes::UnityEngine::XR::WSA::WorldAnchor {
    IL2CPP_REGISTER_METHOD(0x031C3710, void, Internal_TriggerEventOnTrackingLost, (app::WorldAnchor * world_anchor, bool located))
}
