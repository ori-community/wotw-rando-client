#pragma once
#include <Randomizer/seed/instruction_utils.h>

TEMPLATE_INSTRUCTION(Store, typename T)
    Store(const int group, const int member, const bool trigger_events) :
                group(group),
                member(member),
                trigger_events(trigger_events),
                state(group, member) {}

    const int group;
    const int member;
    const bool trigger_events;
    const core::api::uber_states::UberState state;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const auto grant_fn = [&] {
            state.set(memory.get<T>(0));
        };

        if (trigger_events) {
            grant_fn();
        } else {
            environment.execute_without_grants(grant_fn);
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("Store {} {}|{} (trigger_events: {}) = [0]:{}", TypeStr<T>::VALUE, group, member, trigger_events, memory.get<T>(0));
    }
};
