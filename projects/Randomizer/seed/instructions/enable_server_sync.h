#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(EnableServerSync)
    explicit EnableServerSync(const int group, const int member) :
        group(group),
        member(member) {}

    int group;
    int member;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const core::api::uber_states::UberState state(group, member);
        multiplayer_universe().uber_state_handler().set_unsyncable(state, false);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("EnableServerSync -> {}|{}", group, member);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<EnableServerSync>(j.at(0).get<int>(), j.at(1).get<int>());
    }
};
