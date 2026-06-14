#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(StackPush)
    void execute(Seed& seed, SeedMemory& memory, SeedStack& stack, SeedExecutionEnvironment& environment) const override {
        stack.push_frame();
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory, const SeedStack& stack) const override {
        return std::format("StackPush");
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json&) {
        return std::make_unique<StackPush>();
    }
};
