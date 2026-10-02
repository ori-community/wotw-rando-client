#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(DefineTimer)
    explicit DefineTimer(const core::api::uber_states::UntypedUberId& toggle, const core::api::uber_states::UntypedUberId& value) :
                toggle(toggle),
                value(value) {}

    core::api::uber_states::UntypedUberId toggle;
    core::api::uber_states::UntypedUberId value;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) override {
        environment.add_timer({
            core::api::uber_states::UntypedUberState(toggle),
            core::api::uber_states::UntypedUberState(value)
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) override {
        return std::format("DefineTimer -> toggle({}|{}) value({}|{})", toggle.group, toggle.member, value.group, value.member);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        core::api::uber_states::UntypedUberId toggle(j.at(0).at(0).get<int>(), j.at(0).at(1).get<int>());
        core::api::uber_states::UntypedUberId value(j.at(1).at(0).get<int>(), j.at(1).at(1).get<int>());
        return std::make_unique<DefineTimer>(toggle, value);
    }
};
