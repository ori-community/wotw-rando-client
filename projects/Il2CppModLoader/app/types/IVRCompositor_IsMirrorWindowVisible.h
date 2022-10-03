#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_IsMirrorWindowVisible {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_IsMirrorWindowVisible__Class** type_info;
        inline app::IVRCompositor_IsMirrorWindowVisible__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_IsMirrorWindowVisible__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_IsMirrorWindowVisible");
        }
        inline app::IVRCompositor_IsMirrorWindowVisible* create() {
            return il2cpp::create_object<app::IVRCompositor_IsMirrorWindowVisible>(get_class());
        }
    } // namespace IVRCompositor_IsMirrorWindowVisible
} // namespace app::classes::types
