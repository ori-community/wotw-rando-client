#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator flags = {
        []() -> std::string { return "flags"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            std::vector<std::string> flags;

            flags.push_back(options.difficulty);

            if (options.glitches) {
                flags.push_back("Glitches");
            }

            if (options.goal_trees) {
                flags.push_back("All Trees");
            }

            if (options.goal_wisps) {
                flags.push_back("All Wisps");
            }

            if (options.goal_quests) {
                flags.push_back("All Quests");
            }

            if (options.better_wellspring) {
                flags.push_back("Better Wellspring");
            }

            if (options.glades_done) {
                flags.push_back("Glades Done");
            }

            if (options.glitches) {
                flags.push_back("Glitches");
            }

            if (options.no_quests) {
                flags.push_back("No Quests");
            }

            if (options.no_hearts) {
                flags.push_back("No Willow Hearts");
            }

            if (options.no_trials) {
                flags.push_back("No Trials");
            }

            if (options.no_ks) {
                flags.push_back("No Keystone Doors");
            }

            if (options.open_mode) {
                flags.push_back("Open Mode");
            }

            if (options.no_rain) {
                flags.push_back("No Rain");
            }

            if (options.skip_arena) {
                flags.push_back("No Fight Arenas");
            }

            if (options.skip_boss) {
                flags.push_back("No Bosses");
            }

            if (options.skip_demi_boss) {
                flags.push_back("No Demi Bosses");
            }

            if (options.skip_shrine) {
                flags.push_back("No Combar Shrines");
            }

            std::string result = "Flags: ";
            for (int i = 0; i < flags.size(); ++i) {
                if (i != 0) {
                    result += ", ";
                }

                result += flags.at(i);
            }

            return result;
        },
    };
}
