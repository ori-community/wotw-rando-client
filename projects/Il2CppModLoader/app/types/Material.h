#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Material {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Material__Class** type_info;
        inline app::Material__Class* get_class() {
            return il2cpp::get_class<app::Material__Class>(type_info, "UnityEngine", "Material");
        }
        inline app::Material* create() {
            return il2cpp::create_object<app::Material>(get_class());
        }
        inline app::Material__Array* create_array(int size) {
            return il2cpp::array_new<app::Material__Array>(get_class(), size);
        }
        inline app::Material__Array* create_array(const std::vector<app::Material*>& items) {
            return il2cpp::array_new<app::Material__Array>(get_class(), items);
        }
    } // namespace Material
} // namespace app::classes::types
