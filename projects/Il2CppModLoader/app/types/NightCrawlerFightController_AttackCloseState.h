#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_AttackCloseState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NightCrawlerFightController_AttackCloseState__Class** type_info;
        inline app::NightCrawlerFightController_AttackCloseState__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_AttackCloseState__Class>(type_info, "", "NightCrawlerFightController", "AttackCloseState");
        }
        inline app::NightCrawlerFightController_AttackCloseState* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_AttackCloseState>(get_class());
        }
    } // namespace NightCrawlerFightController_AttackCloseState
} // namespace app::classes::types
