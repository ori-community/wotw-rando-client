#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFrustumDataCaptureAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFrustumDataCaptureAgent__Class** type_info;
        inline app::CameraFrustumDataCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::CameraFrustumDataCaptureAgent__Class>(type_info, "", "CameraFrustumDataCaptureAgent");
        }
        inline app::CameraFrustumDataCaptureAgent* create() {
            return il2cpp::create_object<app::CameraFrustumDataCaptureAgent>(get_class());
        }
    } // namespace CameraFrustumDataCaptureAgent
} // namespace app::classes::types
