#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(SaveAt)
    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        core::api::game::save(false, core::api::game::SaveOptions {
            .to_disk = memory.heap.get<bool>(0),
            .override_position = std::make_optional<app::Vector2>(
                memory.heap.get<float>(0),
                memory.heap.get<float>(1)
            ),
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return memory.heap.get<bool>(0)
            ? std::format("SaveAt (Temporary) -> {}, {}", memory.heap.get<float>(0), memory.heap.get<float>(1))
            : std::format("SaveAt -> {}, {}", memory.heap.get<float>(0), memory.heap.get<float>(1));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json&) {
        return std::make_unique<SaveAt>();
    }
};
