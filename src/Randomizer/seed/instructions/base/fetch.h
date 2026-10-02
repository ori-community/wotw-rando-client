#pragma once
#include <Randomizer/seed/instruction_utils.h>

TEMPLATE_INSTRUCTION(Fetch, typename T)
    Fetch(const int group, const int member) :
                group(group),
                member(member),
                state(group, member) {}

    const int group;
    const int member;
    core::api::uber_states::UntypedUberState state;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) override {
        memory.heap.set(0, state.get<T>());
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) override {
        return std::format("Fetch {} [0]:{} = ({}|{}):{}", TypeStr<T>::VALUE, memory.heap.get<T>(0), group, member, state.get<T>());
    }
};
