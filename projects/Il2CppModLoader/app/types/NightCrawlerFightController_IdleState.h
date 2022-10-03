#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_IdleState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NightCrawlerFightController_IdleState__Class** type_info;
        inline app::NightCrawlerFightController_IdleState__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_IdleState__Class>(type_info, "", "NightCrawlerFightController", "IdleState");
        }
        inline app::NightCrawlerFightController_IdleState* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_IdleState>(get_class());
        }
    } // namespace NightCrawlerFightController_IdleState
} // namespace app::classes::types
