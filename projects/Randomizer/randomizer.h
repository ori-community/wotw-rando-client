#pragma once

#include <Common/event_bus.h>

#include <Randomizer/online/multiplayer.h>
#include <Randomizer/online/network.h>
#include <Randomizer/seed/seedgen_service.h>
#include <Randomizer/seed/seed.h>
#include <Randomizer/seed/seed_source.h>

#include <semver.hpp>

namespace randomizer {
    class RandoException final : public std::exception {
    public:
        RandoException(const std::string& information)
            : information(information)
        {}

        char const* what() const override {
            return information.c_str();
        }
    private:
        std::string information;
    };

    enum class RandomizerEvent {
        SeedLoaded,
        SeedLoadedPostGrant,
        ReachCheck,
        ReachableItemsChanged,
        NewGameSeedSourceUpdated,
    };

    bool timer_should_pause();
    void reread_seed_source();
    void server_connect(long multiverse_id, bool force_reconnect = false);
    void server_reconnect_current_multiverse();
    void server_disconnect();
    void load_new_game_source();

    semver::version randomizer_version();

    /**
     * If difficulty enforcement is enabled and the current
     * difficulty differs from the intended one, set the current
     * difficulty to the intended one
     */
    void check_seed_difficulty_enforcement();

    common::TimedMultiEventBus<RandomizerEvent>& event_bus();
    seed::Seed& game_seed();
    online::NetworkClient& network_client();
    online::MultiplayerUniverse& multiplayer_universe();
    seedgen_interface::SeedgenService& seedgen_service();
    std::shared_ptr<core::text::CompositeTextProcessor> general_text_processor();
    std::shared_ptr<seed::SeedSource> get_new_game_seed_source();
    void set_new_game_seed_archive(const std::shared_ptr<seed::SeedArchive>& content);
    std::optional<long> get_multiverse_id();

    void queue_input_unlocked_callback(std::function<void()> const& callback);
} // namespace randomizer
