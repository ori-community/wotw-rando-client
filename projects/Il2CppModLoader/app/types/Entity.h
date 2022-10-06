#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Entity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Entity__Class** type_info;
        inline app::Entity__Class* get_class() {
            return il2cpp::get_class<app::Entity__Class>(type_info, "Moon", "Entity");
        }
        inline app::Entity* create() {
            return il2cpp::create_object<app::Entity>(get_class());
        }
        inline app::Entity__Array* create_array(int size) {
            return il2cpp::array_new<app::Entity__Array>(get_class(), size);
        }
        inline app::Entity__Array* create_array(const std::vector<app::Entity*>& items) {
            return il2cpp::array_new<app::Entity__Array>(get_class(), items);
        }
    } // namespace Entity
} // namespace app::classes::types
