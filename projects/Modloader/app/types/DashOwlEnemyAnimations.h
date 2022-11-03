#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DashOwlEnemyAnimations {
        namespace {
            inline app::DashOwlEnemyAnimations__Class* type_info_ref = nullptr;
        }
        inline app::DashOwlEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::DashOwlEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::DashOwlEnemyAnimations__Class>(type_info, "", "DashOwlEnemyAnimations");
        }
        inline app::DashOwlEnemyAnimations* create() {
            return il2cpp::create_object<app::DashOwlEnemyAnimations>(get_class());
        }
    } // namespace DashOwlEnemyAnimations
} // namespace app::classes::types
