#pragma once
#include <Modloader/app/structs/NightCrawlerRetaliationController.h>
#include <Modloader/app/structs/NightCrawlerRetaliationController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerRetaliationController {
        inline app::NightCrawlerRetaliationController__Class** type_info() {
            static app::NightCrawlerRetaliationController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NightCrawlerRetaliationController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NightCrawlerRetaliationController__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerRetaliationController__Class>(type_info(), "", "NightCrawlerRetaliationController");
        }
        inline app::NightCrawlerRetaliationController* create() {
            return il2cpp::create_object<app::NightCrawlerRetaliationController>(get_class());
        }
    } // namespace NightCrawlerRetaliationController
} // namespace app::classes::types
