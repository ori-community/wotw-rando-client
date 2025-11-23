#pragma once
#include <Modloader/app/methods/MenuScreenManager.h>
#include <Modloader/app/types/UI.h>
#include <Randomizer/seed/instruction_utils.h>
#include <Randomizer/seed/seed.h>

INSTRUCTION(CloseMenu)
    explicit CloseMenu() = default;

    void execute(Seed& seed, SeedMemory& memory, SeedExecutionEnvironment& environment) const override {
        const auto menu_screen_manager = types::UI::get_class()->static_fields->m_sMenu;
        MenuScreenManager::HideMenuScreen(menu_screen_manager, false, true);
    }

    [[nodiscard]] std::string to_string(const Seed& seed, const SeedMemory& memory) const override {
        return "CloseMenu";
    }

    static std::unique_ptr<IInstruction> from_json(const nlohmann::json& j) {
        return std::make_unique<CloseMenu>();
    }
};
