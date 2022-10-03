#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCullingSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightCullingSystem__Class** type_info;
        inline app::LightCullingSystem__Class* get_class() {
            return il2cpp::get_class<app::LightCullingSystem__Class>(type_info, "", "LightCullingSystem");
        }
        inline app::LightCullingSystem* create() {
            return il2cpp::create_object<app::LightCullingSystem>(get_class());
        }
    } // namespace LightCullingSystem
} // namespace app::classes::types
