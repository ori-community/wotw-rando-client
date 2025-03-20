#pragma once
#include <Randomizer/seed/instruction_utils.h>

TEMPLATE_INSTRUCTION(Copy, typename T)
    Copy(const std::size_t from, const std::size_t to) :
        from(from),
        to(to) {}

    std::size_t from;
    std::size_t to;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override { memory.set(to, memory.get<T>(from)); }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("Copy {} [{}]:{} = [{}]:{}", TypeStr<T>::VALUE, to, memory.get<T>(to), from, memory.get<T>(from));
    }
};
