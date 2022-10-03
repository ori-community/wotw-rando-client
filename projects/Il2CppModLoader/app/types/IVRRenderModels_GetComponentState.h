#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetComponentState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRRenderModels_GetComponentState__Class** type_info;
        inline app::IVRRenderModels_GetComponentState__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetComponentState__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetComponentState");
        }
        inline app::IVRRenderModels_GetComponentState* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetComponentState>(get_class());
        }
    } // namespace IVRRenderModels_GetComponentState
} // namespace app::classes::types
