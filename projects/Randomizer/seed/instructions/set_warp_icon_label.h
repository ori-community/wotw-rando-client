#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(SetWarpIconLabel)
    explicit SetWarpIconLabel(const std::size_t id) :
        id(id) {}

    std::size_t id;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        environment.modify_warp_icon(id, [&](map::icons::MapIcon::ptr_t& icon) {
            icon->label_text.set(memory.strings.get(0));
        });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("SetWarpIconLabel -> {}, {}", id, memory.strings.get(0));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetWarpIconLabel>(j.get<std::size_t>());
    }
};
