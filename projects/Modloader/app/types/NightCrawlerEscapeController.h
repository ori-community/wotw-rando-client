#pragma once
#include <Modloader/app/structs/NightCrawlerEscapeController.h>
#include <Modloader/app/structs/NightCrawlerEscapeController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerEscapeController {
        inline app::NightCrawlerEscapeController__Class** type_info() {
            static app::NightCrawlerEscapeController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NightCrawlerEscapeController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NightCrawlerEscapeController__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerEscapeController__Class>(type_info(), "", "NightCrawlerEscapeController");
        }
        inline app::NightCrawlerEscapeController* create() {
            return il2cpp::create_object<app::NightCrawlerEscapeController>(get_class());
        }
    } // namespace NightCrawlerEscapeController
} // namespace app::classes::types
