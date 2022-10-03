#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NightCrawlerFightController_States__Class** type_info;
        inline app::NightCrawlerFightController_States__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_States__Class>(type_info, "", "NightCrawlerFightController", "States");
        }
        inline app::NightCrawlerFightController_States* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_States>(get_class());
        }
    } // namespace NightCrawlerFightController_States
} // namespace app::classes::types
