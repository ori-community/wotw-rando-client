#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(StringContains)
    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) override {
        memory.heap.set<bool>(0, memory.heap.get<std::string>(0).contains(memory.heap.get<std::string>(1)));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) override {
        return std::format("StringContains '{}' contains '{}'", memory.heap.get<std::string>(0), memory.heap.get<std::string>(1));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json&) {
        return std::make_unique<StringContains>();
    }
};
