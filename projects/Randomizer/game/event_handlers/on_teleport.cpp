#include <randomizer.h>

#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/interception_macros.h>

#include <Core/api/game/game.h>

namespace {
    IL2CPP_INTERCEPT(SavePedestalController, void, BeginTeleportation, (app::Vector2 position)) {
        core::api::game::event_bus().trigger_event(GameEvent::Teleport, EventTiming::Before);
        next::SavePedestalController::BeginTeleportation(position);
    }

    IL2CPP_INTERCEPT(SavePedestalController, void, OnFinishedTeleportingStartAnimation, ()) {
        core::api::game::event_bus().trigger_event(GameEvent::Teleport, EventTiming::After);

        Network::Packet packet;
        packet.set_id(Network::Packet_PacketID_NotifyTeleport);
        randomizer::network_client().websocket_send(packet);
        auto state = core::api::uber_states::UberState(UberStateGroup::GameState, 20);
        state.set(1);
        state.set(0);

        next::SavePedestalController::OnFinishedTeleportingStartAnimation();
    }
} // namespace
