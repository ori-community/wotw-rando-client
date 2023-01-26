#pragma once
#include <Modloader/app/structs/GroundMovementTimelineBehaviourNew.h>
#include <Modloader/app/structs/GroundMovementTimelineBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundMovementTimelineBehaviourNew {
        inline app::GroundMovementTimelineBehaviourNew__Class** type_info() {
            static app::GroundMovementTimelineBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundMovementTimelineBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundMovementTimelineBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::GroundMovementTimelineBehaviourNew__Class>(type_info(), "", "GroundMovementTimelineBehaviourNew");
        }
        inline app::GroundMovementTimelineBehaviourNew* create() {
            return il2cpp::create_object<app::GroundMovementTimelineBehaviourNew>(get_class());
        }
    } // namespace GroundMovementTimelineBehaviourNew
} // namespace app::classes::types
