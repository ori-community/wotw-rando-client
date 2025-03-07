#pragma once

#include <unordered_set>
#include <nlohmann/json.hpp>
#include <string>
#include <Randomizer/archipelago/archipelago_ids.h>

namespace randomizer::archipelago {
    struct ArchipelagoSeedGeneratorOptions {
        std::string difficulty;
        bool glitches;
        bool spawn;
        bool goal_trees;
        bool goal_quests;
        bool goal_wisps;
        bool hard;
        bool qol;
        bool hints;
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

        NLOHMANN_DEFINE_TYPE_INTRUSIVE(
            ArchipelagoSeedGeneratorOptions,
            difficulty,
            glitches,
            spawn,
            goal_trees,
            goal_quests,
            goal_wisps,
            hard,
            qol,
            hints,
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
            glades_done
        );
    };

    struct ArchipelagoSeedGeneratorOptionSourceGenerator {
        std::function<std::string()> get_name;
        std::function<std::unordered_set<std::string>(const ArchipelagoSeedGeneratorOptions& options)> collect_required_location_names;
        std::function<std::optional<std::string>(const ArchipelagoSeedGeneratorOptions& options)> generate_source;
    };

    class ArchipelagoSeedGenerator {
    public:
        ArchipelagoSeedGenerator(const nlohmann::json& slot_data);

        const std::unordered_set<std::string>& required_location_scouts();
        std::string get_seed_file() const;

    private:
        void collect_required_location_scouts();

        std::unordered_set<std::string> m_required_location_scouts;
        ArchipelagoSeedGeneratorOptions m_options{};
    };
}
