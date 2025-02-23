#pragma once
#include <Core/api/game/player.h>
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(IsInHitbox)
    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const app::Rect box{
            memory.floats.get(0),
            memory.floats.get(1),
            memory.floats.get(2) - memory.floats.get(0),
            memory.floats.get(3) - memory.floats.get(1),
        };

        memory.booleans.set(0, modloader::math::in_rect(core::api::game::player::get_position(), box));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("IsInHitbox -> {}, {}, {}, {}", memory.floats.get(0), memory.floats.get(1), memory.floats.get(2), memory.floats.get(3));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<IsInHitbox>();
    }
};
