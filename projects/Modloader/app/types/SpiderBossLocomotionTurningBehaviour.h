#pragma once
#include <Modloader/app/structs/SpiderBossLocomotionTurningBehaviour.h>
#include <Modloader/app/structs/SpiderBossLocomotionTurningBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocomotionTurningBehaviour {
        inline app::SpiderBossLocomotionTurningBehaviour__Class** type_info() {
            static app::SpiderBossLocomotionTurningBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocomotionTurningBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocomotionTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocomotionTurningBehaviour__Class>(type_info(), "", "SpiderBossLocomotionTurningBehaviour");
        }
        inline app::SpiderBossLocomotionTurningBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossLocomotionTurningBehaviour>(get_class());
        }
    } // namespace SpiderBossLocomotionTurningBehaviour
} // namespace app::classes::types
