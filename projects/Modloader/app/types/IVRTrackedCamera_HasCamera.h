#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_HasCamera {
        inline app::IVRTrackedCamera_HasCamera__Class** type_info = (app::IVRTrackedCamera_HasCamera__Class**)(modloader::win::memory::resolve_rva(0x04740668));
        inline app::IVRTrackedCamera_HasCamera__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_HasCamera__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_HasCamera");
        }
        inline app::IVRTrackedCamera_HasCamera* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_HasCamera>(get_class());
        }
    } // namespace IVRTrackedCamera_HasCamera
} // namespace app::classes::types
