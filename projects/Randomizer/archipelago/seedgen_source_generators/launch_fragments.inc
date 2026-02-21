#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator launch_fragments = {
        []() -> std::string { return "launch_fragments"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.launch_frag) {
                return std::nullopt;
            }
            return std::format(R"WOTWR(
26|1={}|2|8|mute
9|999=200|6|*Launch Fragments* [if([state_int(26|1)] < {}, ($(26|1)/{}), $($(26|1)/{}))]
9|0=10|4|30|0|$[(9|999=200)]\n
)WOTWR", options.launch_frag, options.launch_frag, options.launch_frag, options.launch_frag);
        },
    };
}
