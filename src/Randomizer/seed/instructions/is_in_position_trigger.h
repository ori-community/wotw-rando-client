#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(IsInPositionTrigger)
    explicit IsInPositionTrigger(std::size_t id) :
                id(id) {}

    std::size_t id;

    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        memory.heap.set(
            0,
            environment.get_position_trigger(id)
                .transform([](auto&& trigger) { return trigger.get().is_inside(modloader::math::to_vec2(core::api::game::player::get_position())); })
                .value_or(false)
        );
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format("IsInPositionTrigger -> id = {}", id);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<IsInPositionTrigger>(
            j.get<std::size_t>()
        );
    }
};
