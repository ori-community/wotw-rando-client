#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_ClearSkyboxOverride {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_ClearSkyboxOverride__Class** type_info;
        inline app::IVRCompositor_ClearSkyboxOverride__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_ClearSkyboxOverride__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_ClearSkyboxOverride");
        }
        inline app::IVRCompositor_ClearSkyboxOverride* create() {
            return il2cpp::create_object<app::IVRCompositor_ClearSkyboxOverride>(get_class());
        }
    } // namespace IVRCompositor_ClearSkyboxOverride
} // namespace app::classes::types
