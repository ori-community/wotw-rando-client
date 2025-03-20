#pragma once
#include <Randomizer/seed/instruction_utils.h>

TEMPLATE_INSTRUCTION(Cast, typename F, typename T)
    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        memory.set(0, static_cast<T>(memory.get<F>(0)));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("Cast {} to {} -> [0]:{} = [0]:{}", TypeStr<F>::VALUE, TypeStr<T>::VALUE, memory.get<T>(0), memory.get<F>(0));
    }
};
