#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerChaseController {
        namespace {
            app::NightCrawlerChaseController__Class* type_info_ref = nullptr;
        }
        app::NightCrawlerChaseController__Class** type_info = &type_info_ref;
        inline app::NightCrawlerChaseController__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerChaseController__Class>(type_info, "", "NightCrawlerChaseController");
        }
        inline app::NightCrawlerChaseController* create() {
            return il2cpp::create_object<app::NightCrawlerChaseController>(get_class());
        }
    } // namespace NightCrawlerChaseController
} // namespace app::classes::types
