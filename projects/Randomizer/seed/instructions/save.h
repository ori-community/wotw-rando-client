#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(Save)
    void execute(Seed& seed, HeapMemory& memory, StackMemory& stack, SeedExecutionEnvironment& environment) const override {
        core::api::game::save(false, core::api::game::SaveOptions {
            .to_disk = memory.booleans.get(0),
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const HeapMemory& memory, const StackMemory& stack) const override {
        return memory.booleans.get(0)
            ? "Save (Temporary)"
            : "Save";
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json&) {
        return std::make_unique<Save>();
    }
};
