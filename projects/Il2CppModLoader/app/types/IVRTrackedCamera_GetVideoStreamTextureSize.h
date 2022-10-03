#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetVideoStreamTextureSize {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRTrackedCamera_GetVideoStreamTextureSize__Class** type_info;
        inline app::IVRTrackedCamera_GetVideoStreamTextureSize__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetVideoStreamTextureSize__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetVideoStreamTextureSize");
        }
        inline app::IVRTrackedCamera_GetVideoStreamTextureSize* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetVideoStreamTextureSize>(get_class());
        }
    } // namespace IVRTrackedCamera_GetVideoStreamTextureSize
} // namespace app::classes::types
