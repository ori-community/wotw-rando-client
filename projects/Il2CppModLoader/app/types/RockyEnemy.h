#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemy {
        namespace {
            app::RockyEnemy__Class* type_info_ref = nullptr;
        }
        app::RockyEnemy__Class** type_info = &type_info_ref;
        inline app::RockyEnemy__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemy__Class>(type_info, "", "RockyEnemy");
        }
        inline app::RockyEnemy* create() {
            return il2cpp::create_object<app::RockyEnemy>(get_class());
        }
    } // namespace RockyEnemy
} // namespace app::classes::types
