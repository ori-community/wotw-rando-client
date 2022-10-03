#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerFightController {
        namespace {
            app::NightCrawlerFightController__Class* type_info_ref = nullptr;
        }
        app::NightCrawlerFightController__Class** type_info = &type_info_ref;
        inline app::NightCrawlerFightController__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerFightController__Class>(type_info, "", "NightCrawlerFightController");
        }
        inline app::NightCrawlerFightController* create() {
            return il2cpp::create_object<app::NightCrawlerFightController>(get_class());
        }
    } // namespace NightCrawlerFightController
} // namespace app::classes::types
