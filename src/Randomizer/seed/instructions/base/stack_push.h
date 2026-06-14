#pragma once
#include <Randomizer/seed/instruction_utils.h>

#include "stack_copy.h"

TEMPLATE_INSTRUCTION(StackPush, typename T)
    StackPush() {}

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        memory.stack.current_frame().push(memory.heap.get<T>(0));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format("StackPush {}", TypeStr<T>::VALUE);
    }
};
