#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerRetaliationController {
        namespace {
            app::NightCrawlerRetaliationController__Class* type_info_ref = nullptr;
        }
        app::NightCrawlerRetaliationController__Class** type_info = &type_info_ref;
        inline app::NightCrawlerRetaliationController__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerRetaliationController__Class>(type_info, "", "NightCrawlerRetaliationController");
        }
        inline app::NightCrawlerRetaliationController* create() {
            return il2cpp::create_object<app::NightCrawlerRetaliationController>(get_class());
        }
    } // namespace NightCrawlerRetaliationController
} // namespace app::classes::types
