#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(FreeMessageVerticalAnchor)
    FreeMessageVerticalAnchor(const std::size_t id, const app::VerticalAnchorMode__Enum anchor) :
        id(id),
        anchor(anchor) {}

    std::size_t id;
    app::VerticalAnchorMode__Enum anchor;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        if (environment.free_message_boxes.contains(id)) {
            environment.free_message_boxes[id].message->vertical_anchor().set(anchor);
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("FreeMessageVerticalAnchor {} -> {}", id, static_cast<int>(anchor));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<FreeMessageVerticalAnchor>(j.at(0).get<std::size_t>(), parse_enum<app::VerticalAnchorMode__Enum>(j.at(1)));
    }
};
