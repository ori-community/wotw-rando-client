#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundEnemy {
        namespace {
            app::GroundEnemy__Class* type_info_ref = nullptr;
        }
        app::GroundEnemy__Class** type_info = &type_info_ref;
        inline app::GroundEnemy__Class* get_class() {
            return il2cpp::get_class<app::GroundEnemy__Class>(type_info, "", "GroundEnemy");
        }
        inline app::GroundEnemy* create() {
            return il2cpp::create_object<app::GroundEnemy>(get_class());
        }
    } // namespace GroundEnemy
} // namespace app::classes::types
