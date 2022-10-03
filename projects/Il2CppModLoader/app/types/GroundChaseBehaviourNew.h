#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundChaseBehaviourNew {
        namespace {
            app::GroundChaseBehaviourNew__Class* type_info_ref = nullptr;
        }
        app::GroundChaseBehaviourNew__Class** type_info = &type_info_ref;
        inline app::GroundChaseBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::GroundChaseBehaviourNew__Class>(type_info, "Moon", "GroundChaseBehaviourNew");
        }
        inline app::GroundChaseBehaviourNew* create() {
            return il2cpp::create_object<app::GroundChaseBehaviourNew>(get_class());
        }
    } // namespace GroundChaseBehaviourNew
} // namespace app::classes::types
