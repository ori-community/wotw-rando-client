#pragma once
#include <Modloader/app/structs/NightCrawlerBackAttackController.h>
#include <Modloader/app/structs/NightCrawlerBackAttackController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightCrawlerBackAttackController {
        inline app::NightCrawlerBackAttackController__Class** type_info() {
            static app::NightCrawlerBackAttackController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NightCrawlerBackAttackController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NightCrawlerBackAttackController__Class* get_class() {
            return il2cpp::get_class<app::NightCrawlerBackAttackController__Class>(type_info(), "", "NightCrawlerBackAttackController");
        }
        inline app::NightCrawlerBackAttackController* create() {
            return il2cpp::create_object<app::NightCrawlerBackAttackController>(get_class());
        }
    } // namespace NightCrawlerBackAttackController
} // namespace app::classes::types
