#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_CompositorQuit {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_CompositorQuit__Class** type_info;
        inline app::IVRCompositor_CompositorQuit__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_CompositorQuit__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_CompositorQuit");
        }
        inline app::IVRCompositor_CompositorQuit* create() {
            return il2cpp::create_object<app::IVRCompositor_CompositorQuit>(get_class());
        }
    } // namespace IVRCompositor_CompositorQuit
} // namespace app::classes::types
