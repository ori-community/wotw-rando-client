#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::XR::WSA::WorldAnchor {
    IL2CPP_REGISTER_METHOD(0x031C3710, void, Internal_TriggerEventOnTrackingLost, (app::WorldAnchor * world_anchor, bool located))
}
