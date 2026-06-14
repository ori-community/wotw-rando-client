#pragma once
#include <Modloader/app/structs/NightCrawlerChaseController.h>
#include <Modloader/app/structs/NightCrawlerChaseController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerChaseController {
        inline app::NightCrawlerChaseController__Class** type_info() {
            static app::NightCrawlerChaseController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NightCrawlerChaseController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NightCrawlerChaseController__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerChaseController__Class>(type_info(), "", "NightCrawlerChaseController");
        }
        inline app::NightCrawlerChaseController* create() {
            return il2cpp::create_object<app::NightCrawlerChaseController>(get_class());
        }
    } // namespace NightCrawlerChaseController
} // namespace app::classes::types
