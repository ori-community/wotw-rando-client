#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(SetTextWithId)
    explicit SetTextWithId(core::TextID id) :
        id(id) {}

    core::TextID id;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        core::text::register_text(id, memory.strings.get(0));
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("SetTextWithId -> [{}]:'{}' = '{}'", magic_enum::enum_name(id), core::text::get_text(id), memory.strings.get(0));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<SetTextWithId>(parse_enum<core::TextID>(j.at(0)));
    }
};
