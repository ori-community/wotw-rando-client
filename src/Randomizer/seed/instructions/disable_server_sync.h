#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(DisableServerSync)
    explicit DisableServerSync(const int group, const int member) :
        group(group),
        member(member) {}

    int group;
    int member;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) override {
        const core::api::uber_states::UntypedUberId state_id(group, member);
        multiplayer_universe().uber_state_handler().set_unsyncable(state_id, true);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) override {
        return std::format("DisableServerSync -> {}|{}", group, member);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<DisableServerSync>(j.at(0).get<int>(), j.at(1).get<int>());
    }
};
