#pragma once
#include <Modloader/app/structs/NightCrawlerFightController_AttackFarState.h>
#include <Modloader/app/structs/NightCrawlerFightController_AttackFarState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_AttackFarState {
        inline app::NightCrawlerFightController_AttackFarState__Class** type_info() {
            static app::NightCrawlerFightController_AttackFarState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NightCrawlerFightController_AttackFarState__Class**)(modloader::win::memory::resolve_rva(0x0476A6E8));
            }
            return cache;
        }
        inline app::NightCrawlerFightController_AttackFarState__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_AttackFarState__Class>(type_info(), "", "NightCrawlerFightController", "AttackFarState");
        }
        inline app::NightCrawlerFightController_AttackFarState* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_AttackFarState>(get_class());
        }
    } // namespace NightCrawlerFightController_AttackFarState
} // namespace app::classes::types
