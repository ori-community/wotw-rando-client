#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(MessageDestroy)
    explicit MessageDestroy(const std::size_t id) :
        id(id) {}

    std::size_t id;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        environment.remove_free_message_box(id);
        environment.set_queued_message_box_timeout(id, 0.f);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("MessageDestroy {}", id);
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<MessageDestroy>(j.get<std::size_t>());
    }
};
