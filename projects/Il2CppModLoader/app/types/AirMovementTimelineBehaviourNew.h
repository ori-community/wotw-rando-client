#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AirMovementTimelineBehaviourNew {
        namespace {
            app::AirMovementTimelineBehaviourNew__Class* type_info_ref = nullptr;
        }
        app::AirMovementTimelineBehaviourNew__Class** type_info = &type_info_ref;
        inline app::AirMovementTimelineBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::AirMovementTimelineBehaviourNew__Class>(type_info, "", "AirMovementTimelineBehaviourNew");
        }
        inline app::AirMovementTimelineBehaviourNew* create() {
            return il2cpp::create_object<app::AirMovementTimelineBehaviourNew>(get_class());
        }
    } // namespace AirMovementTimelineBehaviourNew
} // namespace app::classes::types
