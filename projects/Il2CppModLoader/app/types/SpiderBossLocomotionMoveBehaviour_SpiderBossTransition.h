#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocomotionMoveBehaviour_SpiderBossTransition {
        namespace {
            app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Class* type_info_ref = nullptr;
        }
        app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossLocomotionMoveBehaviour_SpiderBossTransition__Class>(type_info, "", "SpiderBossLocomotionMoveBehaviour", "SpiderBossTransition");
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
