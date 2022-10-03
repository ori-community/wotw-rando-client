#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCullingComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightCullingComparer__Class** type_info;
        inline app::LightCullingComparer__Class* get_class() {
            return il2cpp::get_class<app::LightCullingComparer__Class>(type_info, "", "LightCullingComparer");
        }
        inline app::LightCullingComparer* create() {
            return il2cpp::create_object<app::LightCullingComparer>(get_class());
        }
    } // namespace LightCullingComparer
} // namespace app::classes::types
