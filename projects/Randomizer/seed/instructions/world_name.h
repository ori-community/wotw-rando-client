#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(WorldName)
    explicit WorldName(const int id) :
                id(id) {}

    int id;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const auto world = multiplayer_universe().get_world(id);
        memory.strings.set(0, world == nullptr ? "" : world->name());
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("WorldName {}", id);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<WorldName>(j.at(0).get<int>());
    }
};
