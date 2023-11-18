#pragma once
#include <Modloader/app/structs/GroundPatrolWithDirectionBehaviourNew.h>
#include <Modloader/app/structs/GroundPatrolWithDirectionBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundPatrolWithDirectionBehaviourNew {
        inline app::GroundPatrolWithDirectionBehaviourNew__Class** type_info() {
            static app::GroundPatrolWithDirectionBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundPatrolWithDirectionBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundPatrolWithDirectionBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::GroundPatrolWithDirectionBehaviourNew__Class>(type_info(), "Moon", "GroundPatrolWithDirectionBehaviourNew");
        }
        inline app::GroundPatrolWithDirectionBehaviourNew* create() {
            return il2cpp::create_object<app::GroundPatrolWithDirectionBehaviourNew>(get_class());
        }
    } // namespace GroundPatrolWithDirectionBehaviourNew
} // namespace app::classes::types
