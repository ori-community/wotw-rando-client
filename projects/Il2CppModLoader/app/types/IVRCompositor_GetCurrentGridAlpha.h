#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetCurrentGridAlpha {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_GetCurrentGridAlpha__Class** type_info;
        inline app::IVRCompositor_GetCurrentGridAlpha__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetCurrentGridAlpha__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetCurrentGridAlpha");
        }
        inline app::IVRCompositor_GetCurrentGridAlpha* create() {
            return il2cpp::create_object<app::IVRCompositor_GetCurrentGridAlpha>(get_class());
        }
    } // namespace IVRCompositor_GetCurrentGridAlpha
} // namespace app::classes::types
