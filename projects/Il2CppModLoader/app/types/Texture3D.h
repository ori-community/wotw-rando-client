#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Texture3D {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Texture3D__Class** type_info;
        inline app::Texture3D__Class* get_class() {
            return il2cpp::get_class<app::Texture3D__Class>(type_info, "UnityEngine", "Texture3D");
        }
        inline app::Texture3D* create() {
            return il2cpp::create_object<app::Texture3D>(get_class());
        }
    } // namespace Texture3D
} // namespace app::classes::types
