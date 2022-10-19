#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NightCrawlerChaseIntroController {
        namespace {
            inline app::NightCrawlerChaseIntroController__Class* type_info_ref = nullptr;
        }
        inline app::NightCrawlerChaseIntroController__Class** type_info = &type_info_ref;
        inline app::NightCrawlerChaseIntroController__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerChaseIntroController__Class>(type_info, "", "NightCrawlerChaseIntroController");
        }
        inline app::NightCrawlerChaseIntroController* create() {
            return il2cpp::create_object<app::NightCrawlerChaseIntroController>(get_class());
        }
    } // namespace NightCrawlerChaseIntroController
} // namespace app::classes::types
