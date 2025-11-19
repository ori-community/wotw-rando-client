#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(BoxTriggerLeaveCallback)
    explicit BoxTriggerLeaveCallback(std::size_t id, std::optional<std::size_t> command_id) :
                id(id),
                command_id(command_id) {}

    std::size_t id;
    std::optional<std::size_t> command_id;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        environment.modify_box_trigger(id, [&](SeedBoxTrigger& box_trigger) {
            box_trigger.on_leave_command_id = command_id;
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("BoxTriggerLeaveCallback -> id = {}, command_id = {}", id, command_id.has_value() ? std::to_string(*command_id) : "None");
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<BoxTriggerLeaveCallback>(
            j.at(0).get<std::size_t>(),
            j.at(1).get<std::optional<std::size_t>>()
        );
    }
};
