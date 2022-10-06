#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeshFilter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeshFilter__Class** type_info;
        inline app::MeshFilter__Class* get_class() {
            return il2cpp::get_class<app::MeshFilter__Class>(type_info, "UnityEngine", "MeshFilter");
        }
        inline app::MeshFilter* create() {
            return il2cpp::create_object<app::MeshFilter>(get_class());
        }
        inline app::MeshFilter__Array* create_array(int size) {
            return il2cpp::array_new<app::MeshFilter__Array>(get_class(), size);
        }
        inline app::MeshFilter__Array* create_array(const std::vector<app::MeshFilter*>& items) {
            return il2cpp::array_new<app::MeshFilter__Array>(get_class(), items);
        }
    } // namespace MeshFilter
} // namespace app::classes::types
