#pragma once
#include <Modloader/app/structs/NightCrawlerFightController_FarRetreatState.h>
#include <Modloader/app/structs/NightCrawlerFightController_FarRetreatState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_FarRetreatState {
        inline app::NightCrawlerFightController_FarRetreatState__Class** type_info() {
            static app::NightCrawlerFightController_FarRetreatState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NightCrawlerFightController_FarRetreatState__Class**)(modloader::win::memory::resolve_rva(0x04783848));
            }
            return cache;
        }
        inline app::NightCrawlerFightController_FarRetreatState__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_FarRetreatState__Class>(type_info(), "", "NightCrawlerFightController", "FarRetreatState");
        }
        inline app::NightCrawlerFightController_FarRetreatState* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_FarRetreatState>(get_class());
        }
    } // namespace NightCrawlerFightController_FarRetreatState
} // namespace app::classes::types
