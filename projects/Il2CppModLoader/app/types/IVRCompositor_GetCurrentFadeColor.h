#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetCurrentFadeColor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_GetCurrentFadeColor__Class** type_info;
        inline app::IVRCompositor_GetCurrentFadeColor__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetCurrentFadeColor__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetCurrentFadeColor");
        }
        inline app::IVRCompositor_GetCurrentFadeColor* create() {
            return il2cpp::create_object<app::IVRCompositor_GetCurrentFadeColor>(get_class());
        }
    } // namespace IVRCompositor_GetCurrentFadeColor
} // namespace app::classes::types
