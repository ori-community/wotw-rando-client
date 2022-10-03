#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera_HasCamera {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRTrackedCamera_HasCamera__Class** type_info;
        inline app::IVRTrackedCamera_HasCamera__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRTrackedCamera_HasCamera__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera", "_HasCamera");
        }
        inline app::IVRTrackedCamera_HasCamera* create() {
            return il2cpp::create_object<app::IVRTrackedCamera_HasCamera>(get_class());
        }
    } // namespace IVRTrackedCamera_HasCamera
} // namespace app::classes::types
