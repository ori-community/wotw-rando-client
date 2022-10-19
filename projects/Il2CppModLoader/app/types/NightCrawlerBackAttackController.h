#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NightCrawlerBackAttackController {
        namespace {
            inline app::NightCrawlerBackAttackController__Class* type_info_ref = nullptr;
        }
        inline app::NightCrawlerBackAttackController__Class** type_info = &type_info_ref;
        inline app::NightCrawlerBackAttackController__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerBackAttackController__Class>(type_info, "", "NightCrawlerBackAttackController");
        }
        inline app::NightCrawlerBackAttackController* create() {
            return il2cpp::create_object<app::NightCrawlerBackAttackController>(get_class());
        }
    } // namespace NightCrawlerBackAttackController
} // namespace app::classes::types
