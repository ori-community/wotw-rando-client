#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(Save)
    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        core::api::game::save(false, core::api::game::SaveOptions {
            .to_disk = memory.heap.get<bool>(0),
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return memory.heap.get<bool>(0)
            ? "Save (Temporary)"
            : "Save";
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json&) {
        return std::make_unique<Save>();
    }
};
