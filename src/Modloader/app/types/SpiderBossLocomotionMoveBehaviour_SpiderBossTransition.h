#pragma once
#include <Modloader/app/structs/SpiderBossLocomotionMoveBehaviour_SpiderBossTransition.h>
#include <Modloader/app/structs/SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array.h>
#include <Modloader/app/structs/SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocomotionMoveBehaviour_SpiderBossTransition {
        inline app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Class** type_info() {
            static app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Class>(type_info(), "", "SpiderBossLocomotionMoveBehaviour", "SpiderBossTransition");
        }
        inline app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition* create() {
            return il2cpp::create_object<app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition>(get_class());
        }
        inline app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array>(get_class(), size);
        }
        inline app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array* create_array(const std::vector<app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition*>& items) {
            return il2cpp::array_new<app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Array>(get_class(), items);
        }
    } // namespace SpiderBossLocomotionMoveBehaviour_SpiderBossTransition
} // namespace app::classes::types
