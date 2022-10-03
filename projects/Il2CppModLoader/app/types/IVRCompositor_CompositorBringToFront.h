#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_CompositorBringToFront {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_CompositorBringToFront__Class** type_info;
        inline app::IVRCompositor_CompositorBringToFront__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_CompositorBringToFront__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_CompositorBringToFront");
        }
        inline app::IVRCompositor_CompositorBringToFront* create() {
            return il2cpp::create_object<app::IVRCompositor_CompositorBringToFront>(get_class());
        }
    } // namespace IVRCompositor_CompositorBringToFront
} // namespace app::classes::types
