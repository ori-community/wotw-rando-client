#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyStopper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnemyStopper__Class** type_info;
        inline app::EnemyStopper__Class* get_class() {
            return il2cpp::get_class<app::EnemyStopper__Class>(type_info, "", "EnemyStopper");
        }
        inline app::EnemyStopper* create() {
            return il2cpp::create_object<app::EnemyStopper>(get_class());
        }
        inline app::EnemyStopper__Array* create_array(int size) {
            return il2cpp::array_new<app::EnemyStopper__Array>(get_class(), size);
        }
        inline app::EnemyStopper__Array* create_array(const std::vector<app::EnemyStopper*>& items) {
            return il2cpp::array_new<app::EnemyStopper__Array>(get_class(), items);
        }
    } // namespace EnemyStopper
} // namespace app::classes::types
