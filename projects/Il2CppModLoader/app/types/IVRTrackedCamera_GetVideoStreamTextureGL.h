#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_GetVideoStreamTextureGL {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRTrackedCamera_GetVideoStreamTextureGL__Class** type_info;
        inline app::IVRTrackedCamera_GetVideoStreamTextureGL__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_GetVideoStreamTextureGL__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_GetVideoStreamTextureGL");
        }
        inline app::IVRTrackedCamera_GetVideoStreamTextureGL* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_GetVideoStreamTextureGL>(get_class());
        }
    } // namespace IVRTrackedCamera_GetVideoStreamTextureGL
} // namespace app::classes::types
