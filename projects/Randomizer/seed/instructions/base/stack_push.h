#pragma once
#include <Randomizer/seed/instruction_utils.h>

#include "stack_copy.h"

TEMPLATE_INSTRUCTION(StackPush, typename T)
    StackPush() {}

    void execute(Seed& seed, HeapMemory& memory, StackMemory& stack, SeedExecutionEnvironment& environment) const override { stack.get_current_frame().push(memory.get<T>(0)); }

    [[nodiscard]] std::string to_string(const Seed& seed, const HeapMemory& memory, const StackMemory& stack) const override {
        return std::format("StackPush {}", TypeStr<T>::VALUE);
    }
};
