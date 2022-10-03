#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeGameWorldArea {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeGameWorldArea__Class** type_info;
        inline app::RuntimeGameWorldArea__Class* get_class() {
            return il2cpp::get_class<app::RuntimeGameWorldArea__Class>(type_info, "", "RuntimeGameWorldArea");
        }
        inline app::RuntimeGameWorldArea* create() {
            return il2cpp::create_object<app::RuntimeGameWorldArea>(get_class());
        }
        inline app::RuntimeGameWorldArea__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimeGameWorldArea__Array>(get_class(), size);
        }
    } // namespace RuntimeGameWorldArea
} // namespace app::classes::types
