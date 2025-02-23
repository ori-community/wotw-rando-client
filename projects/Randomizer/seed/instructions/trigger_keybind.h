#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(TriggerKeybind)
     explicit TriggerKeybind(const Action action) :
        action(action) {}

    Action action;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        input::set_action(action, true);
        input::set_action(action, false);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("TriggerKeybind -> {}", static_cast<int>(action));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<TriggerKeybind>(j.get<Action>());
    }
};
