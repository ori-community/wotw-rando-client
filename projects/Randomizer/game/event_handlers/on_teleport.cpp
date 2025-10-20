#include <Randomizer/randomizer.h>

#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/interception_macros.h>

#include <Core/api/game/game.h>

#include "Randomizer/uber_states/uber_state_initialization.h"

namespace {
    IL2CPP_INTERCEPT_WITH_ORDER(100, void, SavePedestalController, BeginTeleportation, app::Vector2 position) {
        randomizer::uber_states::readonly::player_is_teleporting().set(true);
        next::SavePedestalController::BeginTeleportation(position);
    }

    IL2CPP_INTERCEPT(void, SavePedestalController, OnFadedToBlack, app::SavePedestalController* this_ptr) {
        core::api::game::event_bus().trigger_event(GameEvent::Teleport, EventTiming::Before);

        next::SavePedestalController::OnFadedToBlack(this_ptr);

        randomizer::uber_states::readonly::player_is_teleporting().set(false);
        core::api::game::event_bus().trigger_event(GameEvent::Teleport, EventTiming::After);
        Network::Packet packet;
        packet.set_id(Network::Packet_PacketID_NotifyTeleport);
        randomizer::network_client().websocket_send(packet);
    }
} // namespace
