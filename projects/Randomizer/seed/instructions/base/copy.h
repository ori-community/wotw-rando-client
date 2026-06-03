#pragma once
#include <Randomizer/seed/instruction_utils.h>

TEMPLATE_INSTRUCTION(Copy, typename T)
    Copy(const MemoryAddress& from, const MemoryAddress& to) :
        from(from),
        to(to) {}

    MemoryAddress from;
    MemoryAddress to;

    void execute(Seed& seed, HeapMemory& memory, StackMemory& stack, SeedExecutionEnvironment& environment) const override {
        memory.set(to, memory.get<T>(from));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const HeapMemory& memory, const StackMemory& stack) const override {
        return std::format("Copy {} [{}]:{} = [{}]:{}", TypeStr<T>::VALUE, to, memory.get<T>(to), from, memory.get<T>(from));
    }
};
