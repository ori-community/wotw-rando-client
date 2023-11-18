#pragma once
#include <Modloader/app/structs/GroundPatrolWithDirectionTask.h>
#include <Modloader/app/structs/GroundPatrolWithDirectionTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundPatrolWithDirectionTask {
        inline app::GroundPatrolWithDirectionTask__Class** type_info() {
            static app::GroundPatrolWithDirectionTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundPatrolWithDirectionTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundPatrolWithDirectionTask__Class* get_class() {
            return il2cpp::get_class<app::GroundPatrolWithDirectionTask__Class>(type_info(), "Moon.BehaviourSystem", "GroundPatrolWithDirectionTask");
        }
        inline app::GroundPatrolWithDirectionTask* create() {
            return il2cpp::create_object<app::GroundPatrolWithDirectionTask>(get_class());
        }
    } // namespace GroundPatrolWithDirectionTask
} // namespace app::classes::types
