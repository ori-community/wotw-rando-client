#pragma once
#include <Modloader/app/structs/NightCrawlerFightController_FightState.h>
#include <Modloader/app/structs/NightCrawlerFightController_FightState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_FightState {
        inline app::NightCrawlerFightController_FightState__Class** type_info() {
            static app::NightCrawlerFightController_FightState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NightCrawlerFightController_FightState__Class**)(modloader::win::memory::resolve_rva(0x04783A20));
            }
            return cache;
        }
        inline app::NightCrawlerFightController_FightState__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_FightState__Class>(type_info(), "", "NightCrawlerFightController", "FightState");
        }
        inline app::NightCrawlerFightController_FightState* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_FightState>(get_class());
        }
    } // namespace NightCrawlerFightController_FightState
} // namespace app::classes::types
