#pragma once
#include <Modloader/app/structs/GroundPatrolBehaviourNew.h>
#include <Modloader/app/structs/GroundPatrolBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundPatrolBehaviourNew {
        inline app::GroundPatrolBehaviourNew__Class** type_info() {
            static app::GroundPatrolBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundPatrolBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundPatrolBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::GroundPatrolBehaviourNew__Class>(type_info(), "Moon", "GroundPatrolBehaviourNew");
        }
        inline app::GroundPatrolBehaviourNew* create() {
            return il2cpp::create_object<app::GroundPatrolBehaviourNew>(get_class());
        }
    } // namespace GroundPatrolBehaviourNew
} // namespace app::classes::types
