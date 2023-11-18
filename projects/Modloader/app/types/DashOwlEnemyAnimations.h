#pragma once
#include <Modloader/app/structs/DashOwlEnemyAnimations.h>
#include <Modloader/app/structs/DashOwlEnemyAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashOwlEnemyAnimations {
        inline app::DashOwlEnemyAnimations__Class** type_info() {
            static app::DashOwlEnemyAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DashOwlEnemyAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DashOwlEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::DashOwlEnemyAnimations__Class>(type_info(), "", "DashOwlEnemyAnimations");
        }
        inline app::DashOwlEnemyAnimations* create() {
            return il2cpp::create_object<app::DashOwlEnemyAnimations>(get_class());
        }
    } // namespace DashOwlEnemyAnimations
} // namespace app::classes::types
