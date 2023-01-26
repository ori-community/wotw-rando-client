#pragma once
#include <Modloader/app/structs/GroundMoveInDirectionBehaviourNew.h>
#include <Modloader/app/structs/GroundMoveInDirectionBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundMoveInDirectionBehaviourNew {
        inline app::GroundMoveInDirectionBehaviourNew__Class** type_info() {
            static app::GroundMoveInDirectionBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundMoveInDirectionBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundMoveInDirectionBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::GroundMoveInDirectionBehaviourNew__Class>(type_info(), "Moon", "GroundMoveInDirectionBehaviourNew");
        }
        inline app::GroundMoveInDirectionBehaviourNew* create() {
            return il2cpp::create_object<app::GroundMoveInDirectionBehaviourNew>(get_class());
        }
    } // namespace GroundMoveInDirectionBehaviourNew
} // namespace app::classes::types
