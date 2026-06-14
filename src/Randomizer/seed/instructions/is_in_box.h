#pragma once
#include <Core/api/game/player.h>
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(IsInBox)
    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const app::Rect box{
            memory.heap.get<float>(0),
            memory.heap.get<float>(1),
            memory.heap.get<float>(2) - memory.heap.get<float>(0),
            memory.heap.get<float>(3) - memory.heap.get<float>(1),
        };

        memory.heap.set<bool>(0, modloader::math::in_rect(core::api::game::player::get_position(), box));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format("IsInBox -> {}, {}, {}, {}", memory.heap.get<float>(0), memory.heap.get<float>(1), memory.heap.get<float>(2), memory.heap.get<float>(3));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<IsInBox>();
    }
};
