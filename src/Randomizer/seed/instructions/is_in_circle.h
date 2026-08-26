#pragma once
#include <Core/api/game/player.h>
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

#include "../../../Modloader/il2cpp_math.h"

INSTRUCTION(IsInCircle)
    void execute(Seed& seed, memory::SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const auto x = memory.heap.get<float>(0);
        const auto y = memory.heap.get<float>(1);
        const auto r = memory.heap.get<float>(2);
        const auto r_squared = r * r;

        memory.heap.set<bool>(0, modloader::math::distance2(core::api::game::player::get_position(), {x, y}) <= r_squared);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const memory::SeedMemory& memory) const override {
        return std::format("IsInCircle -> {}, {}, {}", memory.heap.get<float>(0), memory.heap.get<float>(1), memory.heap.get<float>(2));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<IsInCircle>();
    }
};
