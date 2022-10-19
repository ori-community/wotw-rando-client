#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NavMeshHit {
        namespace {
            inline app::NavMeshHit__Class* type_info_ref = nullptr;
        }
        inline app::NavMeshHit__Class** type_info = &type_info_ref;
        inline app::NavMeshHit__Class* get_class() {
            return il2cpp::get_class<app::NavMeshHit__Class>(type_info, "UnityEngine.AI", "NavMeshHit");
        }
        inline app::NavMeshHit* create() {
            return il2cpp::create_object<app::NavMeshHit>(get_class());
        }
        inline app::NavMeshHit__Boxed* box(app::NavMeshHit value) {
            return il2cpp::box_value<app::NavMeshHit__Boxed>(get_class(), value);
        }
    } // namespace NavMeshHit
} // namespace app::classes::types
