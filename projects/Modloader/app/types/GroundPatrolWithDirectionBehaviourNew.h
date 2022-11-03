#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroundPatrolWithDirectionBehaviourNew {
        namespace {
            inline app::GroundPatrolWithDirectionBehaviourNew__Class* type_info_ref = nullptr;
        }
        inline app::GroundPatrolWithDirectionBehaviourNew__Class** type_info = &type_info_ref;
        inline app::GroundPatrolWithDirectionBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::GroundPatrolWithDirectionBehaviourNew__Class>(type_info, "Moon", "GroundPatrolWithDirectionBehaviourNew");
        }
        inline app::GroundPatrolWithDirectionBehaviourNew* create() {
            return il2cpp::create_object<app::GroundPatrolWithDirectionBehaviourNew>(get_class());
        }
    } // namespace GroundPatrolWithDirectionBehaviourNew
} // namespace app::classes::types
