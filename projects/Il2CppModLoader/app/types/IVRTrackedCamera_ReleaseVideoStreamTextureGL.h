#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_ReleaseVideoStreamTextureGL {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRTrackedCamera_ReleaseVideoStreamTextureGL__Class** type_info;
        inline app::IVRTrackedCamera_ReleaseVideoStreamTextureGL__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_ReleaseVideoStreamTextureGL__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_ReleaseVideoStreamTextureGL");
        }
        inline app::IVRTrackedCamera_ReleaseVideoStreamTextureGL* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_ReleaseVideoStreamTextureGL>(get_class());
        }
    } // namespace IVRTrackedCamera_ReleaseVideoStreamTextureGL
} // namespace app::classes::types
