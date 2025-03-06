#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(TemporarySave)
    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        core::api::game::temporary_save();
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return "TemporarySave";
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json&) {
        return std::make_unique<TemporarySave>();
    }
};
