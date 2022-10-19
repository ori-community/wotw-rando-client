#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RammingEnemyAnimations {
        namespace {
            inline app::RammingEnemyAnimations__Class* type_info_ref = nullptr;
        }
        inline app::RammingEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::RammingEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemyAnimations__Class>(type_info, "", "RammingEnemyAnimations");
        }
        inline app::RammingEnemyAnimations* create() {
            return il2cpp::create_object<app::RammingEnemyAnimations>(get_class());
        }
    } // namespace RammingEnemyAnimations
} // namespace app::classes::types
