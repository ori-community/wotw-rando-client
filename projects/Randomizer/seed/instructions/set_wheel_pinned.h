#pragma once
#include <Randomizer/features/wheel.h>
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(SetWheelPinned)
    SetWheelPinned(const int wheel) :
        wheel(wheel) {}

    int wheel;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        features::wheel::set_wheel_sticky(wheel, memory.booleans.get(0));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("SetWheelPinned -> Wheel {} = ", wheel, memory.booleans.get(0) ? "true" : "false");
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetWheelPinned>(j.get<int>());
    }
};
