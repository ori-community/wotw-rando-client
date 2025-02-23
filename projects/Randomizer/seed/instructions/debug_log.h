#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(DebugLog)
    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        modloader::info("seed_log", memory.strings.get(0));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("DebugLog '{}'", memory.strings.get(0));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json&) {
        return std::make_unique<DebugLog>();
    }
};
