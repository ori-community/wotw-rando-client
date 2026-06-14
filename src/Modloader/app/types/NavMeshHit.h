#pragma once
#include <Modloader/app/structs/NavMeshHit.h>
#include <Modloader/app/structs/NavMeshHit__Boxed.h>
#include <Modloader/app/structs/NavMeshHit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NavMeshHit {
        inline app::NavMeshHit__Class** type_info() {
            static app::NavMeshHit__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NavMeshHit__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NavMeshHit__Class* get_class() {
            return il2cpp::get_class<app::NavMeshHit__Class>(type_info(), "UnityEngine.AI", "NavMeshHit");
        }
        inline app::NavMeshHit* create() {
            return il2cpp::create_object<app::NavMeshHit>(get_class());
        }
        inline app::NavMeshHit__Boxed* box(app::NavMeshHit value) {
            return il2cpp::box_value<app::NavMeshHit__Boxed>(get_class(), value);
        }
    } // namespace NavMeshHit
} // namespace app::classes::types
