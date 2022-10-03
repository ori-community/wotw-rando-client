#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingEnemy {
        namespace {
            app::RammingEnemy__Class* type_info_ref = nullptr;
        }
        app::RammingEnemy__Class** type_info = &type_info_ref;
        inline app::RammingEnemy__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemy__Class>(type_info, "", "RammingEnemy");
        }
        inline app::RammingEnemy* create() {
            return il2cpp::create_object<app::RammingEnemy>(get_class());
        }
    } // namespace RammingEnemy
} // namespace app::classes::types
