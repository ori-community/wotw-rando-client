#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetTrackingSpace {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_GetTrackingSpace__Class** type_info;
        inline app::IVRCompositor_GetTrackingSpace__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetTrackingSpace__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetTrackingSpace");
        }
        inline app::IVRCompositor_GetTrackingSpace* create() {
            return il2cpp::create_object<app::IVRCompositor_GetTrackingSpace>(get_class());
        }
    } // namespace IVRCompositor_GetTrackingSpace
} // namespace app::classes::types
