#include <interop/csharp_bridge.h>
#include <macros.h>

#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/SavePedestalController.h>

namespace {
    IL2CPP_INTERCEPT(SavePedestalController, void, OnFinishedTeleportingStartAnimation, ()) {
        csharp_bridge::on_teleporting();
        next::SavePedestalController::OnFinishedTeleportingStartAnimation();
    }
} // namespace
