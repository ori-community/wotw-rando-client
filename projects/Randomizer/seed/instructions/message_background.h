#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(MessageBackground)
    explicit MessageBackground(const std::size_t id) :
        id(id) {}

    std::size_t id;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const auto modification_fn = [&](core::api::messages::MessageBox& message_box) {
            message_box.show_background().set(memory.booleans.get(0));
        };

        environment.modify_queued_message_box(id, modification_fn);
        environment.modify_free_message_box(id, modification_fn);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("MessageBackground {} -> {}", id, memory.booleans.get(0));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<MessageBackground>(j.get<std::size_t>());
    }
};
