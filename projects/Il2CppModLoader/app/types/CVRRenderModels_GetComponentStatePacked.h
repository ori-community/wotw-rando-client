#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CVRRenderModels_GetComponentStatePacked {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CVRRenderModels_GetComponentStatePacked__Class** type_info;
        inline app::CVRRenderModels_GetComponentStatePacked__Class* get_class() {
            return il2cpp::get_nested_class<app::CVRRenderModels_GetComponentStatePacked__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "CVRRenderModels", "_GetComponentStatePacked");
        }
        inline app::CVRRenderModels_GetComponentStatePacked* create() {
            return il2cpp::create_object<app::CVRRenderModels_GetComponentStatePacked>(get_class());
        }
    } // namespace CVRRenderModels_GetComponentStatePacked
} // namespace app::classes::types
