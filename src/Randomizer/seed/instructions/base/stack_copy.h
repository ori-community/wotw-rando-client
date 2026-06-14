#pragma once
#include <Randomizer/seed/instruction_utils.h>

TEMPLATE_INSTRUCTION(StackCopy, typename T)
    StackCopy(const std::size_t from) :
        from(from) {}

    std::size_t from;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        memory.heap.set(0, memory.stack.current_frame().get<T>(from));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format("StackCopy {} Stack {} ({})", TypeStr<T>::VALUE, from, memory.stack.current_frame().get<T>(from));
    }
};
