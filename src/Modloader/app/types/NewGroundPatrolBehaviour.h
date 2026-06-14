#pragma once
#include <Modloader/app/structs/NewGroundPatrolBehaviour.h>
#include <Modloader/app/structs/NewGroundPatrolBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewGroundPatrolBehaviour {
        inline app::NewGroundPatrolBehaviour__Class** type_info() {
            static app::NewGroundPatrolBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NewGroundPatrolBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NewGroundPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::NewGroundPatrolBehaviour__Class>(type_info(), "Moon", "NewGroundPatrolBehaviour");
        }
        inline app::NewGroundPatrolBehaviour* create() {
            return il2cpp::create_object<app::NewGroundPatrolBehaviour>(get_class());
        }
    } // namespace NewGroundPatrolBehaviour
} // namespace app::classes::types
