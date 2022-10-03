#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVRCompositor_HideMirrorWindow {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVRCompositor_HideMirrorWindow__Class** type_info;
        inline app::IVRCompositor_HideMirrorWindow__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRCompositor_HideMirrorWindow__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "IVRCompositor", "_HideMirrorWindow");
        }
        inline app::IVRCompositor_HideMirrorWindow* create() {
            return il2cpp::create_object<app::IVRCompositor_HideMirrorWindow>(get_class());
        }
    } // namespace IVRCompositor_HideMirrorWindow
} // namespace app::classes::types
