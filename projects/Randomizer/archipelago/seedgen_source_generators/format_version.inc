#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator format_version = {
        []() -> std::string { return "format_version"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            return std::format("// Format Version: 1.0.0");
        },
    };
}
