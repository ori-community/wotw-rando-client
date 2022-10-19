#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_FarRetreatState {
        inline app::NightCrawlerFightController_FarRetreatState__Class** type_info = (app::NightCrawlerFightController_FarRetreatState__Class**)(modloader::win::memory::resolve_rva(0x04783848));
        inline app::NightCrawlerFightController_FarRetreatState__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_FarRetreatState__Class>(type_info, "", "NightCrawlerFightController", "FarRetreatState");
        }
        inline app::NightCrawlerFightController_FarRetreatState* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_FarRetreatState>(get_class());
        }
    } // namespace NightCrawlerFightController_FarRetreatState
} // namespace app::classes::types
