#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator sets = {
        []() -> std::string { return "sets"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            std::vector<std::string> sets;
            if (options.free_tp) {
                sets.push_back("RemoveTPLocks");
            }
            if (options.regen) {
                sets.push_back("RemoveRegionRegen");
            }

            if (sets.empty()) {
                return std::nullopt;
            }
            std::string output = "// Sets: ";
            output += sets | std::views::join_with(std::string_view(", ")) | std::ranges::to<std::string>();
            return output;
        },
    };
}
