#pragma once
#include <Randomizer/seed/instruction_utils.h>

TEMPLATE_INSTRUCTION(Set, typename T)
    explicit Set(const T value) :
        value(value) {}

    T value;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override { memory.heap.set(0, value); }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format("Set {} [0]:{} = {}", TypeStr<T>::VALUE, memory.heap.get<T>(0), value);
    }
};
