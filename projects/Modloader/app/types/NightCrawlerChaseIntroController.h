#pragma once
#include <Modloader/app/structs/NightCrawlerChaseIntroController.h>
#include <Modloader/app/structs/NightCrawlerChaseIntroController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerChaseIntroController {
        inline app::NightCrawlerChaseIntroController__Class** type_info() {
            static app::NightCrawlerChaseIntroController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NightCrawlerChaseIntroController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NightCrawlerChaseIntroController__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerChaseIntroController__Class>(type_info(), "", "NightCrawlerChaseIntroController");
        }
        inline app::NightCrawlerChaseIntroController* create() {
            return il2cpp::create_object<app::NightCrawlerChaseIntroController>(get_class());
        }
    } // namespace NightCrawlerChaseIntroController
} // namespace app::classes::types
