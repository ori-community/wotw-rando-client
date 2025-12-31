#pragma once

#include <unordered_set>
#include <nlohmann/json.hpp>
#include <string>
#include <Randomizer/archipelago/archipelago_ids.h>

namespace randomizer::archipelago {

    // Flags used with location_flags, to see which sets of locations are active
    constexpr int FLAG_QUESTS = 0b000001;
    constexpr int FLAG_HAND_TO_HAND = 0b000010;
    constexpr int FLAG_REBUILD = 0b000100;
    constexpr int FLAG_TRIALS = 0b001000;
    constexpr int FLAG_QOL = 0b010000;
    constexpr int FLAG_MAPS = 0b100000;

    struct ArchipelagoSeedGeneratorOptions {
        std::string difficulty;
        bool glitches;
        float spawn_x;
        float spawn_y;
        std::string spawn_anchor;
        bool goal_trees;
        bool goal_quests;
        bool goal_wisps;
        bool goal_relics;
        bool hard;
        bool qol;
        bool shrine_hints;
        bool trial_hints;
        bool zone_hints;
        bool knowledge_hints;
        bool better_spawn;
        bool better_wellspring;
        bool no_rain;
        bool skip_boss;
        bool skip_demi_boss;
        bool skip_shrine;
        bool skip_arena;
        bool no_trials;
        bool no_hearts;
        bool no_hand_quest;
        bool no_quests;
        bool no_ks;
        bool open_mode;
        bool glades_done;
        std::unordered_map<std::string, std::string> shop_icons;
        bool bonus;
        bool door_rando;
        std::vector<int> door_connections;  // Door connections (index → door ID)
        std::vector<std::pair<int, ids::archipelago_id_t>> relic_locs;  // Relic locations (GameArea, location ID)
        int death_link;
        int ap_version;
        int location_flags;

        NLOHMANN_DEFINE_TYPE_INTRUSIVE_WITH_DEFAULT(
            ArchipelagoSeedGeneratorOptions,
            difficulty,
            glitches,
            spawn_x,
            spawn_y,
            spawn_anchor,
            goal_trees,
            goal_quests,
            goal_wisps,
            goal_relics,
            hard,
            qol,
            shrine_hints,
            trial_hints,
            zone_hints,
            knowledge_hints,
            better_spawn,
            better_wellspring,
            no_rain,
            skip_boss,
            skip_demi_boss,
            skip_shrine,
            skip_arena,
            no_trials,
            no_hearts,
            no_hand_quest,
            no_quests,
            no_ks,
            open_mode,
            glades_done,
            shop_icons,
            bonus,
            door_rando,
            door_connections,
            relic_locs,
            death_link,
            ap_version,
            location_flags
        );
    };

    struct ArchipelagoSeedGeneratorOptionSourceGenerator {
        std::function<std::string()> get_name;
        std::function<std::unordered_set<std::string>(const ArchipelagoSeedGeneratorOptions& options)> collect_required_location_names;
        std::function<std::optional<std::string>(const ArchipelagoSeedGeneratorOptions& options)> generate_source;
    };

    class ArchipelagoSeedGenerator {
    public:
        explicit ArchipelagoSeedGenerator(const ArchipelagoSeedGeneratorOptions& options);

        const std::unordered_set<std::string>& required_location_scouts();
        const ArchipelagoSeedGeneratorOptions& get_options();
        std::string get_seed_file() const;

    private:
        void collect_required_location_scouts();

        std::unordered_set<std::string> m_required_location_scouts;  // Names of locations that need to be scouted
        ArchipelagoSeedGeneratorOptions m_options;
    };
}
