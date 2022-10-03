#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetComponentName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRRenderModels_GetComponentName__Class** type_info;
        inline app::IVRRenderModels_GetComponentName__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetComponentName__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetComponentName");
        }
        inline app::IVRRenderModels_GetComponentName* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetComponentName>(get_class());
        }
    } // namespace IVRRenderModels_GetComponentName
} // namespace app::classes::types
