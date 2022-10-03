#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityLocomotionTask {
        namespace {
            app::EntityLocomotionTask__Class* type_info_ref = nullptr;
        }
        app::EntityLocomotionTask__Class** type_info = &type_info_ref;
        inline app::EntityLocomotionTask__Class* get_class() {
            return il2cpp::get_class<app::EntityLocomotionTask__Class>(type_info, "Moon.BehaviourSystem", "EntityLocomotionTask");
        }
        inline app::EntityLocomotionTask* create() {
            return il2cpp::create_object<app::EntityLocomotionTask>(get_class());
        }
        inline app::EntityLocomotionTask__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityLocomotionTask__Array>(get_class(), size);
        }
    } // namespace EntityLocomotionTask
} // namespace app::classes::types
