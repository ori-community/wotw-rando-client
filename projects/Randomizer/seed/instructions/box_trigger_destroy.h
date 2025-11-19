#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(BoxTriggerDestroy)
    explicit BoxTriggerDestroy(std::size_t id) :
                id(id) {}

    std::size_t id;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        environment.destroy_box_trigger(id);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("BoxTriggerDestroy -> id = {}", id);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<BoxTriggerDestroy>(
            j.get<std::size_t>()
        );
    }
};
