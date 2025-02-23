#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(Unequip)
    explicit Unequip(const app::EquipmentType__Enum equipment) :
        equipment(equipment) {}

    app::EquipmentType__Enum equipment;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        core::api::game::player::unbind(equipment);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("Unequip -> {}", static_cast<int>(equipment));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<Unequip>(parse_enum<app::EquipmentType__Enum>(j));
    }
};
