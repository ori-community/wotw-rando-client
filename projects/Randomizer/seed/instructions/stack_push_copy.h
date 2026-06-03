#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(StackPush)
    void execute(Seed& seed, HeapMemory& memory, StackMemory& stack, SeedExecutionEnvironment& environment) const override {
        stack.push_frame();
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const HeapMemory& memory, const StackMemory& stack) const override {
        return std::format("StackPush");
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json&) {
        return std::make_unique<StackPush>();
    }
};
