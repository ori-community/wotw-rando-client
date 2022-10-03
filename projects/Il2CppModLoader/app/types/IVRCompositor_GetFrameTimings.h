#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetFrameTimings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_GetFrameTimings__Class** type_info;
        inline app::IVRCompositor_GetFrameTimings__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetFrameTimings__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetFrameTimings");
        }
        inline app::IVRCompositor_GetFrameTimings* create() {
            return il2cpp::create_object<app::IVRCompositor_GetFrameTimings>(get_class());
        }
    } // namespace IVRCompositor_GetFrameTimings
} // namespace app::classes::types
