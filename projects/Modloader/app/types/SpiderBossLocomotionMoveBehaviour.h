#pragma once
#include <Modloader/app/structs/SpiderBossLocomotionMoveBehaviour.h>
#include <Modloader/app/structs/SpiderBossLocomotionMoveBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocomotionMoveBehaviour {
        inline app::SpiderBossLocomotionMoveBehaviour__Class** type_info() {
            static app::SpiderBossLocomotionMoveBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocomotionMoveBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocomotionMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocomotionMoveBehaviour__Class>(type_info(), "", "SpiderBossLocomotionMoveBehaviour");
        }
        inline app::SpiderBossLocomotionMoveBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossLocomotionMoveBehaviour>(get_class());
        }
    } // namespace SpiderBossLocomotionMoveBehaviour
} // namespace app::classes::types
