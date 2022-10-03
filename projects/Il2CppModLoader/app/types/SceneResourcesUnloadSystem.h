#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneResourcesUnloadSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneResourcesUnloadSystem__Class** type_info;
        inline app::SceneResourcesUnloadSystem__Class* get_class() {
            return il2cpp::get_class<app::SceneResourcesUnloadSystem__Class>(type_info, "", "SceneResourcesUnloadSystem");
        }
        inline app::SceneResourcesUnloadSystem* create() {
            return il2cpp::create_object<app::SceneResourcesUnloadSystem>(get_class());
        }
    } // namespace SceneResourcesUnloadSystem
} // namespace app::classes::types
