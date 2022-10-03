#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_FadeGrid {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_FadeGrid__Class** type_info;
        inline app::IVRCompositor_FadeGrid__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_FadeGrid__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_FadeGrid");
        }
        inline app::IVRCompositor_FadeGrid* create() {
            return il2cpp::create_object<app::IVRCompositor_FadeGrid>(get_class());
        }
    } // namespace IVRCompositor_FadeGrid
} // namespace app::classes::types
