#pragma once
#include <Modloader/app/structs/SpiderBossDirectionBrainController.h>
#include <Modloader/app/structs/SpiderBossDirectionBrainController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossDirectionBrainController {
        inline app::SpiderBossDirectionBrainController__Class** type_info() {
            static app::SpiderBossDirectionBrainController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossDirectionBrainController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossDirectionBrainController__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossDirectionBrainController__Class>(type_info(), "", "SpiderBossDirectionBrainController");
        }
        inline app::SpiderBossDirectionBrainController* create() {
            return il2cpp::create_object<app::SpiderBossDirectionBrainController>(get_class());
        }
    } // namespace SpiderBossDirectionBrainController
} // namespace app::classes::types
