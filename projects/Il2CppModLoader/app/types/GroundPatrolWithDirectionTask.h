#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundPatrolWithDirectionTask {
        namespace {
            app::GroundPatrolWithDirectionTask__Class* type_info_ref = nullptr;
        }
        app::GroundPatrolWithDirectionTask__Class** type_info = &type_info_ref;
        inline app::GroundPatrolWithDirectionTask__Class* get_class() {
            return il2cpp::get_class<app::GroundPatrolWithDirectionTask__Class>(type_info, "Moon.BehaviourSystem", "GroundPatrolWithDirectionTask");
        }
        inline app::GroundPatrolWithDirectionTask* create() {
            return il2cpp::create_object<app::GroundPatrolWithDirectionTask>(get_class());
        }
    } // namespace GroundPatrolWithDirectionTask
} // namespace app::classes::types
