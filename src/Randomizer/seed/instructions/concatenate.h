#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(Concatenate)
    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        memory.heap.set<std::string>(0, memory.heap.get<std::string>(0) + memory.heap.get<std::string>(1));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format("Concatenate -> '{}' '{}'", memory.heap.get<std::string>(0), memory.heap.get<std::string>(1));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json&) {
        return std::make_unique<Concatenate>();
    }
};
