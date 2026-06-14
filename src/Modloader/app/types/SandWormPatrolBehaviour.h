#pragma once
#include <Modloader/app/structs/SandWormPatrolBehaviour.h>
#include <Modloader/app/structs/SandWormPatrolBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormPatrolBehaviour {
        inline app::SandWormPatrolBehaviour__Class** type_info() {
            static app::SandWormPatrolBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormPatrolBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormPatrolBehaviour__Class>(type_info(), "", "SandWormPatrolBehaviour");
        }
        inline app::SandWormPatrolBehaviour* create() {
            return il2cpp::create_object<app::SandWormPatrolBehaviour>(get_class());
        }
    } // namespace SandWormPatrolBehaviour
} // namespace app::classes::types
