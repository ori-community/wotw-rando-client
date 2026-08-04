#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(SetTrialHint)
    SetTrialHint(const int group, const int member) :
        group(group),
        member(member) {}

    int group;
    int member;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const auto trial_location = trials::determine_trial_location_from_trial_state(group, member);

        if (!trial_location.has_value()) {
            modloader::error("instructions", std::format("[SetTrialHint] Did not find spirit trial for state {}|{}", group, member));
            return;
        }


    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format("SetTrialHint -> {}|{} = {}", group, member, memory.heap.get<std::string>(0));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetTrialHint>(j.at(0).at(0).get<int>(), j.at(0).at(1).get<int>());
    }
};
