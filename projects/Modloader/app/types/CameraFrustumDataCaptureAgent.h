#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFrustumDataCaptureAgent {
        inline app::CameraFrustumDataCaptureAgent__Class** type_info = (app::CameraFrustumDataCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04781DD8));
        inline app::CameraFrustumDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::CameraFrustumDataCaptureAgent__Class>(type_info, "", "CameraFrustumDataCaptureAgent");
        }
        inline app::CameraFrustumDataCaptureAgent* create() {
            return il2cpp::create_object<app::CameraFrustumDataCaptureAgent>(get_class());
        }
    } // namespace CameraFrustumDataCaptureAgent
} // namespace app::classes::types
