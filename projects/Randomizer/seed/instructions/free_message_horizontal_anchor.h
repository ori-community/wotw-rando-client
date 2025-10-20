#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(FreeMessageHorizontalAnchor)
    FreeMessageHorizontalAnchor(const std::size_t id, const app::HorizontalAnchorMode__Enum anchor) :
        id(id),
        anchor(anchor) {}

    std::size_t id;
    app::HorizontalAnchorMode__Enum anchor;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        environment.modify_free_message_box(id, [&] (auto& message_box) {
            message_box.box_horizontal_anchor().set(anchor);
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("FreeMessageHorizontalAnchor {} -> {}", id, static_cast<int>(anchor));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<FreeMessageHorizontalAnchor>(j.at(0).get<std::size_t>(), parse_enum<app::HorizontalAnchorMode__Enum>(j.at(1)));
    }
};
