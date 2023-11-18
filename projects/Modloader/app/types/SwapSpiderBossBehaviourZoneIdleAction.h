#pragma once
#include <Modloader/app/structs/SwapSpiderBossBehaviourZoneIdleAction.h>
#include <Modloader/app/structs/SwapSpiderBossBehaviourZoneIdleAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwapSpiderBossBehaviourZoneIdleAction {
        inline app::SwapSpiderBossBehaviourZoneIdleAction__Class** type_info() {
            static app::SwapSpiderBossBehaviourZoneIdleAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwapSpiderBossBehaviourZoneIdleAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwapSpiderBossBehaviourZoneIdleAction__Class* get_class() {
            return il2cpp::get_class<app::SwapSpiderBossBehaviourZoneIdleAction__Class>(type_info(), "", "SwapSpiderBossBehaviourZoneIdleAction");
        }
        inline app::SwapSpiderBossBehaviourZoneIdleAction* create() {
            return il2cpp::create_object<app::SwapSpiderBossBehaviourZoneIdleAction>(get_class());
        }
    } // namespace SwapSpiderBossBehaviourZoneIdleAction
} // namespace app::classes::types
