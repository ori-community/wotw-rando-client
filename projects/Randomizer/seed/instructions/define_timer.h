#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(DefineTimer)
    explicit DefineTimer(const core::api::uber_states::UberState& toggle, const core::api::uber_states::UberState& value) :
                toggle(toggle),
                value(value) {}

    core::api::uber_states::UberState toggle;
    core::api::uber_states::UberState value;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        environment.add_timer({toggle, value});
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("DefineTimer -> toggle({}) value({})", toggle.to_string(), value.to_string());
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        core::api::uber_states::UberState toggle(j.at(0).at("group").get<int>(), j.at(0).at("member").get<int>());
        core::api::uber_states::UberState value(j.at(1).at("group").get<int>(), j.at(1).at("member").get<int>());
        return std::make_unique<DefineTimer>(toggle, value);
    }
};
