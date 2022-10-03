#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BatEnemy {
        namespace {
            app::BatEnemy__Class* type_info_ref = nullptr;
        }
        app::BatEnemy__Class** type_info = &type_info_ref;
        inline app::BatEnemy__Class* get_class() {
            return il2cpp::get_class<app::BatEnemy__Class>(type_info, "", "BatEnemy");
        }
        inline app::BatEnemy* create() {
            return il2cpp::create_object<app::BatEnemy>(get_class());
        }
    } // namespace BatEnemy
} // namespace app::classes::types
