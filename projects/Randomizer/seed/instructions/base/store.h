#pragma once
#include <Randomizer/seed/instruction_utils.h>

TEMPLATE_INSTRUCTION(Store, typename T)
    Store(const int group, const int member, const bool trigger_events) :
                group(group),
                member(member),
                trigger_events(trigger_events) {}

    int group;
    int member;
    bool trigger_events;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        core::api::uber_states::UberState state(group, member);
        modloader::ScopedSetter setter(environment.prevent_grant, !trigger_events);
        state.set(memory.get<T>(0));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("Store ({}) -> {}|{} (trigger_events: {})", TypeStr<T>::VALUE, group, member, trigger_events);
    }
};
