#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_GetFrameTiming {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_GetFrameTiming__Class** type_info;
        inline app::IVRCompositor_GetFrameTiming__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_GetFrameTiming__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_GetFrameTiming");
        }
        inline app::IVRCompositor_GetFrameTiming* create() {
            return il2cpp::create_object<app::IVRCompositor_GetFrameTiming>(get_class());
        }
    } // namespace IVRCompositor_GetFrameTiming
} // namespace app::classes::types
