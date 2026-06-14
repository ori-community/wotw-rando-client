#pragma once
#include <Modloader/app/structs/NightCrawlerFightController_AttackCloseState.h>
#include <Modloader/app/structs/NightCrawlerFightController_AttackCloseState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_AttackCloseState {
        inline app::NightCrawlerFightController_AttackCloseState__Class** type_info() {
            static app::NightCrawlerFightController_AttackCloseState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NightCrawlerFightController_AttackCloseState__Class**)(modloader::win::memory::resolve_rva(0x04776E50));
            }
            return cache;
        }
        inline app::NightCrawlerFightController_AttackCloseState__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_AttackCloseState__Class>(type_info(), "", "NightCrawlerFightController", "AttackCloseState");
        }
        inline app::NightCrawlerFightController_AttackCloseState* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_AttackCloseState>(get_class());
        }
    } // namespace NightCrawlerFightController_AttackCloseState
} // namespace app::classes::types
