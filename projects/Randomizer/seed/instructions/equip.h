#pragma once
#include <Core/api/game/player.h>
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>
#include <magic_enum/magic_enum.hpp>

INSTRUCTION(Equip)
Equip(const app::SpellInventory_Binding__Enum slot, const app::EquipmentType__Enum equipment) :
        slot(slot),
        equipment(equipment) {}

    app::SpellInventory_Binding__Enum slot;
    app::EquipmentType__Enum equipment;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        core::api::game::player::bind(slot, equipment);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return std::format("Equip -> {}, {}", static_cast<int>(slot), static_cast<int>(equipment));
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<Equip>(parse_enum<app::SpellInventory_Binding__Enum>(j.at(1)), parse_enum<app::EquipmentType__Enum>(j.at(0)));
    }
};
