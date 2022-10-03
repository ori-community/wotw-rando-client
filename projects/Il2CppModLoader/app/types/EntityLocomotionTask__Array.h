#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityLocomotionTask__Array {
        namespace {
            app::EntityLocomotionTask__Array__Class* type_info_ref = nullptr;
        }
        app::EntityLocomotionTask__Array__Class** type_info = &type_info_ref;
        inline app::EntityLocomotionTask__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityLocomotionTask__Array__Class>(type_info, "Moon.BehaviourSystem", "EntityLocomotionTask[]");
        }
        inline app::EntityLocomotionTask__Array* create() {
            return il2cpp::create_object<app::EntityLocomotionTask__Array>(get_class());
        }
    } // namespace EntityLocomotionTask__Array
} // namespace app::classes::types
