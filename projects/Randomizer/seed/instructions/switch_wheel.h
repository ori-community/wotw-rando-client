#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(SwitchWheel)
    SwitchWheel(const int wheel) :
        wheel(wheel) {}

    int wheel;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        features::wheel::set_active_wheel(wheel);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("SwitchWheel -> Wheel {}", wheel);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SwitchWheel>(j.get<int>());
    }
};
