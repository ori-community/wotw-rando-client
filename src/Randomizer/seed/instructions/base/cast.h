#pragma once
#include <Randomizer/seed/instruction_utils.h>

TEMPLATE_INSTRUCTION(Cast, typename F, typename T)
    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        memory.heap.set(0, static_cast<T>(memory.heap.get<F>(0)));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format("Cast {} to {} -> [0]:{} = [0]:{}", TypeStr<F>::VALUE, TypeStr<T>::VALUE, memory.heap.get<T>(0), memory.heap.get<F>(0));
    }
};
