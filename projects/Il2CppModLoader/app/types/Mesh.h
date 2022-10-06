#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Mesh {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Mesh__Class** type_info;
        inline app::Mesh__Class* get_class() {
            return il2cpp::get_class<app::Mesh__Class>(type_info, "UnityEngine", "Mesh");
        }
        inline app::Mesh* create() {
            return il2cpp::create_object<app::Mesh>(get_class());
        }
        inline app::Mesh__Array* create_array(int size) {
            return il2cpp::array_new<app::Mesh__Array>(get_class(), size);
        }
        inline app::Mesh__Array* create_array(const std::vector<app::Mesh*>& items) {
            return il2cpp::array_new<app::Mesh__Array>(get_class(), items);
        }
    } // namespace Mesh
} // namespace app::classes::types
