#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Triangles {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Triangles__Class** type_info;
        inline app::Triangles__Class* get_class() {
            return il2cpp::get_class<app::Triangles__Class>(type_info, "UnityStandardAssets.ImageEffects", "Triangles");
        }
        inline app::Triangles* create() {
            return il2cpp::create_object<app::Triangles>(get_class());
        }
    } // namespace Triangles
} // namespace app::classes::types
