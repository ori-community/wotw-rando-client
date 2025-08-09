#include <Randomizer/randomizer.h>

#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/interception_macros.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>

namespace {
    IL2CPP_INTERCEPT(void, SavePedestalController, BeginTeleportation, app::Vector2 position) {
        core::api::game::event_bus().trigger_event(GameEvent::Teleport, EventTiming::Before);
        next::SavePedestalController::BeginTeleportation(position);
    }

    IL2CPP_INTERCEPT(void, SavePedestalController, OnFadedToBlack, app::SavePedestalController* this_ptr) {
        // We want the grant to happen before the checkpoint.
        const auto state = core::api::uber_states::UberState(UberStateGroup::RandoEvents, 20);
        state.set(1);
        state.set(0);

        next::SavePedestalController::OnFadedToBlack(this_ptr);
    }

    IL2CPP_INTERCEPT(void, SavePedestalController, OnFinishedTeleportingStartAnimation) {
        core::api::game::event_bus().trigger_event(GameEvent::Teleport, EventTiming::After);

        Network::Packet packet;
        packet.set_id(Network::Packet_PacketID_NotifyTeleport);
        randomizer::network_client().websocket_send(packet);
        next::SavePedestalController::OnFinishedTeleportingStartAnimation();
    }
} // namespace
