#include <interop/csharp_bridge.h>
#include <macros.h>

#include <Il2CppModLoader/interception_macros.h>

namespace {
    STATIC_IL2CPP_INTERCEPT(, SavePedestalController, void, OnFinishedTeleportingStartAnimation, ()) {
        csharp_bridge::on_teleporting();
        SavePedestalController::OnFinishedTeleportingStartAnimation();
    }
} // namespace
