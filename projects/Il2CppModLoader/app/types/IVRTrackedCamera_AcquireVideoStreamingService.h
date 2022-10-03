#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_AcquireVideoStreamingService {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRTrackedCamera_AcquireVideoStreamingService__Class** type_info;
        inline app::IVRTrackedCamera_AcquireVideoStreamingService__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_AcquireVideoStreamingService__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_AcquireVideoStreamingService");
        }
        inline app::IVRTrackedCamera_AcquireVideoStreamingService* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_AcquireVideoStreamingService>(get_class());
        }
    } // namespace IVRTrackedCamera_AcquireVideoStreamingService
} // namespace app::classes::types
