#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(FreeMessage)
    explicit FreeMessage(const std::size_t id) :
        id(id) {}

    std::size_t id;
    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        environment.message_boxes_with_timeouts.erase(id);
        environment.free_message_boxes[id].message = std::make_shared<core::api::messages::MessageBox>();
        environment.free_message_boxes[id].message->text_processor(general_text_processor());
        environment.queued_message_boxes.erase(id);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("FreeMessage {}", id);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<FreeMessage>(j.get<std::size_t>());
    }
};
