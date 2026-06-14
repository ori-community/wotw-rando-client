#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>
#include <Randomizer/game/teleport.h>

// TODO: - Disable target distance check
INSTRUCTION(Warp)
    explicit Warp(const bool instant) :
         instant(instant) {}

    bool instant;

    void execute(Seed& seed, SeedMemory& memory, SeedStack& stack, SeedExecutionEnvironment& environment) const override {
        if (instant) {
            game::teleportation::teleport_instantly({
                memory.floats.get(0),
                memory.floats.get(1),
                0.f,
            });
        } else {
            game::teleportation::teleport({
                memory.floats.get(0),
                memory.floats.get(1),
            });
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory, const SeedStack& stack) const override {
        return std::format("Warp -> {}, {}", memory.floats.get(0), memory.floats.get(1));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<Warp>(j.get<bool>());
    }
};
