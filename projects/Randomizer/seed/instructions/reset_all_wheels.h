#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(ResetAllWheels)
    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        features::wheel::clear_wheels();
        features::wheel::initialize_default_wheel();
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return "ResetAllWheels";
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json&) {
        return std::make_unique<ResetAllWheels>();
    }
};
