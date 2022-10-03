#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossDirectionBrainController {
        namespace {
            app::SpiderBossDirectionBrainController__Class* type_info_ref = nullptr;
        }
        app::SpiderBossDirectionBrainController__Class** type_info = &type_info_ref;
        inline app::SpiderBossDirectionBrainController__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossDirectionBrainController__Class>(type_info, "", "SpiderBossDirectionBrainController");
        }
        inline app::SpiderBossDirectionBrainController* create() {
            return il2cpp::create_object<app::SpiderBossDirectionBrainController>(get_class());
        }
    } // namespace SpiderBossDirectionBrainController
} // namespace app::classes::types
