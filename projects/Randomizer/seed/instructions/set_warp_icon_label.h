#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(SetWarpIconLabel)
    explicit SetWarpIconLabel(const std::size_t id) :
        id(id) {}

    std::size_t id;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        // TODO[Map]:
        // environment.modify_warp_icon(id, [&](game::map::Icon& icon) {
        //     icon.name().set(std::format("custom_warp_icon -> {}", memory.strings.get(0)));
        //     icon.label().set(memory.strings.get(0));
        // });
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("SetWarpIconLabel -> {}, {}", id, memory.strings.get(0));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetWarpIconLabel>(j.get<std::size_t>());
    }
};
