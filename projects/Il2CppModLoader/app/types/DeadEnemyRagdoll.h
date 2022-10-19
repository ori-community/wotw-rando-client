#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeadEnemyRagdoll {
        namespace {
            inline app::DeadEnemyRagdoll__Class* type_info_ref = nullptr;
        }
        inline app::DeadEnemyRagdoll__Class** type_info = &type_info_ref;
        inline app::DeadEnemyRagdoll__Class* get_class() {
            return il2cpp::get_class<app::DeadEnemyRagdoll__Class>(type_info, "", "DeadEnemyRagdoll");
        }
        inline app::DeadEnemyRagdoll* create() {
            return il2cpp::create_object<app::DeadEnemyRagdoll>(get_class());
        }
    } // namespace DeadEnemyRagdoll
} // namespace app::classes::types
