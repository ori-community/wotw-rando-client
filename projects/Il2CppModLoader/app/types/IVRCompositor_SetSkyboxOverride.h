#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_SetSkyboxOverride {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_SetSkyboxOverride__Class** type_info;
        inline app::IVRCompositor_SetSkyboxOverride__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_SetSkyboxOverride__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_SetSkyboxOverride");
        }
        inline app::IVRCompositor_SetSkyboxOverride* create() {
            return il2cpp::create_object<app::IVRCompositor_SetSkyboxOverride>(get_class());
        }
    } // namespace IVRCompositor_SetSkyboxOverride
} // namespace app::classes::types
