#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>
#include <Randomizer/game/teleport.h>

// TODO: - Disable target distance check
INSTRUCTION(Warp)
    explicit Warp(const bool instant) :
         instant(instant) {}

    bool instant;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        if (instant) {
            game::teleportation::teleport_instantly({
                memory.heap.get<float>(0),
                memory.heap.get<float>(1),
                0.f,
            });
        } else {
            game::teleportation::teleport({
                memory.heap.get<float>(0),
                memory.heap.get<float>(1),
            });
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format("Warp -> {}, {}", memory.heap.get<float>(0), memory.heap.get<float>(1));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<Warp>(j.get<bool>());
    }
};
