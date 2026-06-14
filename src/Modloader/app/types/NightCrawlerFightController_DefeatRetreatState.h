#pragma once
#include <Modloader/app/structs/NightCrawlerFightController_DefeatRetreatState.h>
#include <Modloader/app/structs/NightCrawlerFightController_DefeatRetreatState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_DefeatRetreatState {
        inline app::NightCrawlerFightController_DefeatRetreatState__Class** type_info() {
            static app::NightCrawlerFightController_DefeatRetreatState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NightCrawlerFightController_DefeatRetreatState__Class**)(modloader::win::memory::resolve_rva(0x0477DBB8));
            }
            return cache;
        }
        inline app::NightCrawlerFightController_DefeatRetreatState__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_DefeatRetreatState__Class>(type_info(), "", "NightCrawlerFightController", "DefeatRetreatState");
        }
        inline app::NightCrawlerFightController_DefeatRetreatState* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_DefeatRetreatState>(get_class());
        }
    } // namespace NightCrawlerFightController_DefeatRetreatState
} // namespace app::classes::types
