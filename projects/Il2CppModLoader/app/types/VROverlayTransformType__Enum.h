#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VROverlayTransformType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VROverlayTransformType__Enum__Class** type_info;
        inline app::VROverlayTransformType__Enum__Class* get_class() {
            return il2cpp::get_class<app::VROverlayTransformType__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "VROverlayTransformType");
        }
        inline app::VROverlayTransformType__Enum* create() {
            return il2cpp::create_object<app::VROverlayTransformType__Enum>(get_class());
        }
    } // namespace VROverlayTransformType__Enum
} // namespace app::classes::types
