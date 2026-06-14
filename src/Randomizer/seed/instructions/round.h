#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(Round)
    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        memory.heap.set<float>(0, std::round(memory.heap.get<float>(0)));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format(
            "Round {:.3} -> {:.0}", TypeStr<float>::VALUE, TypeStr<std::string>::VALUE, memory.heap.get<float>(0), std::round(memory.heap.get<float>(0))
        );
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json&) {
        return std::make_unique<Round>();
    }
};
