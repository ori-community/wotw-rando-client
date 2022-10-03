#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeshValidator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeshValidator__Class** type_info;
        inline app::MeshValidator__Class* get_class() {
            return il2cpp::get_class<app::MeshValidator__Class>(type_info, "TriangleNet", "MeshValidator");
        }
        inline app::MeshValidator* create() {
            return il2cpp::create_object<app::MeshValidator>(get_class());
        }
    } // namespace MeshValidator
} // namespace app::classes::types
