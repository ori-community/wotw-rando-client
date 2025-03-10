#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(SaveAt)
    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        core::api::game::save(false, core::api::game::SaveOptions {
            .to_disk = memory.booleans.get(0),
            .override_position = std::make_optional<app::Vector2>(
                memory.floats.get(0),
                memory.floats.get(1)
            ),
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return memory.booleans.get(0)
            ? std::format("SaveAt (Temporary) -> {}, {}", memory.floats.get(0), memory.floats.get(1))
            : std::format("SaveAt -> {}, {}", memory.floats.get(0), memory.floats.get(1));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json&) {
        return std::make_unique<SaveAt>();
    }
};
