#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(FreeMessageBoxWidth)
    explicit FreeMessageBoxWidth(const std::size_t id) :
        id(id) {}

    std::size_t id;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        environment.modify_free_message_box(id, [&] (auto& message_box) {
            message_box.box_width().set(memory.floats.get(0));
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("FreeMessageBoxWidth {} -> {:.3}", id, memory.floats.get(0));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<FreeMessageBoxWidth>(j.get<std::size_t>());
    }
};
