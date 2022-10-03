#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_FightState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NightCrawlerFightController_FightState__Class** type_info;
        inline app::NightCrawlerFightController_FightState__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_FightState__Class>(type_info, "", "NightCrawlerFightController", "FightState");
        }
        inline app::NightCrawlerFightController_FightState* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_FightState>(get_class());
        }
    } // namespace NightCrawlerFightController_FightState
} // namespace app::classes::types
