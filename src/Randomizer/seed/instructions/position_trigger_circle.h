#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(PositionTriggerCircle)
    explicit PositionTriggerCircle(std::size_t id) :
            id(id) {}

    std::size_t id;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const auto x = memory.heap.get<float>(0);
        const auto y = memory.heap.get<float>(1);
        const auto r = memory.heap.get<float>(2);

        environment.set_position_trigger(id, {
            .shape = SeedPositionTrigger::CircleShape(
                x, y, r
            )
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        const auto x = memory.heap.get<float>(0);
        const auto y = memory.heap.get<float>(1);
        const auto r = memory.heap.get<float>(2);

        return std::format("PositionTriggerCircle -> id = {}, x = {}, y = {}, r = {}", id, x, y, r);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<PositionTriggerCircle>(
            j.get<std::size_t>()
        );
    }
};
