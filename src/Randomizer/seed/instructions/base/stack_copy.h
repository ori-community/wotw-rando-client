#pragma once
#include <Randomizer/seed/instruction_utils.h>

TEMPLATE_INSTRUCTION(StackCopy, typename T)
    StackCopy(const std::size_t from) :
        from(from) {}

    std::size_t from;

    void execute(Seed& seed, SeedMemory& memory, SeedStack& stack, SeedExecutionEnvironment& environment) const override { memory.set(0, stack.get_current_frame().get<T>(from)); }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory, const SeedStack& stack) const override {
        return std::format("StackCopy {} Stack {} ({})", TypeStr<T>::VALUE, from, stack.get_current_frame().get<T>(from));
    }
};
