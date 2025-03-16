#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>
#include <Modloader/app/methods/SavePedestalController.h>

// TODO: - Allow instantaneous teleportation
//       - Disable target distance check
INSTRUCTION(Warp)
    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        SavePedestalController::BeginTeleportation({
            memory.floats.get(0),
            memory.floats.get(1),
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("Warp -> {}, {}", memory.floats.get(0), memory.floats.get(1));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json&) {
        return std::make_unique<Warp>();
    }
};
