#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_FarRetreatState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NightCrawlerFightController_FarRetreatState__Class** type_info;
        inline app::NightCrawlerFightController_FarRetreatState__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_FarRetreatState__Class>(type_info, "", "NightCrawlerFightController", "FarRetreatState");
        }
        inline app::NightCrawlerFightController_FarRetreatState* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_FarRetreatState>(get_class());
        }
    } // namespace NightCrawlerFightController_FarRetreatState
} // namespace app::classes::types
