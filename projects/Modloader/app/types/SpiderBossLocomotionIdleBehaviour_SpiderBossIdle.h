#pragma once
#include <Modloader/app/structs/SpiderBossLocomotionIdleBehaviour_SpiderBossIdle.h>
#include <Modloader/app/structs/SpiderBossLocomotionIdleBehaviour_SpiderBossIdle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocomotionIdleBehaviour_SpiderBossIdle {
        inline app::SpiderBossLocomotionIdleBehaviour_SpiderBossIdle__Class** type_info() {
            static app::SpiderBossLocomotionIdleBehaviour_SpiderBossIdle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocomotionIdleBehaviour_SpiderBossIdle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocomotionIdleBehaviour_SpiderBossIdle__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossLocomotionIdleBehaviour_SpiderBossIdle__Class>(type_info(), "", "SpiderBossLocomotionIdleBehaviour", "SpiderBossIdle");
        }
        inline app::SpiderBossLocomotionIdleBehaviour_SpiderBossIdle* create() {
            return il2cpp::create_object<app::SpiderBossLocomotionIdleBehaviour_SpiderBossIdle>(get_class());
        }
    } // namespace SpiderBossLocomotionIdleBehaviour_SpiderBossIdle
} // namespace app::classes::types
