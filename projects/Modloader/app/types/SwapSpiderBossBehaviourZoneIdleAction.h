#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SwapSpiderBossBehaviourZoneIdleAction__Class.h>
#include <Modloader/app/structs/SwapSpiderBossBehaviourZoneIdleAction.h>

namespace app::classes::types {
    namespace SwapSpiderBossBehaviourZoneIdleAction {
        namespace {
            inline app::SwapSpiderBossBehaviourZoneIdleAction__Class* type_info_ref = nullptr;
        }
        inline app::SwapSpiderBossBehaviourZoneIdleAction__Class** type_info = &type_info_ref;
        inline app::SwapSpiderBossBehaviourZoneIdleAction__Class* get_class() {
            return il2cpp::get_class<app::SwapSpiderBossBehaviourZoneIdleAction__Class>(type_info, "", "SwapSpiderBossBehaviourZoneIdleAction");
        }
        inline app::SwapSpiderBossBehaviourZoneIdleAction* create() {
            return il2cpp::create_object<app::SwapSpiderBossBehaviourZoneIdleAction>(get_class());
        }
    } // namespace SwapSpiderBossBehaviourZoneIdleAction
} // namespace app::classes::types
