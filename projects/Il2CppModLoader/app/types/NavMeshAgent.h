#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NavMeshAgent {
        namespace {
            inline app::NavMeshAgent__Class* type_info_ref = nullptr;
        }
        inline app::NavMeshAgent__Class** type_info = &type_info_ref;
        inline app::NavMeshAgent__Class* get_class() {
            return il2cpp::get_class<app::NavMeshAgent__Class>(type_info, "UnityEngine.AI", "NavMeshAgent");
        }
        inline app::NavMeshAgent* create() {
            return il2cpp::create_object<app::NavMeshAgent>(get_class());
        }
    } // namespace NavMeshAgent
} // namespace app::classes::types
