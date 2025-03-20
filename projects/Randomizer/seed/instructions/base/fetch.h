#pragma once
#include <Randomizer/seed/instruction_utils.h>

TEMPLATE_INSTRUCTION(Fetch, typename T)
    Fetch(const int group, const int member) :
                group(group),
                member(member) {}

    int group;
    int member;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const core::api::uber_states::UberState state(group, member);
        memory.set(0, state.get<T>());
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        const core::api::uber_states::UberState state(group, member);
        return std::format("Fetch {} [0]:{} = ({}|{}):{}", TypeStr<T>::VALUE, memory.get<T>(0), group, member, state.get<T>());
    }
};
