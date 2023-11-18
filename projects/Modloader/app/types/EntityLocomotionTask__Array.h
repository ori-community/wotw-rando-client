#pragma once
#include <Modloader/app/structs/EntityLocomotionTask__Array.h>
#include <Modloader/app/structs/EntityLocomotionTask__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityLocomotionTask__Array {
        inline app::EntityLocomotionTask__Array__Class** type_info() {
            static app::EntityLocomotionTask__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityLocomotionTask__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityLocomotionTask__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityLocomotionTask__Array__Class>(type_info(), "Moon.BehaviourSystem", "EntityLocomotionTask[]");
        }
        inline app::EntityLocomotionTask__Array* create() {
            return il2cpp::create_object<app::EntityLocomotionTask__Array>(get_class());
        }
    } // namespace EntityLocomotionTask__Array
} // namespace app::classes::types
