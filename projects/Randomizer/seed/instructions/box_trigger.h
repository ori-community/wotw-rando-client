#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(BoxTrigger)
    explicit BoxTrigger(std::size_t id) :
            id(id) {}

    std::size_t id;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const auto x_1 = memory.floats.get(0);
        const auto y_1 = memory.floats.get(1);
        const auto x_2 = memory.floats.get(3);
        const auto y_2 = memory.floats.get(4);

        environment.set_box_trigger(id, {
            .x_min = x_1 < x_2 ? x_1 : x_2,
            .y_min = y_1 < y_2 ? y_1 : y_2,
            .x_max = x_1 > x_2 ? x_1 : x_2,
            .y_max = y_1 > y_2 ? y_1 : y_2,
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        const auto x_1 = memory.floats.get(0);
        const auto y_1 = memory.floats.get(1);
        const auto x_2 = memory.floats.get(3);
        const auto y_2 = memory.floats.get(4);

        return std::format("BoxTrigger -> id = {}, x_1 = {}, y_1 = {}, x_2 = {}, y_2 = {}", id, x_1, y_1, x_2, y_2);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<BoxTrigger>(
            j.get<std::size_t>()
        );
    }
};
