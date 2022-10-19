#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_FarHoldState {
        inline app::NightCrawlerFightController_FarHoldState__Class** type_info = (app::NightCrawlerFightController_FarHoldState__Class**)(modloader::win::memory::resolve_rva(0x047584B8));
        inline app::NightCrawlerFightController_FarHoldState__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_FarHoldState__Class>(type_info, "", "NightCrawlerFightController", "FarHoldState");
        }
        inline app::NightCrawlerFightController_FarHoldState* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_FarHoldState>(get_class());
        }
    } // namespace NightCrawlerFightController_FarHoldState
} // namespace app::classes::types
