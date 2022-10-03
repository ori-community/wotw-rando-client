#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRRenderModels_GetRenderModelErrorNameFromEnum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRRenderModels_GetRenderModelErrorNameFromEnum__Class** type_info;
        inline app::IVRRenderModels_GetRenderModelErrorNameFromEnum__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRRenderModels_GetRenderModelErrorNameFromEnum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRRenderModels", "_GetRenderModelErrorNameFromEnum");
        }
        inline app::IVRRenderModels_GetRenderModelErrorNameFromEnum* create() {
            return il2cpp::create_object<app::IVRRenderModels_GetRenderModelErrorNameFromEnum>(get_class());
        }
    } // namespace IVRRenderModels_GetRenderModelErrorNameFromEnum
} // namespace app::classes::types
