#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossDirectionBrainController {
        namespace {
            inline app::SpiderBossDirectionBrainController__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossDirectionBrainController__Class** type_info = &type_info_ref;
        inline app::SpiderBossDirectionBrainController__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossDirectionBrainController__Class>(type_info, "", "SpiderBossDirectionBrainController");
        }
        inline app::SpiderBossDirectionBrainController* create() {
            return il2cpp::create_object<app::SpiderBossDirectionBrainController>(get_class());
        }
    } // namespace SpiderBossDirectionBrainController
} // namespace app::classes::types
