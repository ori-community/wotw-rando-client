#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetRenderModelThumbnailURL {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRRenderModels_GetRenderModelThumbnailURL__Class** type_info;
        inline app::IVRRenderModels_GetRenderModelThumbnailURL__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetRenderModelThumbnailURL__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetRenderModelThumbnailURL");
        }
        inline app::IVRRenderModels_GetRenderModelThumbnailURL* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetRenderModelThumbnailURL>(get_class());
        }
    } // namespace IVRRenderModels_GetRenderModelThumbnailURL
} // namespace app::classes::types
