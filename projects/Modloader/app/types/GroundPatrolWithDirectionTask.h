#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroundPatrolWithDirectionTask__Class.h>
#include <Modloader/app/structs/GroundPatrolWithDirectionTask.h>

namespace app::classes::types {
    namespace GroundPatrolWithDirectionTask {
        namespace {
            inline app::GroundPatrolWithDirectionTask__Class* type_info_ref = nullptr;
        }
        inline app::GroundPatrolWithDirectionTask__Class** type_info = &type_info_ref;
        inline app::GroundPatrolWithDirectionTask__Class* get_class() {
            return il2cpp::get_class<app::GroundPatrolWithDirectionTask__Class>(type_info, "Moon.BehaviourSystem", "GroundPatrolWithDirectionTask");
        }
        inline app::GroundPatrolWithDirectionTask* create() {
            return il2cpp::create_object<app::GroundPatrolWithDirectionTask>(get_class());
        }
    } // namespace GroundPatrolWithDirectionTask
} // namespace app::classes::types
