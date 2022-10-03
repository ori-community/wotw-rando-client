#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundMovementTimelineBehaviourNew {
        namespace {
            app::GroundMovementTimelineBehaviourNew__Class* type_info_ref = nullptr;
        }
        app::GroundMovementTimelineBehaviourNew__Class** type_info = &type_info_ref;
        inline app::GroundMovementTimelineBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::GroundMovementTimelineBehaviourNew__Class>(type_info, "", "GroundMovementTimelineBehaviourNew");
        }
        inline app::GroundMovementTimelineBehaviourNew* create() {
            return il2cpp::create_object<app::GroundMovementTimelineBehaviourNew>(get_class());
        }
    } // namespace GroundMovementTimelineBehaviourNew
} // namespace app::classes::types
