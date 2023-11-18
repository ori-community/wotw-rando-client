#pragma once
#include <Modloader/app/structs/SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array.h>
#include <Modloader/app/structs/SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array {
        inline app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array__Class** type_info() {
            static app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array__Class>(type_info(), "", "SpiderBossLocomotionMoveBehaviour+SpiderBossTransition[]");
        }
        inline app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array* create() {
            return il2cpp::create_object<app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array>(get_class());
        }
    } // namespace SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array
} // namespace app::classes::types
