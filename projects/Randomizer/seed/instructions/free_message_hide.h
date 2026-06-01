#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(FreeMessageHide)
    explicit FreeMessageHide(const std::size_t id) :
        id(id) {}

    std::size_t id;

    void execute(Seed& seed, SeedMemory& memory, SeedStack& stack, SeedExecutionEnvironment& environment) const override {
        environment.modify_free_message_box(id, [&](auto& free_message_box) {
            free_message_box.message_box->hide(!memory.booleans.get(0));
            free_message_box.visible = false;
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory, const SeedStack& stack) const override {
        return std::format("FreeMessageHide {} (instant = {})", id, !memory.booleans.get(0));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<FreeMessageHide>(j.get<std::size_t>());
    }
};
