#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeshGenerationResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeshGenerationResult__Class** type_info;
        inline app::MeshGenerationResult__Class* get_class() {
            return il2cpp::get_class<app::MeshGenerationResult__Class>(type_info, "UnityEngine.Experimental.XR", "MeshGenerationResult");
        }
        inline app::MeshGenerationResult* create() {
            return il2cpp::create_object<app::MeshGenerationResult>(get_class());
        }
        inline app::MeshGenerationResult__Boxed* box(app::MeshGenerationResult value) {
            return il2cpp::box_value<app::MeshGenerationResult__Boxed>(get_class(), value);
        }
    } // namespace MeshGenerationResult
} // namespace app::classes::types
