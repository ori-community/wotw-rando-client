#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(BooleanToString)
    void execute(Seed& seed, HeapMemory& memory, StackMemory& stack, SeedExecutionEnvironment& environment) const override {
        memory.set<std::string>(0, memory.get<bool>(0) ? "true" : "false");
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const HeapMemory& memory, const StackMemory& stack) const override {
        return std::format("BooleanToString -> {}", memory.get<bool>(0));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<BooleanToString>();
    }
};
