#pragma once
#include <Modloader/app/structs/GroundAreaPatrolBehaviourNew.h>
#include <Modloader/app/structs/GroundAreaPatrolBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundAreaPatrolBehaviourNew {
        inline app::GroundAreaPatrolBehaviourNew__Class** type_info() {
            static app::GroundAreaPatrolBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundAreaPatrolBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundAreaPatrolBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::GroundAreaPatrolBehaviourNew__Class>(type_info(), "Moon", "GroundAreaPatrolBehaviourNew");
        }
        inline app::GroundAreaPatrolBehaviourNew* create() {
            return il2cpp::create_object<app::GroundAreaPatrolBehaviourNew>(get_class());
        }
    } // namespace GroundAreaPatrolBehaviourNew
} // namespace app::classes::types
