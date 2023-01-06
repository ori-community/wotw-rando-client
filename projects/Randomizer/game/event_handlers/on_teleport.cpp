#include <interop/csharp_bridge.h>

#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/SavePedestalController.h>

#include <Core/api/game/game.h>

namespace {
    IL2CPP_INTERCEPT(SavePedestalController, void, OnFinishedTeleportingStartAnimation, ()) {
        csharp_bridge::on_teleporting();
        game::event_bus().trigger_event(GameEvent::Teleport);
        next::SavePedestalController::OnFinishedTeleportingStartAnimation();
    }
} // namespace
