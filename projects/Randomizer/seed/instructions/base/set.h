#pragma once
#include <Randomizer/seed/instruction_utils.h>

TEMPLATE_INSTRUCTION(Set, typename T)
    explicit Set(const T value) :
        value(value) {}

    T value;

    void execute(Seed& seed, HeapMemory& memory, StackMemory& stack, SeedExecutionEnvironment& environment) const override { memory.set(0, value); }

    [[nodiscard]] std::string to_string(const Seed& seed, const HeapMemory& memory, const StackMemory& stack) const override {
        return std::format("Set {} [0]:{} = {}", TypeStr<T>::VALUE, memory.get<T>(0), value);
    }
};
