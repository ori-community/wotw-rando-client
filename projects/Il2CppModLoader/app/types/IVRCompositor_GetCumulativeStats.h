#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetCumulativeStats {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_GetCumulativeStats__Class** type_info;
        inline app::IVRCompositor_GetCumulativeStats__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetCumulativeStats__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetCumulativeStats");
        }
        inline app::IVRCompositor_GetCumulativeStats* create() {
            return il2cpp::create_object<app::IVRCompositor_GetCumulativeStats>(get_class());
        }
    } // namespace IVRCompositor_GetCumulativeStats
} // namespace app::classes::types
