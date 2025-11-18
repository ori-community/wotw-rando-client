#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(BoxTrigger)
    explicit BoxTrigger(std::size_t id, float x_min, float x_max, float y_min, float y_max) :
                id(id),
                x_min(x_min),
                x_max(x_max),
                y_min(y_min),
                y_max(y_max) {}

    std::size_t id;
    float x_min;
    float x_max;
    float y_min;
    float y_max;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        environment.set_box_trigger(id, {
            .x_min = x_min,
            .x_max = x_max,
            .y_min = y_min,
            .y_max = y_max,
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("BoxTrigger -> id = {}, x_min = {}, x_max = {}, y_min = {}, y_max = {}", id, x_min, x_max, y_min, y_max);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<BoxTrigger>(
            j.at("id").get<std::size_t>(),
            j.at("x_min").get<float>(),
            j.at("x_max").get<float>(),
            j.at("y_min").get<float>(),
            j.at("y_max").get<float>()
        );
    }
};
