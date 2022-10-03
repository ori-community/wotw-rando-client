#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_ReleaseVideoStreamingService {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRTrackedCamera_ReleaseVideoStreamingService__Class** type_info;
        inline app::IVRTrackedCamera_ReleaseVideoStreamingService__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_ReleaseVideoStreamingService__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_ReleaseVideoStreamingService");
        }
        inline app::IVRTrackedCamera_ReleaseVideoStreamingService* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_ReleaseVideoStreamingService>(get_class());
        }
    } // namespace IVRTrackedCamera_ReleaseVideoStreamingService
} // namespace app::classes::types
