#pragma once
#include <Modloader/app/structs/NightCrawlerFightController_IdleState.h>
#include <Modloader/app/structs/NightCrawlerFightController_IdleState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_IdleState {
        inline app::NightCrawlerFightController_IdleState__Class** type_info() {
            static app::NightCrawlerFightController_IdleState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NightCrawlerFightController_IdleState__Class**)(modloader::win::memory::resolve_rva(0x0478B280));
            }
            return cache;
        }
        inline app::NightCrawlerFightController_IdleState__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_IdleState__Class>(type_info(), "", "NightCrawlerFightController", "IdleState");
        }
        inline app::NightCrawlerFightController_IdleState* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_IdleState>(get_class());
        }
    } // namespace NightCrawlerFightController_IdleState
} // namespace app::classes::types
