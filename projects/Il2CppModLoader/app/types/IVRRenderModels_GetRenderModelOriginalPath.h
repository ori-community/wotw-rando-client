#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetRenderModelOriginalPath {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRRenderModels_GetRenderModelOriginalPath__Class** type_info;
        inline app::IVRRenderModels_GetRenderModelOriginalPath__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetRenderModelOriginalPath__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetRenderModelOriginalPath");
        }
        inline app::IVRRenderModels_GetRenderModelOriginalPath* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetRenderModelOriginalPath>(get_class());
        }
    } // namespace IVRRenderModels_GetRenderModelOriginalPath
} // namespace app::classes::types
