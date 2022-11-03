#include <interop/csharp_bridge.h>
#include <Randomizer/macros.h>

#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/SavePedestalController.h>

namespace {
    IL2CPP_INTERCEPT(SavePedestalController, void, OnFinishedTeleportingStartAnimation, ()) {
        csharp_bridge::on_teleporting();
        next::SavePedestalController::OnFinishedTeleportingStartAnimation();
    }
} // namespace
