#pragma once
#include <Modloader/app/structs/NavMeshAgent.h>
#include <Modloader/app/structs/NavMeshAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NavMeshAgent {
        inline app::NavMeshAgent__Class** type_info() {
            static app::NavMeshAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NavMeshAgent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NavMeshAgent__Class* get_class() {
            return il2cpp::get_class<app::NavMeshAgent__Class>(type_info(), "UnityEngine.AI", "NavMeshAgent");
        }
        inline app::NavMeshAgent* create() {
            return il2cpp::create_object<app::NavMeshAgent>(get_class());
        }
    } // namespace NavMeshAgent
} // namespace app::classes::types
