#pragma once
#include <Modloader/app/structs/IVRTrackedCamera_ReleaseVideoStreamingService.h>
#include <Modloader/app/structs/IVRTrackedCamera_ReleaseVideoStreamingService__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_ReleaseVideoStreamingService {
        inline app::IVRTrackedCamera_ReleaseVideoStreamingService__Class** type_info() {
            static app::IVRTrackedCamera_ReleaseVideoStreamingService__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRTrackedCamera_ReleaseVideoStreamingService__Class**)(modloader::win::memory::resolve_rva(0x04731678));
            }
            return cache;
        }
        inline app::IVRTrackedCamera_ReleaseVideoStreamingService__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_ReleaseVideoStreamingService__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_ReleaseVideoStreamingService");
        }
        inline app::IVRTrackedCamera_ReleaseVideoStreamingService* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_ReleaseVideoStreamingService>(get_class());
        }
    } // namespace IVRTrackedCamera_ReleaseVideoStreamingService
} // namespace app::classes::types
