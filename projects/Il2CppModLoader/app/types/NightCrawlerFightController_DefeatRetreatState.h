#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_DefeatRetreatState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NightCrawlerFightController_DefeatRetreatState__Class** type_info;
        inline app::NightCrawlerFightController_DefeatRetreatState__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_DefeatRetreatState__Class>(type_info, "", "NightCrawlerFightController", "DefeatRetreatState");
        }
        inline app::NightCrawlerFightController_DefeatRetreatState* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_DefeatRetreatState>(get_class());
        }
    } // namespace NightCrawlerFightController_DefeatRetreatState
} // namespace app::classes::types
