#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetFrameTimeRemaining {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_GetFrameTimeRemaining__Class** type_info;
        inline app::IVRCompositor_GetFrameTimeRemaining__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetFrameTimeRemaining__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetFrameTimeRemaining");
        }
        inline app::IVRCompositor_GetFrameTimeRemaining* create() {
            return il2cpp::create_object<app::IVRCompositor_GetFrameTimeRemaining>(get_class());
        }
    } // namespace IVRCompositor_GetFrameTimeRemaining
} // namespace app::classes::types
