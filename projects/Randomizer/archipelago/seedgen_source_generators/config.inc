#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator config = {
        []() -> std::string { return "config"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            std::string config_line = R"config(// Config: {"seed":"0","worldSettings":[{"spawn":"Random","difficulty":")config";
            config_line += options.difficulty;
            config_line += R"config(","tricks":[)config";

            if (options.glitches) {
                config_line += R"tricks("SwordSentryJump","DashBashChain","SpearJump","WallHammerJump","AerialHammerJump","SentryRedirect","GrenadeJump","FlashSwap","RemoveKillPlane","HammerBreak","HammerSentryJump","LaunchBashChain","GlideBashChain","GroundedHammerJump","GlideHammerJump","PauseFloat","SwordJump","BlazeSwap","LaunchSwap","SpearBreak","ShurikenBreak","Unpopular","DoubleJumpBashChain","HammerExtension","CoyoteHammerJump","GlideJump","GrenadeRedirect","WaveDash","SentrySwap","SentryBurn","SentryBreak")tricks";
            }

            config_line += R"config(],"hard":)config";
            config_line += options.hard ? "true" : "false";
            config_line += R"config(,"randomizeDoors":)config";
            config_line += options.door_rando ? "true" : "false";
            config_line += R"config(,"goals":[],"headers":[],"headerConfig":[],"inlineHeaders":[]}],"disableLogicFilter":false,"online":false,"createGame":"None"})config";

            return config_line;
        },
    };
}
