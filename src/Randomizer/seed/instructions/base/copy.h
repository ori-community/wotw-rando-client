#pragma once
#include <Randomizer/seed/instruction_utils.h>

TEMPLATE_INSTRUCTION(Copy, typename T)
    Copy(const std::size_t from, const std::size_t to) :
        from(from),
        to(to) {}

    std::size_t from;
    std::size_t to;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override { memory.heap.set(to, memory.heap.get<T>(from)); }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format("Copy {} [{}]:{} = [{}]:{}", TypeStr<T>::VALUE, to, memory.heap.get<T>(to), from, memory.heap.get<T>(from));
    }
};
