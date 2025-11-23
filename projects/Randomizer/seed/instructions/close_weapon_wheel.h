#pragma once
#include <Randomizer/features/wheel.h>
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(CloseWeaponWheel)
    explicit CloseWeaponWheel() = default;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        randomizer::features::wheel::force_hide_wheel();
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return "CloseWeaponWheel";
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<CloseWeaponWheel>();
    }
};
