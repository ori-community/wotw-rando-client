#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeshGenerationStatus__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeshGenerationStatus__Enum__Class** type_info;
        inline app::MeshGenerationStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::MeshGenerationStatus__Enum__Class>(type_info, "UnityEngine.Experimental.XR", "MeshGenerationStatus");
        }
        inline app::MeshGenerationStatus__Enum* create() {
            return il2cpp::create_object<app::MeshGenerationStatus__Enum>(get_class());
        }
    } // namespace MeshGenerationStatus__Enum
} // namespace app::classes::types
