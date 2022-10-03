#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashOwlEnemy {
        namespace {
            app::DashOwlEnemy__Class* type_info_ref = nullptr;
        }
        app::DashOwlEnemy__Class** type_info = &type_info_ref;
        inline app::DashOwlEnemy__Class* get_class() {
            return il2cpp::get_class<app::DashOwlEnemy__Class>(type_info, "", "DashOwlEnemy");
        }
        inline app::DashOwlEnemy* create() {
            return il2cpp::create_object<app::DashOwlEnemy>(get_class());
        }
    } // namespace DashOwlEnemy
} // namespace app::classes::types
