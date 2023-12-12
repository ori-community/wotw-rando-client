#pragma once

#include <Common/event_bus.h>

#include <Randomizer/online/multiplayer.h>
#include <Randomizer/online/network.h>
#include <Randomizer/location_data/location_collection.h>
#include <Randomizer/seed/reach_check.h>
#include <Randomizer/seed/seed.h>
#include <Randomizer/state_data/state.h>

#include <neargye/semver.hpp>

namespace randomizer {
    enum class RandomizerEvent {
        LocationCollectionLoaded,
        SeedLoaded,
        SeedLoadedPostGrant,
        ReachCheck,
    };

    void reload();

    void server_connect();
    void server_reconnect();
    void server_disconnect();

    semver::version randomizer_version();

    void queue_reach_check();
    seed::ReachCheckResult const& reach_check();

    common::TimedMultiEventBus<RandomizerEvent>& event_bus();
    std::vector<state_data::State>& state_collection();
    location_data::LocationCollection& location_collection();
    seed::Seed& game_seed();
    online::NetworkClient& network_client();
    online::MultiplayerUniverse& multiplayer_universe();
    std::shared_ptr<core::text::CompositeTextProcessor> general_text_processor();

    void queue_input_unlocked_callback(std::function<void()> const& callback);
} // namespace randomizer
