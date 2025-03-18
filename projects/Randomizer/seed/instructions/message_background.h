#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(MessageBackground)
    explicit MessageBackground(const std::size_t id) :
        id(id) {}

    std::size_t id;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const auto queued_it = environment.queued_message_boxes.find(id);
        if (queued_it != environment.queued_message_boxes.end() && !queued_it->second.handle->message.expired()) {
            queued_it->second.handle->message.lock()->show_background().set(memory.booleans.get(0));
        }

        const auto free_it = environment.free_message_boxes.find(id);
        if (free_it != environment.free_message_boxes.end()) {
            free_it->second.message->show_background().set(memory.booleans.get(0));
        }
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("MessageBackground {} -> {}", id, memory.booleans.get(0));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<MessageBackground>(j.get<std::size_t>());
    }
};
