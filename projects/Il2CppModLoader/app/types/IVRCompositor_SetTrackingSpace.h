#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_SetTrackingSpace {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_SetTrackingSpace__Class** type_info;
        inline app::IVRCompositor_SetTrackingSpace__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_SetTrackingSpace__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_SetTrackingSpace");
        }
        inline app::IVRCompositor_SetTrackingSpace* create() {
            return il2cpp::create_object<app::IVRCompositor_SetTrackingSpace>(get_class());
        }
    } // namespace IVRCompositor_SetTrackingSpace
} // namespace app::classes::types
