#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_AcquireVideoStreamingService {
        inline app::IVRTrackedCamera_AcquireVideoStreamingService__Class** type_info = (app::IVRTrackedCamera_AcquireVideoStreamingService__Class**)(modloader::win::memory::resolve_rva(0x04742580));
        inline app::IVRTrackedCamera_AcquireVideoStreamingService__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_AcquireVideoStreamingService__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_AcquireVideoStreamingService");
        }
        inline app::IVRTrackedCamera_AcquireVideoStreamingService* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_AcquireVideoStreamingService>(get_class());
        }
    } // namespace IVRTrackedCamera_AcquireVideoStreamingService
} // namespace app::classes::types
