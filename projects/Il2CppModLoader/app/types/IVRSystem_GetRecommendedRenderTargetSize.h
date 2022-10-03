#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetRecommendedRenderTargetSize {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRSystem_GetRecommendedRenderTargetSize__Class** type_info;
        inline app::IVRSystem_GetRecommendedRenderTargetSize__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetRecommendedRenderTargetSize__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetRecommendedRenderTargetSize");
        }
        inline app::IVRSystem_GetRecommendedRenderTargetSize* create() {
            return il2cpp::create_object<app::IVRSystem_GetRecommendedRenderTargetSize>(get_class());
        }
    } // namespace IVRSystem_GetRecommendedRenderTargetSize
} // namespace app::classes::types
