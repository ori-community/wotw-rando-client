#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetRenderModelName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRRenderModels_GetRenderModelName__Class** type_info;
        inline app::IVRRenderModels_GetRenderModelName__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetRenderModelName__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetRenderModelName");
        }
        inline app::IVRRenderModels_GetRenderModelName* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetRenderModelName>(get_class());
        }
    } // namespace IVRRenderModels_GetRenderModelName
} // namespace app::classes::types
