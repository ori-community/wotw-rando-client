#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(FreeMessageScreenPosition)
    FreeMessageScreenPosition(const std::size_t id, const core::api::screen_position::ScreenPosition screen_position) :
        id(id),
        screen_position(screen_position) {}

    std::size_t id;
    core::api::screen_position::ScreenPosition screen_position;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        if (environment.free_message_boxes.contains(id)) {
            environment.free_message_boxes[id].message->screen_position().set(screen_position);
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("FreeMessageScreenPosition {} -> {}", id, static_cast<int>(screen_position));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<FreeMessageScreenPosition>(j.at(0).get<std::size_t>(), parse_enum<core::api::screen_position::ScreenPosition>(j.at(1)));
    }
};
