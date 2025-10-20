#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(FreeMessageAlignment)
    FreeMessageAlignment(const std::size_t id, const app::AlignmentMode__Enum alignment) :
        id(id),
        alignment(alignment) {}

    std::size_t id;
    app::AlignmentMode__Enum alignment;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        environment.modify_free_message_box(id, [&] (auto& message_box) {
            message_box.text_alignment().set(alignment);
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("FreeMessageAlignment {} -> {}", id, static_cast<int>(alignment));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<FreeMessageAlignment>(j.at(0).get<std::size_t>(), parse_enum<app::AlignmentMode__Enum>(j.at(1)));
    }
};
