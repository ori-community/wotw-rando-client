#pragma once
#include <Modloader/app/structs/GroundPatrolWithDirectionBehaviour.h>
#include <Modloader/app/structs/GroundPatrolWithDirectionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundPatrolWithDirectionBehaviour {
        inline app::GroundPatrolWithDirectionBehaviour__Class** type_info() {
            static app::GroundPatrolWithDirectionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundPatrolWithDirectionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundPatrolWithDirectionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GroundPatrolWithDirectionBehaviour__Class>(type_info(), "Moon", "GroundPatrolWithDirectionBehaviour");
        }
        inline app::GroundPatrolWithDirectionBehaviour* create() {
            return il2cpp::create_object<app::GroundPatrolWithDirectionBehaviour>(get_class());
        }
    } // namespace GroundPatrolWithDirectionBehaviour
} // namespace app::classes::types
