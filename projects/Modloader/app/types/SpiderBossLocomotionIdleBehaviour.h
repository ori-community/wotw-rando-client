#pragma once
#include <Modloader/app/structs/SpiderBossLocomotionIdleBehaviour.h>
#include <Modloader/app/structs/SpiderBossLocomotionIdleBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocomotionIdleBehaviour {
        inline app::SpiderBossLocomotionIdleBehaviour__Class** type_info() {
            static app::SpiderBossLocomotionIdleBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocomotionIdleBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocomotionIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocomotionIdleBehaviour__Class>(type_info(), "", "SpiderBossLocomotionIdleBehaviour");
        }
        inline app::SpiderBossLocomotionIdleBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossLocomotionIdleBehaviour>(get_class());
        }
    } // namespace SpiderBossLocomotionIdleBehaviour
} // namespace app::classes::types
