#pragma once
#include <Modloader/app/structs/CameraFrustumDataCaptureAgent.h>
#include <Modloader/app/structs/CameraFrustumDataCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFrustumDataCaptureAgent {
        inline app::CameraFrustumDataCaptureAgent__Class** type_info() {
            static app::CameraFrustumDataCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFrustumDataCaptureAgent__Class**)(modloader::win::memory::resolve_rva(0x04781DD8));
            }
            return cache;
        }
        inline app::CameraFrustumDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::CameraFrustumDataCaptureAgent__Class>(type_info(), "", "CameraFrustumDataCaptureAgent");
        }
        inline app::CameraFrustumDataCaptureAgent* create() {
            return il2cpp::create_object<app::CameraFrustumDataCaptureAgent>(get_class());
        }
    } // namespace CameraFrustumDataCaptureAgent
} // namespace app::classes::types
