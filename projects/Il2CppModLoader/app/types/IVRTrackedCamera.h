#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRTrackedCamera {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRTrackedCamera__Class** type_info;
        inline app::IVRTrackedCamera__Class* get_class() {
            return il2cpp::get_class<app::IVRTrackedCamera__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRTrackedCamera");
        }
        inline app::IVRTrackedCamera* create() {
            return il2cpp::create_object<app::IVRTrackedCamera>(get_class());
        }
        inline app::IVRTrackedCamera__Boxed* box(app::IVRTrackedCamera value) {
            return il2cpp::box_value<app::IVRTrackedCamera__Boxed>(get_class(), value);
        }
    } // namespace IVRTrackedCamera
} // namespace app::classes::types
