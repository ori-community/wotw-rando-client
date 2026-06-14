#pragma once
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/EntityLocomotionTask__Array.h>
#include <Modloader/app/structs/EntityLocomotionTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityLocomotionTask {
        inline app::EntityLocomotionTask__Class** type_info() {
            static app::EntityLocomotionTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityLocomotionTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityLocomotionTask__Class* get_class() {
            return il2cpp::get_class<app::EntityLocomotionTask__Class>(type_info(), "Moon.BehaviourSystem", "EntityLocomotionTask");
        }
        inline app::EntityLocomotionTask* create() {
            return il2cpp::create_object<app::EntityLocomotionTask>(get_class());
        }
        inline app::EntityLocomotionTask__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityLocomotionTask__Array>(get_class(), size);
        }
        inline app::EntityLocomotionTask__Array* create_array(const std::vector<app::EntityLocomotionTask*>& items) {
            return il2cpp::array_new<app::EntityLocomotionTask__Array>(get_class(), items);
        }
    } // namespace EntityLocomotionTask
} // namespace app::classes::types
