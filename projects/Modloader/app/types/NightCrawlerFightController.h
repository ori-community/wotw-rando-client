#pragma once
#include <Modloader/app/structs/NightCrawlerFightController.h>
#include <Modloader/app/structs/NightCrawlerFightController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerFightController {
        inline app::NightCrawlerFightController__Class** type_info() {
            static app::NightCrawlerFightController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NightCrawlerFightController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NightCrawlerFightController__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerFightController__Class>(type_info(), "", "NightCrawlerFightController");
        }
        inline app::NightCrawlerFightController* create() {
            return il2cpp::create_object<app::NightCrawlerFightController>(get_class());
        }
    } // namespace NightCrawlerFightController
} // namespace app::classes::types
