#pragma once
#include <Modloader/app/structs/NightCrawlerFightController_States.h>
#include <Modloader/app/structs/NightCrawlerFightController_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_States {
        inline app::NightCrawlerFightController_States__Class** type_info() {
            static app::NightCrawlerFightController_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NightCrawlerFightController_States__Class**)(modloader::win::memory::resolve_rva(0x04734018));
            }
            return cache;
        }
        inline app::NightCrawlerFightController_States__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_States__Class>(type_info(), "", "NightCrawlerFightController", "States");
        }
        inline app::NightCrawlerFightController_States* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_States>(get_class());
        }
    } // namespace NightCrawlerFightController_States
} // namespace app::classes::types
