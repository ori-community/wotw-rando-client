#pragma once
#include <Modloader/app/structs/GroundPatrolBehaviour.h>
#include <Modloader/app/structs/GroundPatrolBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundPatrolBehaviour {
        inline app::GroundPatrolBehaviour__Class** type_info() {
            static app::GroundPatrolBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundPatrolBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GroundPatrolBehaviour__Class>(type_info(), "Moon", "GroundPatrolBehaviour");
        }
        inline app::GroundPatrolBehaviour* create() {
            return il2cpp::create_object<app::GroundPatrolBehaviour>(get_class());
        }
    } // namespace GroundPatrolBehaviour
} // namespace app::classes::types
