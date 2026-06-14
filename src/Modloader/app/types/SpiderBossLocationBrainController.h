#pragma once
#include <Modloader/app/structs/SpiderBossLocationBrainController.h>
#include <Modloader/app/structs/SpiderBossLocationBrainController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationBrainController {
        inline app::SpiderBossLocationBrainController__Class** type_info() {
            static app::SpiderBossLocationBrainController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocationBrainController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocationBrainController__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationBrainController__Class>(type_info(), "", "SpiderBossLocationBrainController");
        }
        inline app::SpiderBossLocationBrainController* create() {
            return il2cpp::create_object<app::SpiderBossLocationBrainController>(get_class());
        }
    } // namespace SpiderBossLocationBrainController
} // namespace app::classes::types
