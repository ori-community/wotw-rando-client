#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OwlEnemy {
        namespace {
            app::OwlEnemy__Class* type_info_ref = nullptr;
        }
        app::OwlEnemy__Class** type_info = &type_info_ref;
        inline app::OwlEnemy__Class* get_class() {
            return il2cpp::get_class<app::OwlEnemy__Class>(type_info, "", "OwlEnemy");
        }
        inline app::OwlEnemy* create() {
            return il2cpp::create_object<app::OwlEnemy>(get_class());
        }
    } // namespace OwlEnemy
} // namespace app::classes::types
