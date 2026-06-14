#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(FreeMessageShow)
    explicit FreeMessageShow(const std::size_t id) :
        id(id) {}

    std::size_t id;

    void execute(Seed& seed, SeedMemory& memory, SeedStack& stack, SeedExecutionEnvironment& environment) const override {
        environment.modify_free_message_box(id, [&](auto& free_message_box) {
            free_message_box.message_box->show(!memory.booleans.get(0), memory.booleans.get(1));
            free_message_box.visible = true;
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory, const SeedStack& stack) const override {
        return std::format("FreeMessageShow {} (instant = {}, sound = {})", id, !memory.booleans.get(0), memory.booleans.get(1));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<FreeMessageShow>(j.get<std::size_t>());
    }
};
