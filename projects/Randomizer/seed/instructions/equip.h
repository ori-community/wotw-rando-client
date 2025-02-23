#pragma once
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(Equip)
    Equip(const app::EquipmentType__Enum equipment, const app::SpellInventory_Binding__Enum slot) :
        equipment(equipment),
        slot(slot) {}

    app::EquipmentType__Enum equipment;
    app::SpellInventory_Binding__Enum slot;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        core::api::game::player::bind(slot, equipment);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("Equip -> {}, {}", static_cast<int>(equipment), static_cast<int>(slot));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<Equip>(parse_enum<app::EquipmentType__Enum>(j.at(0)), parse_enum<app::SpellInventory_Binding__Enum>(j.at(1)));
    }
};
