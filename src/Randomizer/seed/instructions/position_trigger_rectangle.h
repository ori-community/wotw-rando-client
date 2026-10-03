#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(PositionTriggerRectangle)
    explicit PositionTriggerRectangle(std::size_t id) :
            id(id) {}

    std::size_t id;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) override {
        const auto x_1 = memory.heap.get<float>(0);
        const auto y_1 = memory.heap.get<float>(1);
        const auto x_2 = memory.heap.get<float>(2);
        const auto y_2 = memory.heap.get<float>(3);

        const auto x_min = std::min(x_1, x_2);
        const auto y_min = std::min(y_1, y_2);
        const auto x_max = std::max(x_1, x_2);
        const auto y_max = std::max(y_1, y_2);

        environment.set_position_trigger(id, {
            .shape = SeedPositionTrigger::RectangleShape(
                x_min, y_min, x_max, y_max
            )
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) override {
        const auto x_1 = memory.heap.get<float>(0);
        const auto y_1 = memory.heap.get<float>(1);
        const auto x_2 = memory.heap.get<float>(2);
        const auto y_2 = memory.heap.get<float>(3);

        return std::format("PositionTriggerRectangle -> id = {}, x_1 = {}, y_1 = {}, x_2 = {}, y_2 = {}", id, x_1, y_1, x_2, y_2);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<PositionTriggerRectangle>(
            j.get<std::size_t>()
        );
    }
};
