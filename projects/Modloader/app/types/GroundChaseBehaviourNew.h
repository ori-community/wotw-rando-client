#pragma once
#include <Modloader/app/structs/GroundChaseBehaviourNew.h>
#include <Modloader/app/structs/GroundChaseBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundChaseBehaviourNew {
        inline app::GroundChaseBehaviourNew__Class** type_info() {
            static app::GroundChaseBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundChaseBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundChaseBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::GroundChaseBehaviourNew__Class>(type_info(), "Moon", "GroundChaseBehaviourNew");
        }
        inline app::GroundChaseBehaviourNew* create() {
            return il2cpp::create_object<app::GroundChaseBehaviourNew>(get_class());
        }
    } // namespace GroundChaseBehaviourNew
} // namespace app::classes::types
