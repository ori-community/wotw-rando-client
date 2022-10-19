#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRSystem_GetRecommendedRenderTargetSize {
        inline app::IVRSystem_GetRecommendedRenderTargetSize__Class** type_info = (app::IVRSystem_GetRecommendedRenderTargetSize__Class**)(modloader::win::memory::resolve_rva(0x04784F18));
        inline app::IVRSystem_GetRecommendedRenderTargetSize__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetRecommendedRenderTargetSize__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetRecommendedRenderTargetSize");
        }
        inline app::IVRSystem_GetRecommendedRenderTargetSize* create() {
            return il2cpp::create_object<app::IVRSystem_GetRecommendedRenderTargetSize>(get_class());
        }
    } // namespace IVRSystem_GetRecommendedRenderTargetSize
} // namespace app::classes::types
